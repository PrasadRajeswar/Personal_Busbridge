`timescale 1ns/1ps
`default_nettype none

module mc_wdb #(
  parameter int AXI_DATA_W    = 256,
  parameter int AXI_MASK_W    = 32,
  parameter int DFI_PC_DATA_W = 32,
  parameter int DFI_PC_MASK_W = 4,
  parameter int WDB_DEPTH     = 16,
  parameter int WDB_ADDR_W    = $clog2(WDB_DEPTH)
) (
  input  wire logic                      clk,           // Scheduler clock (dfi_clk domain)
  input  wire logic                      rst_n,         // Synchronous active-low reset

  // Write port: stores full 256-bit payload and 32-bit byte mask in 1 cycle
  input  wire logic                      wdb_push_val,
  input  wire logic [AXI_DATA_W-1:0]     wdb_push_data,
  input  wire logic [AXI_MASK_W-1:0]     wdb_push_mask,
  output logic      [WDB_ADDR_W-1:0]     wdb_alloc_ptr,
  output logic                           wdb_full,
  output logic                           wdb_overflow,
  output logic      [WDB_DEPTH-1:0]      wdb_data_rdy,

  // Outgoing port to DFI: streams 32 bits per cycle across 8 write beats
  input  wire logic [WDB_ADDR_W-1:0]     wdb_raddr,
  input  wire logic [2:0]                wbeat,         // Write beat counter (0..7) to DRAM PHY
  output logic      [DFI_PC_DATA_W-1:0]  wdb_rdata,
  output logic      [DFI_PC_MASK_W-1:0]  wdb_rmask,

  // Pop port: releases slot on the final write beat (wbeat == 7)
  input  wire logic                      wdb_pop_val,
  input  wire logic [WDB_ADDR_W-1:0]     wdb_pop_ptr
);

  logic [AXI_DATA_W-1:0] data_mem [WDB_DEPTH-1:0];
  logic [AXI_MASK_W-1:0] mask_mem [WDB_DEPTH-1:0];
  logic [WDB_DEPTH-1:0]  valid_reg;
  logic                  free_found;

  assign wdb_data_rdy = valid_reg;
  assign wdb_full     = &valid_reg;
  assign wdb_overflow = wdb_push_val && wdb_full;

  // Allocate lowest available free slot
  always_comb begin
    wdb_alloc_ptr = '0;
    free_found    = 1'b0;
    for (int i = 0; i < WDB_DEPTH; i++) begin
      if (!valid_reg[i] && !free_found) begin
        wdb_alloc_ptr = WDB_ADDR_W'(i);
        free_found    = 1'b1;
      end
    end
  end

  // Combinational multiplexing: selects the 32-bit slice and 4-bit mask for the current write beat
  assign wdb_rdata = data_mem[wdb_raddr][wbeat*32 +: 32];
  assign wdb_rmask = mask_mem[wdb_raddr][wbeat*4  +: 4];

  always_ff @(posedge clk) begin
    if (!rst_n) begin
      valid_reg <= '0;
      for (int i = 0; i < WDB_DEPTH; i++) begin
        data_mem[i] <= '0;
        mask_mem[i] <= '0;
      end
    end else begin
      // Release slot only on the final write beat (beat 7)
      if (wdb_pop_val && (wbeat == 3'd7)) begin
        valid_reg[wdb_pop_ptr] <= 1'b0;
      end

      // Push full 256-bit payload and 32-bit mask in 1 cycle
      if (wdb_push_val && !wdb_full) begin
        valid_reg[wdb_alloc_ptr] <= 1'b1;
        data_mem[wdb_alloc_ptr]  <= wdb_push_data;
        mask_mem[wdb_alloc_ptr]  <= wdb_push_mask;
      end
    end
  end

endmodule : mc_wdb
`default_nettype wire
