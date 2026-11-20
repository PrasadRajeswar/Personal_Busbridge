// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mc16x2_updated.h for the primary calling header

#ifndef VERILATED_VTB_MC16X2_UPDATED_MC_CH_ARB_H_
#define VERILATED_VTB_MC16X2_UPDATED_MC_CH_ARB_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mc16x2_updated__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mc16x2_updated_mc_ch_arb final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(row_req_valid,1,0);
    VL_IN8(row_req_legal,1,0);
    VL_IN8(row_req_refresh,1,0);
    VL_IN8(row_grant_ack,1,0);
    VL_OUT8(row_grant,1,0);
    VL_OUT8(row_valid,0,0);
    VL_OUT8(row_pc_sel,0,0);
    VL_IN8(col_req_valid,1,0);
    VL_IN8(col_req_legal,1,0);
    VL_IN8(col_req_refresh,1,0);
    VL_IN8(col_grant_ack,1,0);
    VL_OUT8(col_grant,1,0);
    VL_OUT8(col_valid,0,0);
    VL_OUT8(col_pc_sel,0,0);
    CData/*0:0*/ __PVT__row_grant_idx;
    CData/*0:0*/ __PVT__col_grant_idx;
    CData/*7:0*/ __PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr;
    CData/*0:0*/ __PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen;
    CData/*7:0*/ __PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr;
    CData/*0:0*/ __PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen;
    VL_IN(col_cmd,23,0);
    VL_OUT16(col_cmd_out,11,0);
    VL_IN64(row_cmd,43,0);
    VL_OUT(row_cmd_out,21,0);
    IData/*31:0*/ __PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ __PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i;
    VlUnpacked<CData/*7:0*/, 2> __PVT__u_row_arbiter__DOT__wait_ctr;
    VlUnpacked<CData/*7:0*/, 2> __PVT__u_col_arbiter__DOT__wait_ctr;

    // INTERNAL VARIABLES
    Vtb_mc16x2_updated__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mc16x2_updated_mc_ch_arb(Vtb_mc16x2_updated__Syms* symsp, const char* v__name);
    ~Vtb_mc16x2_updated_mc_ch_arb();
    VL_UNCOPYABLE(Vtb_mc16x2_updated_mc_ch_arb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
