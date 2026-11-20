`timescale 1ns/1ps
`default_nettype none

module mc_addr_decode (
    input wire logic clk, rst_n,

    // AXI4 Write Address Channel
    input wire logic [7:0]  awid, awlen,
    input wire logic [39:0] awaddr,
    input wire logic [2:0]  awsize,
    input wire logic [1:0]  awburst,
    input wire logic        awvalid,
    output logic            awready,

    // AXI4 Write Data Channel
    input wire logic [255:0] wdata,
    input wire logic [31:0]  wstrb,
    input wire logic         wvalid,
    output logic             wready,

    // AXI4 Write Response Channel
    output logic [7:0] bid,
    output logic [1:0] bresp,
    output logic       bvalid,
    input wire logic   bready,

    // AXI4 Read Address Channel
    input wire logic [7:0]  arid, arlen,
    input wire logic [39:0] araddr,
    input wire logic [2:0]  arsize,
    input wire logic [1:0]  arburst,
    input wire logic        arvalid,
    output logic            arready,

    // AXI4 Read Data Channel
    output logic [7:0]   rid,
    output logic [255:0] rdata,
    output logic [1:0]   rresp,
    output logic         rlast, rvalid,
    input wire logic     rready,

    // CMDQ Interface to 32 PC Cores
    output logic [31:0]        cmd_push_val,
    output logic [31:0][35:0]  cmd_push_entry,
    input wire logic [31:0]    cmdq_full,

    // WDB Interface to 32 PC Cores (Full 256-bit data + 32-bit mask)
    output logic [31:0]        wdb_push_val,
    output logic [31:0][255:0] wdb_push_data,
    output logic [31:0][31:0]  wdb_push_mask,
    input wire logic [31:0][3:0] wdb_alloc_ptr,
    input wire logic [31:0]    wdb_full,
    input wire logic [31:0]    wr_done,

    // RDB Interface from 32 PC Cores (Full 256-bit read return)
    input wire logic [31:0]        rdb_valid,
    output logic [31:0]            rdb_ready,
    input wire logic [31:0][255:0] rdb_data
);

    // FSM States
    logic [2:0] state;
    localparam logic [2:0] IDLE    = 3'b000, 
                           W_DATA  = 3'b001,
                           W_ISSUE = 3'b010, 
                           W_WAIT  = 3'b011,
                           B_RESP  = 3'b100, 
                           R_ISSUE = 3'b101,
                           R_WAIT  = 3'b110, 
                           R_RESP  = 3'b111;

    logic [7:0]   txn_id;
    logic [39:0]  txn_addr;
    logic [255:0] write_payload;
    logic [31:0]  write_strobes;
    logic [255:0] read_payload;

    // Address Decoding (Spec Section 3.1.4)
    logic [3:0]  channel;
    logic        pc;
    logic [4:0]  target;
    logic [13:0] row;
    logic [1:0]  bg, bank;
    logic [4:0]  col;

    logic prefer_read;
    logic accept_write, accept_read;
    logic write_dispatch, read_dispatch;

    // Field extraction per Spec Table 3.1.4
    assign channel = txn_addr[32:29];
    assign pc      = txn_addr[28];
    assign target  = {channel, pc};
    assign row     = txn_addr[27:14];
    assign bg      = txn_addr[13:12];
    assign bank    = txn_addr[11:10];
    assign col     = txn_addr[9:5];
    // Bits [4:0] are byte offsets within the 32-byte beat and not used for CH/PC routing

    assign accept_write = awvalid && awready;
    assign accept_read  = arvalid && arready;

    // Address Handshake Arbitration
    always_comb begin
        awready = 1'b0;
        arready = 1'b0;

        if (rst_n && state == IDLE) begin
            if (awvalid && arvalid) begin
                if (prefer_read)
                    arready = 1'b1;
                else
                    awready = 1'b1;
            end
            else if (awvalid)
                awready = 1'b1;
            else if (arvalid)
                arready = 1'b1;
        end
    end

    // Bus Responses
    always_comb begin
        wready  = rst_n && (state == W_DATA);

        bid     = txn_id;
        bresp   = 2'b00; // OKAY
        bvalid  = rst_n && (state == B_RESP);

        rid     = txn_id;
        rdata   = read_payload;
        rresp   = 2'b00; // OKAY
        rlast   = 1'b1;
        rvalid  = rst_n && (state == R_RESP);
    end

    // Dispatch qualifiers
    assign write_dispatch = (state == W_ISSUE) &&
                            !cmdq_full[target] &&
                            !wdb_full[target] &&
                            (|write_strobes);

    assign read_dispatch  = (state == R_ISSUE) &&
                            !cmdq_full[target];

    // Core Enqueue Combinational Logic
    always_comb begin
        cmd_push_val   = '0;
        cmd_push_entry = '0;
        wdb_push_val   = '0;
        wdb_push_data  = '0;
        wdb_push_mask  = '0;
        rdb_ready      = '0;

        if (rst_n && write_dispatch) begin
            cmd_push_val[target]   = 1'b1;
            cmd_push_entry[target] = {
                txn_id, 1'b1, row, bg, bank, col,
                wdb_alloc_ptr[target]
            };
            wdb_push_val[target]  = 1'b1;
            wdb_push_data[target] = write_payload;  // Full 256 bits
            wdb_push_mask[target] = ~write_strobes; // Full 32-bit active-high mask
        end

        if (rst_n && read_dispatch) begin
            cmd_push_val[target]   = 1'b1;
            cmd_push_entry[target] = {
                txn_id, 1'b0, row, bg, bank, col, 4'b0000
            };
        end

        if (rst_n && state == R_WAIT)
            rdb_ready[target] = 1'b1;
    end

    // State Machine
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state         <= IDLE;
            txn_id        <= '0;
            txn_addr      <= '0;
            write_payload <= '0;
            write_strobes <= '0;
            read_payload  <= '0;
            prefer_read   <= 1'b0;
        end
        else begin
            case (state)
                IDLE: begin
                    if (accept_write) begin
                        txn_id        <= awid;
                        txn_addr      <= awaddr;
                        read_payload  <= '0;
                        prefer_read   <= 1'b1;
                        state         <= W_DATA;
                    end
                    else if (accept_read) begin
                        txn_id        <= arid;
                        txn_addr      <= araddr;
                        read_payload  <= '0;
                        prefer_read   <= 1'b0;
                        state         <= R_ISSUE;
                    end
                end

                W_DATA: begin
                    if (wvalid && wready) begin
                        write_payload <= wdata; // Capture all 256 bits
                        write_strobes <= wstrb; // Capture all 32 strobes

                        if (wstrb == 32'h0000_0000)
                            state <= B_RESP;
                        else
                            state <= W_ISSUE;
                    end
                end

                W_ISSUE: begin
                    if (write_dispatch)
                        state <= W_WAIT;
                end

                W_WAIT: begin
                    if (wr_done[target])
                        state <= B_RESP;
                end

                B_RESP: begin
                    if (bready)
                        state <= IDLE;
                end

                R_ISSUE: begin
                    if (read_dispatch)
                        state <= R_WAIT;
                end

                R_WAIT: begin
                    if (rdb_valid[target] && rdb_ready[target]) begin
                        read_payload <= rdb_data[target]; // Capture full 256 bits
                        state        <= R_RESP;
                    end
                end

                R_RESP: begin
                    if (rready)
                        state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule
`default_nettype wire
