// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated_mc_ch_arb.h"

VL_ATTR_COLD void Vtb_mc16x2_updated_mc_ch_arb___ctor_var_reset(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->row_req_legal = VL_RAND_RESET_I(2);
    vlSelf->row_req_refresh = VL_RAND_RESET_I(2);
    vlSelf->row_grant_ack = VL_RAND_RESET_I(2);
    vlSelf->row_cmd = VL_RAND_RESET_Q(44);
    vlSelf->row_grant = VL_RAND_RESET_I(2);
    vlSelf->row_valid = VL_RAND_RESET_I(1);
    vlSelf->row_pc_sel = VL_RAND_RESET_I(1);
    vlSelf->row_cmd_out = VL_RAND_RESET_I(22);
    vlSelf->col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->col_req_legal = VL_RAND_RESET_I(2);
    vlSelf->col_req_refresh = VL_RAND_RESET_I(2);
    vlSelf->col_grant_ack = VL_RAND_RESET_I(2);
    vlSelf->col_cmd = VL_RAND_RESET_I(24);
    vlSelf->col_grant = VL_RAND_RESET_I(2);
    vlSelf->col_valid = VL_RAND_RESET_I(1);
    vlSelf->col_pc_sel = VL_RAND_RESET_I(1);
    vlSelf->col_cmd_out = VL_RAND_RESET_I(12);
    vlSelf->__PVT__row_grant_idx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_grant_idx = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 0;
}
