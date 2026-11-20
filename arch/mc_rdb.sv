`timescale 1ns/1ps
`default_nettype none

module mc_rdb #(
  parameter int AXI_DATA_W    = 256,
  parameter int DFI_PC_DATA_W = 32,
  parameter int AXI_ID_W      = 8,
  parameter int RDB_DEPTH     = 16,
  parameter int RDB_ADDR_W    = $clog2(RDB_DEPTH)
) (
  input  wire logic                      clk,          // Scheduler/DFI return clock.
  input  wire logic                      rst_n,        // Synchronous active-low reset.

  // PHY read data returns in issue order but without an AXI ID. Record the ID
  // at RD issue so it can be restored when the corresponding data returns.
  input  wire logic                      rd_cmd_issue_val,
  input  wire logic [AXI_ID_W-1:0]       rd_cmd_issue_id,
  output logic                           rdb_full,      // Stops RD issue before response storage overflows.

  // A valid return consumes the oldest in-flight ID and creates one completed
  // {ID,data} entry after assembling an 8-beat burst (256 bits).
  // Returns with no in-flight ID are ignored.
  input  wire logic                      dfi_rddata_valid,
  input  wire logic [DFI_PC_DATA_W-1:0]  dfi_rddata,

  // Standard valid/ready completion interface toward the AXI response path.
  output logic                           rdb_valid,     // Current data and ID are valid.
  input  wire logic                      rdb_ready,     // Consumer accepts the current entry.
  output logic      [AXI_DATA_W-1:0]     rdb_data,
  output logic      [AXI_ID_W-1:0]       rdb_axi_id
);

  localparam int BEATS_PER_BURST = AXI_DATA_W / DFI_PC_DATA_W; // 256 / 32 = 8
  localparam int BEAT_CNT_W      = $clog2(BEATS_PER_BURST);     // 3 bits

  // 1. In-Flight Read ID FIFO (matches issued RD commands to returning PHY data)
  logic [AXI_ID_W-1:0]   id_fifo     [RDB_DEPTH-1:0];
  logic [RDB_ADDR_W:0]   id_wr_ptr, id_rd_ptr;

  // 2. Returning Read Data FIFO (stores matched {axi_id, data} for AXI return)
  logic [AXI_DATA_W-1:0] data_fifo   [RDB_DEPTH-1:0];
  logic [AXI_ID_W-1:0]   ret_id_fifo [RDB_DEPTH-1:0];
  logic [RDB_ADDR_W:0]   data_wr_ptr, data_rd_ptr;

  // 3. Beat counter for assembling BL8 burst into 256-bit word
  logic [BEAT_CNT_W-1:0] rbeat_cnt;

  // id_wr_ptr counts every issued read while data_rd_ptr counts every response
  // consumed by AXI. Their difference therefore covers both PHY-in-flight and
  // locally buffered responses, which is the capacity the scheduler must limit.
  wire [RDB_ADDR_W:0] outstanding_cnt = id_wr_ptr - data_rd_ptr;
  wire                id_empty        = (id_wr_ptr == id_rd_ptr);
  assign rdb_full  = (outstanding_cnt == RDB_DEPTH[RDB_ADDR_W:0]);

  // data_wr_ptr/data_rd_ptr describe only completed responses exposed to AXI.
  wire data_empty  = (data_wr_ptr == data_rd_ptr);
  assign rdb_valid  = !data_empty;
  assign rdb_data   = data_fifo[data_rd_ptr[RDB_ADDR_W-1:0]];
  assign rdb_axi_id = ret_id_fifo[data_rd_ptr[RDB_ADDR_W-1:0]];

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      id_wr_ptr   <= '0;
      id_rd_ptr   <= '0;
      data_wr_ptr <= '0;
      data_rd_ptr <= '0;
      rbeat_cnt   <= '0;
    end else begin
      // Record AXI ID when RD command issues to DFI
      if (rd_cmd_issue_val && !rdb_full) begin
        id_fifo[id_wr_ptr[RDB_ADDR_W-1:0]] <= rd_cmd_issue_id;
        id_wr_ptr                          <= id_wr_ptr + 1'b1;
      end

      // Capture returning DFI read data across 8 beats and pair with oldest in-flight AXI ID
      if (dfi_rddata_valid && !id_empty) begin
        data_fifo[data_wr_ptr[RDB_ADDR_W-1:0]][rbeat_cnt*DFI_PC_DATA_W +: DFI_PC_DATA_W] <= dfi_rddata;
        if (rbeat_cnt == BEAT_CNT_W'(BEATS_PER_BURST - 1)) begin
          ret_id_fifo[data_wr_ptr[RDB_ADDR_W-1:0]] <= id_fifo[id_rd_ptr[RDB_ADDR_W-1:0]];
          id_rd_ptr                                <= id_rd_ptr + 1'b1;
          data_wr_ptr                              <= data_wr_ptr + 1'b1;
          rbeat_cnt                                <= '0;
        end else begin
          rbeat_cnt <= rbeat_cnt + 1'b1;
        end
      end

      // Pop completed read data to AXI R CDC FIFO
      if (rdb_valid && rdb_ready) begin
        data_rd_ptr <= data_rd_ptr + 1'b1;
      end
    end
  end

endmodule : mc_rdb
