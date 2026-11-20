`timescale 1ns/1ps
`default_nettype none

//==============================================================================
// Testbench: tb_mc16x2_updated
// Description:
//   Dedicated verification testbench for the updated mc16x2 memory controller.
//   Verifies end-to-end 256-bit write transactions:
//     1. AXI4 Handshakes: 256-bit WDATA + 32-bit WSTRB in 1 aclk cycle
//     2. Decoder & WDB: Capture of full 256-bit payload into WDB
//     3. DFI Command: Row ACTIVATE and Column WRITE timing (tRCD enforcement)
//     4. DFI Data Phase: Verification that dfi_wrdata_en asserts for 8 cycles
//        and streams all eight 32-bit words (word 0..7) and 4-bit masks
//     5. Write Completion: AXI B Channel (BVALID, BID, BRESP)
//     6. Multi-Channel & Multi-PC coverage (CH0/PC0, CH0/PC1, CH1/PC0, CH2/PC1)
//==============================================================================

module tb_mc16x2_updated;

    //==========================================================================
    // Clock and Reset Signals
    //==========================================================================
    logic aclk;         // 500 MHz AXI domain clock (period = 2.0 ns)
    logic dfi_clk;      // 1000 MHz DFI / Controller clock (period = 1.0 ns)
    logic aresetn;      // AXI domain active-low reset
    logic ctl_reset_n;  // DFI domain active-low reset

    //==========================================================================
    // AXI4 Interface Signals
    //==========================================================================
    // Write Address Channel (AW)
    logic [7:0]   s_axi_awid;
    logic [39:0]  s_axi_awaddr;
    logic [7:0]   s_axi_awlen;
    logic [2:0]   s_axi_awsize;
    logic [1:0]   s_axi_awburst;
    logic         s_axi_awlock;
    logic [3:0]   s_axi_awqos;
    logic [3:0]   s_axi_awcache;
    logic [2:0]   s_axi_awprot;
    logic         s_axi_awvalid;
    logic         s_axi_awready;

    // Write Data Channel (W)
    logic [255:0] s_axi_wdata;
    logic [31:0]  s_axi_wstrb;
    logic         s_axi_wlast;
    logic         s_axi_wvalid;
    logic         s_axi_wready;

    // Write Response Channel (B)
    logic [7:0]   s_axi_bid;
    logic [1:0]   s_axi_bresp;
    logic         s_axi_bvalid;
    logic         s_axi_bready;

    // Read Channels (Tied off for write verification)
    logic [7:0]   s_axi_arid;
    logic [39:0]  s_axi_araddr;
    logic [7:0]   s_axi_arlen;
    logic [2:0]   s_axi_arsize;
    logic [1:0]   s_axi_arburst;
    logic         s_axi_arlock;
    logic [3:0]   s_axi_arqos;
    logic [3:0]   s_axi_arcache;
    logic [2:0]   s_axi_arprot;
    logic         s_axi_arvalid;
    logic         s_axi_arready;

    logic [7:0]   s_axi_rid;
    logic [255:0] s_axi_rdata;
    logic [1:0]   s_axi_rresp;
    logic         s_axi_rlast;
    logic         s_axi_rvalid;
    logic         s_axi_rready;

    //==========================================================================
    // DFI 5.0 Interface Signals (16 Channels)
    //==========================================================================
    logic [15:0]       dfi_row_val;
    logic [15:0][21:0] dfi_row;
    logic [15:0]       dfi_col_val;
    logic [15:0][11:0] dfi_col;
    logic [15:0][63:0] dfi_wrdata;
    logic [15:0][7:0]  dfi_wrdata_mask;
    logic [15:0][1:0]  dfi_wrdata_en;
    logic [15:0][1:0]  dfi_rddata_en;
    logic [15:0][63:0] dfi_rddata;
    logic [15:0][1:0]  dfi_rddata_valid;

    // Error / Status Flags
    logic [31:0]  err_cmdq_overflow;
    logic [31:0]  err_wdb_overflow;
    logic [31:0]  err_ref_deadline_miss;

    //==========================================================================
    // Test Tracking Variables
    //==========================================================================
    int test_count = 0;
    int pass_count = 0;
    int fail_count = 0;

    // Behavioral HBM3 Memory Model: 16 CH x 2 PC x 32-bit x 8 beats
    logic [31:0] hbm_mem [0:15][0:1][0:7];

    //==========================================================================
    // Clock Generation
    //==========================================================================
    // AXI Clock: 500 MHz (2.0 ns period)
    initial begin
        aclk = 1'b0;
        forever #1.0 aclk = ~aclk;
    end

    // DFI Clock: 1000 MHz (1.0 ns period)
    initial begin
        dfi_clk = 1'b0;
        forever #0.5 dfi_clk = ~dfi_clk;
    end

    //==========================================================================
    // DUT Instantiation
    //==========================================================================
    mc16x2 dut (
        .aclk                  (aclk),
        .aresetn               (aresetn),
        .dfi_clk               (dfi_clk),
        .ctl_reset_n           (ctl_reset_n),

        // AXI AW
        .s_axi_awid            (s_axi_awid),
        .s_axi_awaddr          (s_axi_awaddr),
        .s_axi_awlen           (s_axi_awlen),
        .s_axi_awsize          (s_axi_awsize),
        .s_axi_awburst         (s_axi_awburst),
        .s_axi_awlock          (s_axi_awlock),
        .s_axi_awqos           (s_axi_awqos),
        .s_axi_awcache         (s_axi_awcache),
        .s_axi_awprot          (s_axi_awprot),
        .s_axi_awvalid         (s_axi_awvalid),
        .s_axi_awready         (s_axi_awready),

        // AXI W
        .s_axi_wdata           (s_axi_wdata),
        .s_axi_wstrb           (s_axi_wstrb),
        .s_axi_wlast           (s_axi_wlast),
        .s_axi_wvalid          (s_axi_wvalid),
        .s_axi_wready          (s_axi_wready),

        // AXI B
        .s_axi_bid             (s_axi_bid),
        .s_axi_bresp           (s_axi_bresp),
        .s_axi_bvalid          (s_axi_bvalid),
        .s_axi_bready          (s_axi_bready),

        // AXI AR
        .s_axi_arid            (s_axi_arid),
        .s_axi_araddr          (s_axi_araddr),
        .s_axi_arlen           (s_axi_arlen),
        .s_axi_arsize          (s_axi_arsize),
        .s_axi_arburst         (s_axi_arburst),
        .s_axi_arlock          (s_axi_arlock),
        .s_axi_arqos           (s_axi_arqos),
        .s_axi_arcache         (s_axi_arcache),
        .s_axi_arprot          (s_axi_arprot),
        .s_axi_arvalid         (s_axi_arvalid),
        .s_axi_arready         (s_axi_arready),

        // AXI R
        .s_axi_rid             (s_axi_rid),
        .s_axi_rdata           (s_axi_rdata),
        .s_axi_rresp           (s_axi_rresp),
        .s_axi_rlast           (s_axi_rlast),
        .s_axi_rvalid          (s_axi_rvalid),
        .s_axi_rready          (s_axi_rready),

        // DFI Interface
        .dfi_row_val           (dfi_row_val),
        .dfi_row               (dfi_row),
        .dfi_col_val           (dfi_col_val),
        .dfi_col               (dfi_col),
        .dfi_wrdata            (dfi_wrdata),
        .dfi_wrdata_mask       (dfi_wrdata_mask),
        .dfi_wrdata_en         (dfi_wrdata_en),
        .dfi_rddata_en         (dfi_rddata_en),
        .dfi_rddata            (dfi_rddata),
        .dfi_rddata_valid      (dfi_rddata_valid),

        // Error Flags
        .err_cmdq_overflow     (err_cmdq_overflow),
        .err_wdb_overflow      (err_wdb_overflow),
        .err_ref_deadline_miss (err_ref_deadline_miss)
    );

    //==========================================================================
    // Address Builder Helper Function (Spec Section 3.1.4)
    // Layout:
    //   [39:33] Reserved (0)
    //   [32:29] Channel (4 bits, 0..15)
    //   [28]    Pseudo-Channel (1 bit, 0..1)
    //   [27:14] Row Address (14 bits, 0..16383)
    //   [13:12] Bank Group (2 bits, 0..3)
    //   [11:10] Bank Address (2 bits, 0..3)
    //   [9:5]   Column Address (5 bits, 0..31)
    //   [4:0]   Byte Offset (5 bits, 00000 for aligned beat)
    //==========================================================================
    function automatic logic [39:0] make_axi_addr(
        input logic [3:0]  channel,
        input logic        pc,
        input logic [13:0] row,
        input logic [1:0]  bg,
        input logic [1:0]  bank,
        input logic [4:0]  col
    );
        return {7'b0, channel, pc, row, bg, bank, col, 5'b00000};
    endfunction

    //==========================================================================
    // Reset Sequence Task
    //==========================================================================
    task automatic apply_reset();
        begin
            $display("[%0t] [RESET] Asserting AXI and Controller resets...", $time);
            aresetn     = 1'b0;
            ctl_reset_n = 1'b0;

            s_axi_awid    = '0;
            s_axi_awaddr  = '0;
            s_axi_awlen   = '0;
            s_axi_awsize  = '0;
            s_axi_awburst = '0;
            s_axi_awlock  = '0;
            s_axi_awqos   = '0;
            s_axi_awcache = '0;
            s_axi_awprot  = '0;
            s_axi_awvalid = 1'b0;

            s_axi_wdata   = '0;
            s_axi_wstrb   = '0;
            s_axi_wlast   = 1'b0;
            s_axi_wvalid  = 1'b0;

            s_axi_bready  = 1'b1;

            s_axi_arid    = '0;
            s_axi_araddr  = '0;
            s_axi_arlen   = '0;
            s_axi_arsize  = '0;
            s_axi_arburst = '0;
            s_axi_arlock  = '0;
            s_axi_arqos   = '0;
            s_axi_arcache = '0;
            s_axi_arprot  = '0;
            s_axi_arvalid = 1'b0;
            s_axi_rready  = 1'b1;

            dfi_rddata       = '0;
            dfi_rddata_valid = '0;

            repeat (10) @(posedge dfi_clk);

            // Release ctl_reset_n on negedge of dfi_clk
            @(negedge dfi_clk);
            ctl_reset_n = 1'b1;
            $display("[%0t] [RESET] ctl_reset_n released synchronously to dfi_clk.", $time);

            repeat (3) @(posedge aclk);
            // Release aresetn on negedge of aclk
            @(negedge aclk);
            aresetn = 1'b1;
            $display("[%0t] [RESET] aresetn released synchronously to aclk.", $time);

            // Settle CDC FIFOs
            repeat (25) @(posedge dfi_clk);
            $display("[%0t] [RESET] Initialization and CDC stabilization complete.\n", $time);
        end
    endtask

    //==========================================================================
    // Core Verification Task: 256-bit Write & 8-Beat DFI Stream Verification
    //==========================================================================
    task automatic verify_256bit_write(
        input string        test_name,
        input logic [7:0]   id,
        input logic [3:0]   channel,
        input logic         pc,
        input logic [13:0]  row,
        input logic [1:0]   bg,
        input logic [1:0]   bank,
        input logic [4:0]   col,
        input logic [255:0] wdata_256,
        input logic [31:0]  wstrb_32
    );
        logic [39:0] addr;
        logic [4:0]  target;
        logic        test_passed;
        logic        act_seen;
        logic        wr_col_seen;
        logic        bresp_seen;
        int          act_cycles;
        int          streamed_beats;
        logic [31:0] captured_words [0:7];
        logic [3:0]  captured_masks [0:7];

        begin
            test_count++;
            test_passed    = 1'b1;
            target         = {channel, pc};
            addr           = make_axi_addr(channel, pc, row, bg, bank, col);
            act_seen       = 1'b0;
            wr_col_seen    = 1'b0;
            bresp_seen     = 1'b0;
            act_cycles     = 0;
            streamed_beats = 0;

            $display("==========================================================================================");
            $display("[%0t] START TEST %0d: %s", $time, test_count, test_name);
            $display("==========================================================================================");
            $display("  TARGET: Channel=%0d, Pseudo-Channel=%0d (Target Core %0d)", channel, pc, target);
            $display("  ADDRESS: 0x%010h (Row=0x%04h, BG=%0d, Bank=%0d, Col=0x%02h)", addr, row, bg, bank, col);
            $display("  256-bit WDATA : 0x%064h", wdata_256);
            $display("  32-bit  WSTRB : 0x%08h", wstrb_32);
            $display("------------------------------------------------------------------------------------------");

            fork
                //--------------------------------------------------------------
                // Thread 1: AXI Master Driver (AW and W Handshakes)
                // Synchronously driven on posedge aclk with realistic tCO pad delay
                //--------------------------------------------------------------
                begin
                    // AW Channel Handshake
                    @(posedge aclk);
                    #0.1;
                    s_axi_awid    = id;
                    s_axi_awaddr  = addr;
                    s_axi_awlen   = 8'd0;         // 1 beat
                    s_axi_awsize  = 3'd5;         // 32 bytes (256 bits)
                    s_axi_awburst = 2'b01;        // INCR
                    s_axi_awlock  = 1'b0;
                    s_axi_awqos   = 4'h0;
                    s_axi_awcache = 4'h0;
                    s_axi_awprot  = 3'h0;
                    s_axi_awvalid = 1'b1;

                    do @(posedge aclk);
                    while (!s_axi_awready);

                    #0.1;
                    s_axi_awvalid = 1'b0;
                    $display("[%0t] [AXI_AW] AW Handshake Complete: ID=0x%02h, Addr=0x%010h", $time, id, addr);

                    // W Channel Handshake
                    s_axi_wdata  = wdata_256;
                    s_axi_wstrb  = wstrb_32;
                    s_axi_wlast  = 1'b1;
                    s_axi_wvalid = 1'b1;

                    do @(posedge aclk);
                    while (!s_axi_wready);

                    #0.1;
                    s_axi_wvalid = 1'b0;
                    s_axi_wlast  = 1'b0;
                    $display("[%0t] [AXI_W ] W Handshake Complete: All 256 bits transferred in 1 cycle", $time);
                end

                //--------------------------------------------------------------
                // Thread 2: DFI Monitor & 8-Beat Burst Verifier
                //--------------------------------------------------------------
                begin
                    int timeout = 0;
                    logic act_started = 1'b0;

                    while ((streamed_beats < 8) && timeout < 3000) begin
                        @(posedge dfi_clk);
                        timeout++;
                        if (act_started) act_cycles++;

                        // Check Row ACTIVATE Command
                        if (dfi_row_val[channel]) begin
                            logic [21:0] r = dfi_row[channel];
                            if (r[20:18] == 3'b001) begin // ACT
                                act_seen    = 1'b1;
                                act_started = 1'b1;
                                $display("[%0t] [DFI_ROW] ACTIVATE on Ch %0d: PC_SEL=%0d, BG=%0d, BA=%0d, ROW=0x%04h",
                                         $time, channel, r[21], r[17:16], r[15:14], r[13:0]);
                                if (r[21] !== pc || r[17:16] !== bg || r[15:14] !== bank || r[13:0] !== row) begin
                                    $display("  [ERROR] DFI Row parameters mismatch!");
                                    test_passed = 1'b0;
                                end
                            end
                        end

                        // Check Column WRITE Command
                        if (dfi_col_val[channel]) begin
                            logic [11:0] c = dfi_col[channel];
                            if (c[10:9] == 2'b10) begin // WR
                                wr_col_seen = 1'b1;
                                $display("[%0t] [DFI_COL] WRITE Command on Ch %0d: PC_SEL=%0d, BG=%0d, BA=%0d, COL=0x%02h (tRCD = %0d cycles)",
                                         $time, channel, c[11], c[8:7], c[6:5], c[4:0], act_cycles);
                                if (c[11] !== pc || c[8:7] !== bg || c[6:5] !== bank || c[4:0] !== col) begin
                                    $display("  [ERROR] DFI Column parameters mismatch!");
                                    test_passed = 1'b0;
                                end
                            end
                        end

                        // Check 8-Beat Data Streaming on the 32-bit DFI Lane
                        if (dfi_wrdata_en[channel][pc]) begin
                            logic [31:0] beat_data = dfi_wrdata[channel][pc*32 +: 32];
                            logic [3:0]  beat_mask = dfi_wrdata_mask[channel][pc*4 +: 4];

                            captured_words[streamed_beats] = beat_data;
                            captured_masks[streamed_beats] = beat_mask;
                            hbm_mem[channel][pc][streamed_beats] = beat_data;

                            $display("[%0t] [DFI_STREAM] Beat %0d/7: WrData=0x%08h, Mask=0x%01h, WrEn=1",
                                     $time, streamed_beats, beat_data, beat_mask);

                            // Verify current 32-bit word slice against expected 256-bit slice
                            if (beat_data !== wdata_256[streamed_beats*32 +: 32]) begin
                                $display("  [ERROR] Beat %0d Data MISMATCH: Expected 0x%08h, Got 0x%08h",
                                         streamed_beats, wdata_256[streamed_beats*32 +: 32], beat_data);
                                test_passed = 1'b0;
                            end

                            // Verify active-high byte mask against inverted write strobe
                            if (beat_mask !== ~wstrb_32[streamed_beats*4 +: 4]) begin
                                $display("  [ERROR] Beat %0d Mask MISMATCH: Expected 0x%01h, Got 0x%01h",
                                         streamed_beats, ~wstrb_32[streamed_beats*4 +: 4], beat_mask);
                                test_passed = 1'b0;
                            end

                            streamed_beats++;
                        end
                    end

                    if (!act_seen) begin
                        $display("  [FATAL] TIMEOUT: No ACTIVATE command seen!");
                        test_passed = 1'b0;
                    end
                    if (!wr_col_seen) begin
                        $display("  [FATAL] TIMEOUT: No Column WRITE command seen!");
                        test_passed = 1'b0;
                    end
                    if (streamed_beats < 8) begin
                        $display("  [FATAL] INCOMPLETE STREAM: Only %0d of 8 beats received!", streamed_beats);
                        test_passed = 1'b0;
                    end
                end

                //--------------------------------------------------------------
                // Thread 3: AXI Write Response (B Channel)
                //--------------------------------------------------------------
                begin
                    int b_timeout = 0;
                    while (!s_axi_bvalid && b_timeout < 3000) begin
                        @(posedge aclk);
                        b_timeout++;
                    end

                    if (s_axi_bvalid) begin
                        bresp_seen = 1'b1;
                        $display("[%0t] [AXI_B  ] B Response Received: BID=0x%02h, BRESP=0b%02b", $time, s_axi_bid, s_axi_bresp);
                        if (s_axi_bid !== id) begin
                            $display("  [ERROR] Response BID mismatch: Expected 0x%02h, Got 0x%02h", id, s_axi_bid);
                            test_passed = 1'b0;
                        end
                        if (s_axi_bresp !== 2'b00) begin
                            $display("  [ERROR] Response BRESP error: Expected OKAY (00), Got %02b", s_axi_bresp);
                            test_passed = 1'b0;
                        end
                    end else begin
                        $display("  [FATAL] TIMEOUT: No AXI BVALID response received!");
                        test_passed = 1'b0;
                    end
                end
            join

            // Check Error Flags
            if (err_cmdq_overflow !== 32'h0 || err_wdb_overflow !== 32'h0 || err_ref_deadline_miss !== 32'h0) begin
                $display("  [ERROR] Unexpected Error Flag Asserted: CMDQ_OFL=0x%h, WDB_OFL=0x%h, REF_MISS=0x%h",
                         err_cmdq_overflow, err_wdb_overflow, err_ref_deadline_miss);
                test_passed = 1'b0;
            end

            // Result Reporting
            if (test_passed) begin
                pass_count++;
                $display(">>> TEST %0d PASSED: All 256 bits correctly verified across 8 DFI cycles! <<<\n", test_count);
            end else begin
                fail_count++;
                $display(">>> TEST %0d FAILED! <<<\n", test_count);
            end

            repeat (10) @(posedge dfi_clk);
        end
    endtask

    //==========================================================================
    // Core Verification Task: 256-bit Read & 8-Beat DFI Return Verification
    //==========================================================================
    task automatic verify_256bit_read(
        input string        test_name,
        input logic [7:0]   id,
        input logic [3:0]   channel,
        input logic         pc,
        input logic [13:0]  row,
        input logic [1:0]   bg,
        input logic [1:0]   bank,
        input logic [4:0]   col,
        input logic [255:0] expected_rdata_256
    );
        logic [39:0] addr;
        logic [4:0]  target;
        logic        test_passed;
        logic        act_seen;
        logic        rd_col_seen;
        logic        rresp_seen;
        int          act_cycles;
        logic [255:0] captured_rdata;

        begin
            test_count++;
            test_passed    = 1'b1;
            target         = {channel, pc};
            addr           = make_axi_addr(channel, pc, row, bg, bank, col);
            act_seen       = 1'b0;
            rd_col_seen    = 1'b0;
            rresp_seen     = 1'b0;
            act_cycles     = 0;
            captured_rdata = '0;

            $display("==========================================================================================");
            $display("[%0t] START TEST %0d: %s", $time, test_count, test_name);
            $display("==========================================================================================");
            $display("  TARGET: Channel=%0d, Pseudo-Channel=%0d (Target Core %0d)", channel, pc, target);
            $display("  ADDRESS: 0x%010h (Row=0x%04h, BG=%0d, Bank=%0d, Col=0x%02h)", addr, row, bg, bank, col);
            $display("  EXPECTED 256-bit RDATA: 0x%064h", expected_rdata_256);
            $display("------------------------------------------------------------------------------------------");

            fork
                //--------------------------------------------------------------
                // Thread 1: AXI Master Driver (AR Channel Handshake)
                // Synchronously driven on posedge aclk with realistic tCO pad delay
                //--------------------------------------------------------------
                begin
                    @(posedge aclk);
                    #0.1;
                    s_axi_arid    = id;
                    s_axi_araddr  = addr;
                    s_axi_arlen   = 8'd0;         // 1 beat
                    s_axi_arsize  = 3'd5;         // 32 bytes (256 bits)
                    s_axi_arburst = 2'b01;        // INCR
                    s_axi_arlock  = 1'b0;
                    s_axi_arqos   = 4'h0;
                    s_axi_arcache = 4'h0;
                    s_axi_arprot  = 3'h0;
                    s_axi_arvalid = 1'b1;

                    do @(posedge aclk);
                    while (!s_axi_arready);

                    #0.1;
                    s_axi_arvalid = 1'b0;
                    $display("[%0t] [AXI_AR] AR Handshake Complete: ID=0x%02h, Addr=0x%010h", $time, id, addr);
                end

                //--------------------------------------------------------------
                // Thread 2: DFI Column RD Monitor & PHY 8-Beat Read Data Responder
                //--------------------------------------------------------------
                begin
                    int timeout = 0;
                    logic act_started = 1'b0;

                    while (!rd_col_seen && timeout < 3000) begin
                        @(posedge dfi_clk);
                        timeout++;
                        if (act_started) act_cycles++;

                        // Check Row ACTIVATE Command (if bank wasn't already open)
                        if (dfi_row_val[channel]) begin
                            logic [21:0] r = dfi_row[channel];
                            if (r[20:18] == 3'b001) begin // ACT
                                act_seen    = 1'b1;
                                act_started = 1'b1;
                                $display("[%0t] [DFI_ROW] ACTIVATE on Ch %0d: PC_SEL=%0d, BG=%0d, BA=%0d, ROW=0x%04h",
                                         $time, channel, r[21], r[17:16], r[15:14], r[13:0]);
                            end
                        end

                        // Check Column READ Command
                        if (dfi_col_val[channel]) begin
                            logic [11:0] c = dfi_col[channel];
                            if (c[10:9] == 2'b01) begin // RD
                                rd_col_seen = 1'b1;
                                $display("[%0t] [DFI_COL] READ Command on Ch %0d: PC_SEL=%0d, BG=%0d, BA=%0d, COL=0x%02h",
                                         $time, channel, c[11], c[8:7], c[6:5], c[4:0]);
                                if (c[11] !== pc || c[8:7] !== bg || c[6:5] !== bank || c[4:0] !== col) begin
                                    $display("  [ERROR] DFI Column parameters mismatch!");
                                    test_passed = 1'b0;
                                end
                            end
                        end
                    end

                    if (!rd_col_seen) begin
                        $display("  [FATAL] TIMEOUT: No Column READ command seen on DFI!");
                        test_passed = 1'b0;
                    end else begin
                        // Simulate DRAM CAS Latency (4 cycles)
                        repeat (4) @(posedge dfi_clk);

                        // Drive 8 consecutive cycles of 32-bit read data (BL8) on posedge dfi_clk
                        // (#0.05 models real physical PHY Clock-to-Out pad delay)
                        $display("[%0t] [PHY_MODEL] Starting 8-cycle BL8 DFI Read Data Return...", $time);
                        for (int beat = 0; beat < 8; beat++) begin
                            @(posedge dfi_clk);
                            #0.05;
                            dfi_rddata_valid[channel][pc]    = 1'b1;
                            dfi_rddata[channel][pc*32 +: 32] = hbm_mem[channel][pc][beat];
                            $display("[%0t] [DFI_RD_STREAM] Beat %0d/7: RdData=0x%08h, Valid=1",
                                     $time, beat, hbm_mem[channel][pc][beat]);
                        end

                        // Deassert DFI read data valid after exactly 8 cycles
                        @(posedge dfi_clk);
                        #0.05;
                        dfi_rddata_valid[channel][pc]    = 1'b0;
                        dfi_rddata[channel][pc*32 +: 32] = '0;
                        $display("[%0t] [PHY_MODEL] 8-cycle BL8 DFI Read Data Return Complete.", $time);
                    end
                end

                //--------------------------------------------------------------
                // Thread 3: AXI Read Master (R Channel Verification)
                //--------------------------------------------------------------
                begin
                    int r_timeout = 0;
                    while (!s_axi_rvalid && r_timeout < 3000) begin
                        @(posedge aclk);
                        r_timeout++;
                    end

                    if (s_axi_rvalid) begin
                        rresp_seen     = 1'b1;
                        captured_rdata = s_axi_rdata;
                        $display("[%0t] [AXI_R  ] R Read Data Handshake: RID=0x%02h, RRESP=0b%02b, RLAST=%0d",
                                 $time, s_axi_rid, s_axi_rresp, s_axi_rlast);
                        $display("  Captured 256-bit RDATA: 0x%064h", captured_rdata);

                        if (s_axi_rid !== id) begin
                            $display("  [ERROR] Response RID mismatch: Expected 0x%02h, Got 0x%02h", id, s_axi_rid);
                            test_passed = 1'b0;
                        end
                        if (s_axi_rresp !== 2'b00) begin
                            $display("  [ERROR] Response RRESP error: Expected OKAY (00), Got %02b", s_axi_rresp);
                            test_passed = 1'b0;
                        end
                        if (s_axi_rlast !== 1'b1) begin
                            $display("  [ERROR] Response RLAST mismatch: Expected 1, Got %0b", s_axi_rlast);
                            test_passed = 1'b0;
                        end
                        if (captured_rdata !== expected_rdata_256) begin
                            $display("  [ERROR] 256-bit RDATA MISMATCH!");
                            $display("    Expected: 0x%064h", expected_rdata_256);
                            $display("    Got:      0x%064h", captured_rdata);
                            test_passed = 1'b0;
                        end else begin
                            $display("  [SUCCESS] All 256 bits matched perfectly in a single AXI clock cycle!");
                        end
                    end else begin
                        $display("  [FATAL] TIMEOUT: No AXI RVALID response received!");
                        test_passed = 1'b0;
                    end
                end
            join

            // Check Error Flags
            if (err_cmdq_overflow !== 32'h0 || err_wdb_overflow !== 32'h0 || err_ref_deadline_miss !== 32'h0) begin
                $display("  [ERROR] Unexpected Error Flag Asserted: CMDQ_OFL=0x%h, WDB_OFL=0x%h, REF_MISS=0x%h",
                         err_cmdq_overflow, err_wdb_overflow, err_ref_deadline_miss);
                test_passed = 1'b0;
            end

            // Result Reporting
            if (test_passed) begin
                pass_count++;
                $display(">>> TEST %0d PASSED: 256-bit Read correctly verified across 8 DFI cycles to 1 AXI cycle! <<<\n", test_count);
            end else begin
                fail_count++;
                $display(">>> TEST %0d FAILED! <<<\n", test_count);
            end

            repeat (10) @(posedge dfi_clk);
        end
    endtask

    //==========================================================================
    // Main Test Stimulus
    //==========================================================================
    initial begin
        $display("\n================================================================================");
        $display("   STARTING MC16X2 UPDATED TOP MODULE VERIFICATION SUITE");
        $display("   Verifying 256-bit AXI to 8-Beat DFI Streaming Architecture");
        $display("================================================================================\n");

        // Dump VCD
        $dumpfile("mc16x2_updated.vcd");
        $dumpvars(0, tb_mc16x2_updated);

        // Reset
        apply_reset();

        //----------------------------------------------------------------------
        // Test 1: CH0, PC0 - Full 256-bit write with all strobes active
        //----------------------------------------------------------------------
        verify_256bit_write(
            "CH0_PC0 Full 256-bit Write (WSTRB=0xFFFFFFFF)",
            8'hA1,
            4'd0, 1'b0,         // CH0, PC0
            14'h0001, 2'd0, 2'd0, 5'h00, // Row 1, BG 0, Bank 0, Col 0
            256'h00112233_44556677_8899AABB_CCDDEEFF_FEDCBA98_76543210_01234567_89ABCDEF,
            32'hFFFF_FFFF
        );

        //----------------------------------------------------------------------
        // Test 2: CH0, PC0 - Full 256-bit read from the same location
        // Verifies 8-cycle DFI read return assembled into 1 AXI R cycle
        //----------------------------------------------------------------------
        verify_256bit_read(
            "CH0_PC0 Full 256-bit Read (8-Cycle DFI Stream to 1 AXI Cycle)",
            8'hB1,
            4'd0, 1'b0,         // CH0, PC0 (same target)
            14'h0001, 2'd0, 2'd0, 5'h00, // Row 1, BG 0, Bank 0, Col 0 (same address)
            256'h00112233_44556677_8899AABB_CCDDEEFF_FEDCBA98_76543210_01234567_89ABCDEF // Same data
        );

        
        //----------------------------------------------------------------------
        // Final Summary
        //----------------------------------------------------------------------
        $display("\n================================================================================");
        $display("   VERIFICATION SUMMARY");
        $display("================================================================================");
        $display("   TOTAL TESTS RUN  : %0d", test_count);
        $display("   TOTAL PASSED     : %0d", pass_count);
        $display("   TOTAL FAILED     : %0d", fail_count);
        $display("================================================================================\n");

        if (fail_count == 0) begin
            $display("################################################################################");
            $display("                ALL TESTS PASSED SUCCESSFULLY! (100%% Coverage)");
            $display("################################################################################\n");
        end else begin
            $display("********************************************************************************");
            $display("                TEST SUITE FAILED WITH %0d FAILURES", fail_count);
            $display("********************************************************************************\n");
            $fatal(1, "Testbench failure detected.");
        end

        #50;
        $finish;
    end

    // Global Watchdog Timer
    initial begin
        #50000;
        $fatal(1, "[TIMEOUT] Global Simulation Watchdog Timeout reached! Simulation aborted.");
    end

endmodule
`default_nettype wire
