// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated__Syms.h"
#include "Vtb_mc16x2_updated_mc_ch_arb.h"

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid))) {
        if ((1U & ((IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_refresh) 
                   & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid))) {
        if ((IData)((((IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_refresh) 
                      >> 1U) & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb__0\n"); );
    // Body
    vlSelf->row_valid = 0U;
    vlSelf->__PVT__row_grant_idx = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [0U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__row_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid))) {
        if (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
             & (~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        } else if ((1U & ((~ (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                          & ((~ (IData)(vlSelf->row_valid)) 
                             | (vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                [1U] > (IData)(vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->row_valid = 1U;
            vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__row_grant_idx = 1U;
        }
    }
    vlSelf->col_valid = 0U;
    vlSelf->__PVT__col_grant_idx = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__col_grant_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid))) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->col_valid)) 
                      | (vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->col_valid = 1U;
            vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__col_grant_idx = 1U;
        }
    }
    vlSelf->row_pc_sel = 0U;
    vlSelf->row_cmd_out = 0U;
    vlSelf->row_grant = 0U;
    if (vlSelf->row_valid) {
        vlSelf->row_pc_sel = vlSelf->__PVT__row_grant_idx;
        vlSelf->row_cmd_out = ((0x2bU >= (0x3fU & ((IData)(0x16U) 
                                                   * (IData)(vlSelf->__PVT__row_grant_idx))))
                                ? (0x3fffffU & (IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_cmd)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bg)) 
                                                             << 0x26U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_bank)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_addr)) 
                                                                   << 0x16U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bg) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_bank) 
                                                                                << 0xeU) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_addr)))))))))) 
                                                        >> 
                                                        (0x3fU 
                                                         & ((IData)(0x16U) 
                                                            * (IData)(vlSelf->__PVT__row_grant_idx))))))
                                : 0U);
        vlSelf->row_cmd_out = ((0x1fffffU & vlSelf->row_cmd_out) 
                               | ((IData)(vlSelf->row_pc_sel) 
                                  << 0x15U));
        vlSelf->row_grant = ((IData)(vlSelf->row_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__row_grant_idx))));
    }
    vlSelf->col_pc_sel = 0U;
    vlSelf->col_cmd_out = 0U;
    vlSelf->col_grant = 0U;
    if (vlSelf->col_valid) {
        vlSelf->col_pc_sel = vlSelf->__PVT__col_grant_idx;
        vlSelf->col_cmd_out = ((0x17U >= (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__PVT__col_grant_idx))))
                                ? (0xfffU & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                               << 0x15U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bg) 
                                                  << 0x13U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_bank) 
                                                     << 0x11U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_addr) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                           << 9U) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bg) 
                                                              << 7U) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_bank) 
                                                                 << 5U) 
                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_addr)))))))) 
                                             >> (0x1fU 
                                                 & ((IData)(0xcU) 
                                                    * (IData)(vlSelf->__PVT__col_grant_idx)))))
                                : 0U);
        vlSelf->col_cmd_out = ((0x7ffU & (IData)(vlSelf->col_cmd_out)) 
                               | ((IData)(vlSelf->col_pc_sel) 
                                  << 0xbU));
        vlSelf->col_grant = ((IData)(vlSelf->col_grant) 
                             | (3U & ((IData)(1U) << (IData)(vlSelf->__PVT__col_grant_idx))));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_ch_arb___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0;
    // Body
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 0U;
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_row_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        vlSelf->__PVT__u_col_arbiter__DOT__unnamedblk3__DOT__i = 2U;
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid))) {
            if (((IData)(vlSelf->row_grant) & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid))) {
            if ((((IData)(vlSelf->row_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->row_grant)))) {
                __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid))) {
            if (((IData)(vlSelf->col_grant) & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid))) {
            if ((((IData)(vlSelf->col_grant) >> 1U) 
                 & (0U != (IData)(vlSelf->col_grant)))) {
                __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid))) {
                if ((0xffU != vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5 = 1U;
        }
    } else {
        __Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6 = 1U;
        __Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6 = 1U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_row_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_row_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_row_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_col_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_col_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_col_arbiter__DOT__wait_ctr[0U] = 0U;
    }
}
