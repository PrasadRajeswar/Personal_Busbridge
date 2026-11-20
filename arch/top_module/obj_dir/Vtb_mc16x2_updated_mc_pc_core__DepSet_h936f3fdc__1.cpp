// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated__Syms.h"
#include "Vtb_mc16x2_updated_mc_pc_core.h"

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0\n"); );
    // Body
    vlSelf->__PVT__issue_act = ((IData)(vlSelf->row_req_val) 
                                & ((1U == (IData)(vlSelf->row_req_cmd)) 
                                   & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.row_grant) 
                                      >> 1U)));
    vlSelf->__PVT__issue_pre = ((IData)(vlSelf->row_req_val) 
                                & ((2U == (IData)(vlSelf->row_req_cmd)) 
                                   & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.row_grant) 
                                      >> 1U)));
    vlSelf->__PVT__ref_ack = 0U;
    if (vlSelf->__PVT__ref_req) {
        if ((1U & (~ (IData)(vlSelf->__PVT__any_bank_open)))) {
            if (vlSelf->__PVT__legal_ref) {
                if ((2U & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.row_grant))) {
                    vlSelf->__PVT__ref_ack = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__issue_rd = ((IData)(vlSelf->col_req_val) 
                               & ((1U == (IData)(vlSelf->col_req_cmd)) 
                                  & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
                                     >> 1U)));
    vlSelf->__PVT__issue_wr = ((IData)(vlSelf->col_req_val) 
                               & ((2U == (IData)(vlSelf->col_req_cmd)) 
                                  & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
                                     >> 1U)));
    vlSelf->__Vcellinp__u_cmdq__pop_val = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
                                            >> 1U) 
                                           & (IData)(vlSelf->col_req_val));
    vlSelf->wdb_rdata = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U)))
                           ? 0U : (vlSelf->__PVT__u_wdb__DOT__data_mem
                                   [vlSelf->col_req_wdb_ptr][
                                   (((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U))))) 
                         | (vlSelf->__PVT__u_wdb__DOT__data_mem
                            [vlSelf->col_req_wdb_ptr][
                            (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U))));
    vlSelf->wdb_rmask = (0xfU & (vlSelf->__PVT__u_wdb__DOT__mask_mem
                                 [vlSelf->col_req_wdb_ptr] 
                                 >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 2U))));
    vlSelf->__PVT__cmdq_arb_ack = ((0U != vlSelf->__PVT__cmdq_grant) 
                                   & ((~ (IData)(vlSelf->__PVT__ref_req)) 
                                      & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.row_grant) 
                                           >> 1U) & (IData)(vlSelf->row_req_val)) 
                                         | (IData)(vlSelf->__Vcellinp__u_cmdq__pop_val))));
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0\n"); );
    // Body
    vlSelf->__PVT__issue_act = ((IData)(vlSelf->row_req_val) 
                                & ((1U == (IData)(vlSelf->row_req_cmd)) 
                                   & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant)));
    vlSelf->__PVT__issue_pre = ((IData)(vlSelf->row_req_val) 
                                & ((2U == (IData)(vlSelf->row_req_cmd)) 
                                   & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant)));
    vlSelf->__PVT__ref_ack = 0U;
    if (vlSelf->__PVT__ref_req) {
        if ((1U & (~ (IData)(vlSelf->__PVT__any_bank_open)))) {
            if (vlSelf->__PVT__legal_ref) {
                if ((1U & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant))) {
                    vlSelf->__PVT__ref_ack = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__issue_rd = ((IData)(vlSelf->col_req_val) 
                               & ((1U == (IData)(vlSelf->col_req_cmd)) 
                                  & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant)));
    vlSelf->__PVT__issue_wr = ((IData)(vlSelf->col_req_val) 
                               & ((2U == (IData)(vlSelf->col_req_cmd)) 
                                  & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant)));
    vlSelf->__Vcellinp__u_cmdq__pop_val = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                           & (IData)(vlSelf->col_req_val));
    vlSelf->wdb_rdata = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U)))
                           ? 0U : (vlSelf->__PVT__u_wdb__DOT__data_mem
                                   [vlSelf->col_req_wdb_ptr][
                                   (((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U))))) 
                         | (vlSelf->__PVT__u_wdb__DOT__data_mem
                            [vlSelf->col_req_wdb_ptr][
                            (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U))));
    vlSelf->wdb_rmask = (0xfU & (vlSelf->__PVT__u_wdb__DOT__mask_mem
                                 [vlSelf->col_req_wdb_ptr] 
                                 >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 2U))));
    vlSelf->__PVT__cmdq_arb_ack = ((0U != vlSelf->__PVT__cmdq_grant) 
                                   & ((~ (IData)(vlSelf->__PVT__ref_req)) 
                                      & (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant) 
                                          & (IData)(vlSelf->row_req_val)) 
                                         | (IData)(vlSelf->__Vcellinp__u_cmdq__pop_val))));
}

extern const VlWide<8>/*255:0*/ Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_pc_core___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0\n"); );
    // Init
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hab8b0bf2__0;
    u_timing_check__DOT____VdfgTmp_hab8b0bf2__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11132cdf__0;
    u_timing_check__DOT____VdfgTmp_h11132cdf__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hb2d28fa4__0;
    u_timing_check__DOT____VdfgTmp_hb2d28fa4__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11f0ecba__0;
    u_timing_check__DOT____VdfgTmp_h11f0ecba__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11b16388__0;
    u_timing_check__DOT____VdfgTmp_h11b16388__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h113ea5d5__0;
    u_timing_check__DOT____VdfgTmp_h113ea5d5__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h1349cac2__0;
    u_timing_check__DOT____VdfgTmp_h1349cac2__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h127be82f__0;
    u_timing_check__DOT____VdfgTmp_h127be82f__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h1186e3d6__0;
    u_timing_check__DOT____VdfgTmp_h1186e3d6__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11931093__0;
    u_timing_check__DOT____VdfgTmp_h11931093__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h118790e4__0;
    u_timing_check__DOT____VdfgTmp_h118790e4__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11b3de41__0;
    u_timing_check__DOT____VdfgTmp_h11b3de41__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc80a969c__0;
    u_timing_check__DOT____VdfgTmp_hc80a969c__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc8d79bd1__0;
    u_timing_check__DOT____VdfgTmp_hc8d79bd1__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hcf8f8086__0;
    u_timing_check__DOT____VdfgTmp_hcf8f8086__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc36b27e3__0;
    u_timing_check__DOT____VdfgTmp_hc36b27e3__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h113fc8fe__0;
    u_timing_check__DOT____VdfgTmp_h113fc8fe__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc81cdc6b__0;
    u_timing_check__DOT____VdfgTmp_hc81cdc6b__0 = 0;
    CData/*4:0*/ __Vdlyvdim0__u_cmdq__DOT__entries__v0;
    __Vdlyvdim0__u_cmdq__DOT__entries__v0 = 0;
    QData/*35:0*/ __Vdlyvval__u_cmdq__DOT__entries__v0;
    __Vdlyvval__u_cmdq__DOT__entries__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq__DOT__entries__v0;
    __Vdlyvset__u_cmdq__DOT__entries__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq__DOT__entries__v1;
    __Vdlyvset__u_cmdq__DOT__entries__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_wdb__DOT__mask_mem__v0;
    __Vdlyvdim0__u_wdb__DOT__mask_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_wdb__DOT__mask_mem__v0;
    __Vdlyvval__u_wdb__DOT__mask_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__mask_mem__v0;
    __Vdlyvset__u_wdb__DOT__mask_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__mask_mem__v1;
    __Vdlyvset__u_wdb__DOT__mask_mem__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_wdb__DOT__data_mem__v0;
    __Vdlyvdim0__u_wdb__DOT__data_mem__v0 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__u_wdb__DOT__data_mem__v0;
    VL_ZERO_W(256, __Vdlyvval__u_wdb__DOT__data_mem__v0);
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__data_mem__v0;
    __Vdlyvset__u_wdb__DOT__data_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__data_mem__v1;
    __Vdlyvset__u_wdb__DOT__data_mem__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_rdb__DOT__id_fifo__v0;
    __Vdlyvdim0__u_rdb__DOT__id_fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_rdb__DOT__id_fifo__v0;
    __Vdlyvval__u_rdb__DOT__id_fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_rdb__DOT__id_fifo__v0;
    __Vdlyvset__u_rdb__DOT__id_fifo__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_rdb__DOT__data_fifo__v0;
    __Vdlyvdim0__u_rdb__DOT__data_fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvlsb__u_rdb__DOT__data_fifo__v0;
    __Vdlyvlsb__u_rdb__DOT__data_fifo__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_rdb__DOT__data_fifo__v0;
    __Vdlyvval__u_rdb__DOT__data_fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_rdb__DOT__data_fifo__v0;
    __Vdlyvset__u_rdb__DOT__data_fifo__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0;
    __Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0;
    __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0;
    __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0 = 0;
    CData/*2:0*/ __Vdly__u_rdb__DOT__rbeat_cnt;
    __Vdly__u_rdb__DOT__rbeat_cnt = 0;
    CData/*0:0*/ __Vdly__ref_req;
    __Vdly__ref_req = 0;
    SData/*12:0*/ __Vdly__u_ref_eng__DOT__refi_counter;
    __Vdly__u_ref_eng__DOT__refi_counter = 0;
    CData/*3:0*/ __Vdlyvdim0__open_row__v0;
    __Vdlyvdim0__open_row__v0 = 0;
    SData/*13:0*/ __Vdlyvval__open_row__v0;
    __Vdlyvval__open_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__open_row__v0;
    __Vdlyvset__open_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__open_row__v1;
    __Vdlyvset__open_row__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_ras__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_ras__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_ras__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v0;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__faw_timer__v0;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v1;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v2;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v3;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v4;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__faw_timer__v4;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v5;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v6;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__faw_timer__v8;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_wr__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_wr__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_wr__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rc__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rc__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rc__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rp__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rp__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rp__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v17 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96 = 0;
    // Body
    __Vdly__u_ref_eng__DOT__refi_counter = vlSelf->__PVT__u_ref_eng__DOT__refi_counter;
    __Vdly__ref_req = vlSelf->__PVT__ref_req;
    __Vdly__u_rdb__DOT__rbeat_cnt = vlSelf->__PVT__u_rdb__DOT__rbeat_cnt;
    __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0 = 0U;
    __Vdlyvset__u_rdb__DOT__data_fifo__v0 = 0U;
    __Vdlyvset__u_rdb__DOT__id_fifo__v0 = 0U;
    __Vdlyvset__u_wdb__DOT__data_mem__v0 = 0U;
    __Vdlyvset__u_wdb__DOT__data_mem__v1 = 0U;
    __Vdlyvset__u_wdb__DOT__mask_mem__v0 = 0U;
    __Vdlyvset__u_wdb__DOT__mask_mem__v1 = 0U;
    __Vdlyvset__open_row__v0 = 0U;
    __Vdlyvset__open_row__v1 = 0U;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v4 = 0U;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v8 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v17 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96 = 0U;
    __Vdlyvset__u_cmdq__DOT__entries__v0 = 0U;
    __Vdlyvset__u_cmdq__DOT__entries__v1 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n)))) {
        vlSelf->__PVT__u_cmdq__DOT__unnamedblk2__DOT__i = 0x20U;
        vlSelf->__PVT__u_wdb__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelf->__PVT__u_bank_state__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk2__DOT__i = 4U;
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk3__DOT__i = 0x10U;
    }
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk5__DOT__i = 0x10U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk3__DOT__i = 0x20U;
        if ((1U & ((IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_valid) 
                   & (~ (IData)(vlSelf->__PVT__u_rdb__DOT__id_empty))))) {
            __Vdlyvval__u_rdb__DOT__data_fifo__v0 = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc0;
            __Vdlyvset__u_rdb__DOT__data_fifo__v0 = 1U;
            __Vdlyvlsb__u_rdb__DOT__data_fifo__v0 = 
                (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->__PVT__u_rdb__DOT__rbeat_cnt), 5U));
            __Vdlyvdim0__u_rdb__DOT__data_fifo__v0 
                = (0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr));
            if ((7U == (IData)(vlSelf->__PVT__u_rdb__DOT__rbeat_cnt))) {
                __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0 
                    = vlSelf->__PVT__u_rdb__DOT__id_fifo
                    [(0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__id_rd_ptr))];
                __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0 = 1U;
                __Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0 
                    = (0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr));
                __Vdly__u_rdb__DOT__rbeat_cnt = 0U;
                vlSelf->__PVT__u_rdb__DOT__id_rd_ptr 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__id_rd_ptr)));
                vlSelf->__PVT__u_rdb__DOT__data_wr_ptr 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr)));
            } else {
                __Vdly__u_rdb__DOT__rbeat_cnt = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__u_rdb__DOT__rbeat_cnt)));
            }
        }
        vlSelf->__PVT__u_timing_check__DOT__cnt_wtr 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_wtr))
                ? (0xffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_wtr) 
                            - (IData)(1U))) : 0U);
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_rdb__DOT__data_empty)) 
                   & (vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__rdb_ready 
                      >> 2U)))) {
            vlSelf->__PVT__u_rdb__DOT__data_rd_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__data_rd_ptr)));
        }
        vlSelf->__PVT__u_timing_check__DOT__cnt_rrd 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd))
                ? (0xffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd) 
                            - (IData)(1U))) : 0U);
        if (vlSelf->__PVT__issue_act) {
            vlSelf->__PVT__u_timing_check__DOT__cnt_rrd = 5U;
            __Vdlyvval__u_timing_check__DOT__faw_timer__v4 
                = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                    [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                      [2U] - (IData)(1U)))
                    : 0U);
            __Vdlyvset__u_timing_check__DOT__faw_timer__v4 = 1U;
            __Vdlyvval__u_timing_check__DOT__faw_timer__v5 
                = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                    [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                      [1U] - (IData)(1U)))
                    : 0U);
            __Vdlyvval__u_timing_check__DOT__faw_timer__v6 
                = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                    [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                      [0U] - (IData)(1U)))
                    : 0U);
            __Vdlyvset__u_timing_check__DOT__cnt_rc__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16 
                = vlSelf->__PVT__active_bank_idx;
            __Vdlyvset__u_timing_check__DOT__cnt_ras__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16 
                = vlSelf->__PVT__active_bank_idx;
            __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16 
                = vlSelf->__PVT__active_bank_idx;
        }
        if (((IData)(vlSelf->__PVT__issue_rd) & (0x10U 
                                                 != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt)))) {
            __Vdlyvval__u_rdb__DOT__id_fifo__v0 = vlSelf->col_req_axi_id;
            __Vdlyvset__u_rdb__DOT__id_fifo__v0 = 1U;
            __Vdlyvdim0__u_rdb__DOT__id_fifo__v0 = 
                (0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr));
            vlSelf->__PVT__u_rdb__DOT__id_wr_ptr = 
                (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr)));
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                    >> 2U) & (~ (IData)((0xffffU == (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg))))))) {
            __Vdlyvval__u_wdb__DOT__data_mem__v0[0U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x10U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[1U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x11U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[2U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x12U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[3U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x13U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[4U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x14U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[5U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x15U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[6U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x16U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[7U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x17U];
            __Vdlyvset__u_wdb__DOT__data_mem__v0 = 1U;
            __Vdlyvdim0__u_wdb__DOT__data_mem__v0 = vlSelf->wdb_alloc_ptr;
            __Vdlyvval__u_wdb__DOT__mask_mem__v0 = 
                vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[2U];
            __Vdlyvset__u_wdb__DOT__mask_mem__v0 = 1U;
            __Vdlyvdim0__u_wdb__DOT__mask_mem__v0 = vlSelf->wdb_alloc_ptr;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ref_ack)))) {
            if (vlSelf->__PVT__issue_act) {
                __Vdlyvval__open_row__v0 = vlSelf->row_req_addr;
                __Vdlyvset__open_row__v0 = 1U;
                __Vdlyvdim0__open_row__v0 = vlSelf->__PVT__u_bank_state__DOT__flat_update_bank;
            }
        }
        __Vdlyvval__u_timing_check__DOT__faw_timer__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__faw_timer__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__faw_timer__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__faw_timer__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__faw_timer__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [3U] - (IData)(1U)))
                : 0U);
        vlSelf->__PVT__u_timing_check__DOT__cnt_rfc 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc))
                ? (0x3ffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc) 
                             - (IData)(1U))) : 0U);
        if (vlSelf->__PVT__ref_ack) {
            vlSelf->__PVT__u_timing_check__DOT__cnt_rfc = 0x15dU;
            __Vdly__ref_req = 0U;
            vlSelf->__PVT__bank_is_open = 0U;
        } else if (vlSelf->__PVT__issue_act) {
            vlSelf->__PVT__bank_is_open = ((IData)(vlSelf->__PVT__bank_is_open) 
                                           | (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__u_bank_state__DOT__flat_update_bank))));
        } else if (vlSelf->__PVT__issue_pre) {
            vlSelf->__PVT__bank_is_open = ((~ ((IData)(1U) 
                                               << (IData)(vlSelf->__PVT__u_bank_state__DOT__flat_update_bank))) 
                                           & (IData)(vlSelf->__PVT__bank_is_open));
        }
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rc__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xfU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rp__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xfU] - (IData)(1U)))
                : 0U);
        if (vlSelf->__PVT__issue_pre) {
            __Vdlyvset__u_timing_check__DOT__cnt_rp__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16 
                = vlSelf->__PVT__active_bank_idx;
        }
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_wr__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xfU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xfU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_ras__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xfU] - (IData)(1U)))
                : 0U);
        vlSelf->__PVT__u_timing_check__DOT__cnt_ccd 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd))
                ? (0xffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd) 
                            - (IData)(1U))) : 0U);
        if (vlSelf->__PVT__issue_rd) {
            __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16 
                = vlSelf->__PVT__active_bank_idx;
            vlSelf->__PVT__u_timing_check__DOT__cnt_ccd = 3U;
        }
        if (vlSelf->__PVT__issue_wr) {
            vlSelf->__PVT__u_timing_check__DOT__cnt_wtr = 7U;
            __Vdlyvset__u_timing_check__DOT__cnt_wr__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16 
                = vlSelf->__PVT__active_bank_idx;
            vlSelf->__PVT__u_timing_check__DOT__cnt_ccd = 3U;
        }
        if ((1U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if ((vlSelf->__PVT__cmdq_grant & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 1U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((4U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 2U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6 = 1U;
            } else if ((4U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [2U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [2U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8 = 1U;
        }
        if ((8U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 3U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9 = 1U;
            } else if ((8U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [3U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [3U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11 = 1U;
        }
        if ((0x10U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 4U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12 = 1U;
            } else if ((0x10U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [4U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [4U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14 = 1U;
        }
        if ((0x20U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 5U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15 = 1U;
            } else if ((0x20U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [5U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [5U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17 = 1U;
        }
        if ((0x40U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 6U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18 = 1U;
            } else if ((0x40U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [6U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [6U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20 = 1U;
        }
        if ((0x80U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 7U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21 = 1U;
            } else if ((0x80U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [7U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [7U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23 = 1U;
        }
        if ((0x100U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 8U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24 = 1U;
            } else if ((0x100U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [8U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [8U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26 = 1U;
        }
        if ((0x200U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 9U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27 = 1U;
            } else if ((0x200U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [9U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [9U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29 = 1U;
        }
        if ((0x400U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xaU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30 = 1U;
            } else if ((0x400U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xaU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xaU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32 = 1U;
        }
        if ((0x800U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xbU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33 = 1U;
            } else if ((0x800U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xbU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xbU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35 = 1U;
        }
        if ((0x1000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xcU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36 = 1U;
            } else if ((0x1000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xcU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xcU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38 = 1U;
        }
        if ((0x2000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xdU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39 = 1U;
            } else if ((0x2000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xdU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xdU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41 = 1U;
        }
        if ((0x4000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xeU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42 = 1U;
            } else if ((0x4000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xeU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xeU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44 = 1U;
        }
        if ((0x8000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xfU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45 = 1U;
            } else if ((0x8000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xfU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xfU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47 = 1U;
        }
        if ((0x10000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x10U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48 = 1U;
            } else if ((0x10000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x10U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x10U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50 = 1U;
        }
        if ((0x20000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x11U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51 = 1U;
            } else if ((0x20000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x11U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x11U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53 = 1U;
        }
        if ((0x40000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x12U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54 = 1U;
            } else if ((0x40000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x12U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x12U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56 = 1U;
        }
        if ((0x80000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x13U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57 = 1U;
            } else if ((0x80000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x13U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x13U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59 = 1U;
        }
        if ((0x100000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x14U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60 = 1U;
            } else if ((0x100000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x14U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x14U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62 = 1U;
        }
        if ((0x200000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x15U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63 = 1U;
            } else if ((0x200000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x15U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x15U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65 = 1U;
        }
        if ((0x400000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x16U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66 = 1U;
            } else if ((0x400000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x16U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x16U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68 = 1U;
        }
        if ((0x800000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x17U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69 = 1U;
            } else if ((0x800000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x17U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x17U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71 = 1U;
        }
        if ((0x1000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x18U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72 = 1U;
            } else if ((0x1000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x18U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x18U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74 = 1U;
        }
        if ((0x2000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x19U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75 = 1U;
            } else if ((0x2000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x19U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x19U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77 = 1U;
        }
        if ((0x4000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1aU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78 = 1U;
            } else if ((0x4000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1aU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1aU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80 = 1U;
        }
        if ((0x8000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1bU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81 = 1U;
            } else if ((0x8000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1bU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1bU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83 = 1U;
        }
        if ((0x10000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1cU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84 = 1U;
            } else if ((0x10000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1cU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1cU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86 = 1U;
        }
        if ((0x20000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1dU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87 = 1U;
            } else if ((0x20000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1dU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1dU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89 = 1U;
        }
        if ((0x40000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1eU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90 = 1U;
            } else if ((0x40000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1eU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1eU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92 = 1U;
        }
        if ((vlSelf->__PVT__u_cmdq__DOT__valid_reg 
             >> 0x1fU)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1fU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93 = 1U;
            } else if ((vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible 
                        >> 0x1fU)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1fU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1fU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95 = 1U;
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                    >> 2U) & (~ (IData)((0xffffffffU 
                                         == vlSelf->__PVT__u_cmdq__DOT__valid_reg)))))) {
            __Vdlyvval__u_cmdq__DOT__entries__v0 = 
                (0xfffffffffULL & (((QData)((IData)(
                                                    vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[3U])) 
                                    << 0x18U) | ((QData)((IData)(
                                                                 vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[2U])) 
                                                 >> 8U)));
            __Vdlyvset__u_cmdq__DOT__entries__v0 = 1U;
            __Vdlyvdim0__u_cmdq__DOT__entries__v0 = vlSelf->__PVT__u_cmdq__DOT__free_idx;
        }
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xfU] - (IData)(1U)))
                : 0U);
        vlSelf->err_ref_deadline_miss = 0U;
        if ((0U == (IData)(vlSelf->__PVT__u_ref_eng__DOT__refi_counter))) {
            __Vdly__u_ref_eng__DOT__refi_counter = 0xf3bU;
            if (((IData)(vlSelf->__PVT__ref_req) & 
                 (~ (IData)(vlSelf->__PVT__ref_ack)))) {
                vlSelf->err_ref_deadline_miss = 1U;
            }
            __Vdly__ref_req = 1U;
        } else {
            __Vdly__u_ref_eng__DOT__refi_counter = 
                (0x1fffU & ((IData)(vlSelf->__PVT__u_ref_eng__DOT__refi_counter) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active) 
             & (7U == (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)))) {
            vlSelf->__PVT__u_wdb__DOT__valid_reg = 
                ((~ ((IData)(1U) << (IData)(vlSelf->col_req_wdb_ptr))) 
                 & (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg));
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                    >> 2U) & (~ (IData)(vlSelf->wdb_full))))) {
            vlSelf->__PVT__u_wdb__DOT__valid_reg = 
                ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                 | (0xffffU & ((IData)(1U) << (IData)(vlSelf->wdb_alloc_ptr))));
        }
        if (vlSelf->__Vcellinp__u_cmdq__pop_val) {
            vlSelf->__PVT__u_cmdq__DOT__valid_reg = 
                ((~ ((IData)(1U) << (IData)(vlSelf->__PVT__cmdq_grant_idx))) 
                 & vlSelf->__PVT__u_cmdq__DOT__valid_reg);
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                    >> 2U) & (~ (IData)(vlSelf->cmdq_full))))) {
            vlSelf->__PVT__u_cmdq__DOT__valid_reg = 
                (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                 | (0xffffffffULL & ((IData)(1U) << (IData)(vlSelf->__PVT__u_cmdq__DOT__free_idx))));
        }
    } else {
        vlSelf->__PVT__u_rdb__DOT__id_rd_ptr = 0U;
        vlSelf->__PVT__u_rdb__DOT__data_wr_ptr = 0U;
        __Vdly__u_rdb__DOT__rbeat_cnt = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wtr = 0U;
        vlSelf->__PVT__u_rdb__DOT__data_rd_ptr = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rrd = 0U;
        vlSelf->__PVT__u_rdb__DOT__id_wr_ptr = 0U;
        __Vdlyvset__u_wdb__DOT__data_mem__v1 = 1U;
        __Vdlyvset__u_wdb__DOT__mask_mem__v1 = 1U;
        __Vdlyvset__open_row__v1 = 1U;
        __Vdlyvset__u_timing_check__DOT__faw_timer__v8 = 1U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rfc = 0U;
        __Vdlyvset__u_timing_check__DOT__cnt_rc__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_rp__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_wr__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_ras__v17 = 1U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ccd = 0U;
        __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96 = 1U;
        __Vdlyvset__u_cmdq__DOT__entries__v1 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17 = 1U;
        __Vdly__ref_req = 0U;
        __Vdly__u_ref_eng__DOT__refi_counter = 0xf3bU;
        vlSelf->err_ref_deadline_miss = 0U;
        vlSelf->__PVT__bank_is_open = 0U;
        vlSelf->__PVT__u_wdb__DOT__valid_reg = 0U;
        vlSelf->__PVT__u_cmdq__DOT__valid_reg = 0U;
    }
    vlSelf->__PVT__u_rdb__DOT__rbeat_cnt = __Vdly__u_rdb__DOT__rbeat_cnt;
    if (__Vdlyvset__u_rdb__DOT__ret_id_fifo__v0) {
        vlSelf->__PVT__u_rdb__DOT__ret_id_fifo[__Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0] 
            = __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0;
    }
    if (__Vdlyvset__u_rdb__DOT__data_fifo__v0) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__u_rdb__DOT__data_fifo__v0), 
                        vlSelf->__PVT__u_rdb__DOT__data_fifo
                        [__Vdlyvdim0__u_rdb__DOT__data_fifo__v0], __Vdlyvval__u_rdb__DOT__data_fifo__v0);
    }
    if (__Vdlyvset__u_rdb__DOT__id_fifo__v0) {
        vlSelf->__PVT__u_rdb__DOT__id_fifo[__Vdlyvdim0__u_rdb__DOT__id_fifo__v0] 
            = __Vdlyvval__u_rdb__DOT__id_fifo__v0;
    }
    if (__Vdlyvset__u_wdb__DOT__data_mem__v0) {
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][0U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][1U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][2U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][3U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][4U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][5U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][6U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][7U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[7U];
    }
    if (__Vdlyvset__u_wdb__DOT__data_mem__v1) {
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (__Vdlyvset__u_wdb__DOT__mask_mem__v0) {
        vlSelf->__PVT__u_wdb__DOT__mask_mem[__Vdlyvdim0__u_wdb__DOT__mask_mem__v0] 
            = __Vdlyvval__u_wdb__DOT__mask_mem__v0;
    }
    if (__Vdlyvset__u_wdb__DOT__mask_mem__v1) {
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[1U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[2U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[3U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[4U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[5U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[6U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[7U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[8U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[9U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xaU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xbU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xcU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xdU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xeU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xfU] = 0U;
    }
    if (__Vdlyvset__open_row__v0) {
        vlSelf->__PVT__open_row[__Vdlyvdim0__open_row__v0] 
            = __Vdlyvval__open_row__v0;
    }
    if (__Vdlyvset__open_row__v1) {
        vlSelf->__PVT__open_row[0U] = 0U;
        vlSelf->__PVT__open_row[1U] = 0U;
        vlSelf->__PVT__open_row[2U] = 0U;
        vlSelf->__PVT__open_row[3U] = 0U;
        vlSelf->__PVT__open_row[4U] = 0U;
        vlSelf->__PVT__open_row[5U] = 0U;
        vlSelf->__PVT__open_row[6U] = 0U;
        vlSelf->__PVT__open_row[7U] = 0U;
        vlSelf->__PVT__open_row[8U] = 0U;
        vlSelf->__PVT__open_row[9U] = 0U;
        vlSelf->__PVT__open_row[0xaU] = 0U;
        vlSelf->__PVT__open_row[0xbU] = 0U;
        vlSelf->__PVT__open_row[0xcU] = 0U;
        vlSelf->__PVT__open_row[0xdU] = 0U;
        vlSelf->__PVT__open_row[0xeU] = 0U;
        vlSelf->__PVT__open_row[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__faw_timer__v0) {
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[0U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v0;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[1U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v1;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[2U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v2;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[3U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v3;
    }
    if (__Vdlyvset__u_timing_check__DOT__faw_timer__v4) {
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[3U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v4;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[2U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v5;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[1U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v6;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[0U] = 0x1fU;
    }
    if (__Vdlyvset__u_timing_check__DOT__faw_timer__v8) {
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[3U] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rc__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rc__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[__Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16] = 0x31U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rc__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rp__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rp__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[__Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16] = 0xdU;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rp__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_wr__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_wr__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[__Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16] = 0x11U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_wr__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rtp__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rtp__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[__Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16] = 7U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rtp__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_ras__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_ras__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[__Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16] = 0x21U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_ras__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xfU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_cmdq__DOT__entries__v0) {
        vlSelf->__PVT__u_cmdq__DOT__entries[__Vdlyvdim0__u_cmdq__DOT__entries__v0] 
            = __Vdlyvval__u_cmdq__DOT__entries__v0;
    }
    if (__Vdlyvset__u_cmdq__DOT__entries__v1) {
        vlSelf->__PVT__u_cmdq__DOT__entries[0U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[1U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[2U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[3U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[4U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[5U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[6U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[7U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[8U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[9U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xaU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xbU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xcU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xdU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xeU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xfU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x10U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x11U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x12U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x13U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x14U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x15U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x16U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x17U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x18U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x19U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1aU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1bU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1cU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1dU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1eU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rcd__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rcd__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[__Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16] = 0x11U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rcd__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xfU] = 0U;
    }
    vlSelf->__PVT__u_ref_eng__DOT__refi_counter = __Vdly__u_ref_eng__DOT__refi_counter;
    vlSelf->__PVT__ref_req = __Vdly__ref_req;
    vlSelf->__PVT__u_rdb__DOT__data_empty = ((IData)(vlSelf->__PVT__u_rdb__DOT__data_rd_ptr) 
                                             == (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr));
    vlSelf->__PVT__u_rdb__DOT__id_empty = ((IData)(vlSelf->__PVT__u_rdb__DOT__id_rd_ptr) 
                                           == (IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr));
    vlSelf->__PVT__u_rdb__DOT__outstanding_cnt = (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr) 
                                                     - (IData)(vlSelf->__PVT__u_rdb__DOT__data_rd_ptr)));
    u_timing_check__DOT____VdfgTmp_hab8b0bf2__0 = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd)) 
                                                   & ((0U 
                                                       >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                      & (0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                                         [3U])));
    u_timing_check__DOT____VdfgTmp_hb2d28fa4__0 = (
                                                   (0U 
                                                    >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_wtr)));
    vlSelf->__PVT__legal_ref = ((0U >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                & (0U == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd)));
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [1U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [2U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [3U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [4U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [5U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [6U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [7U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [8U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [9U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xaU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xbU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xcU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xdU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xeU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xfU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    vlSelf->__PVT__legal_pre = ((((0U == vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                   [0xfU]) & ((0U == 
                                               vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                               [0xfU]) 
                                              & ((0U 
                                                  >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                 & (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                    [0xfU])))) 
                                 << 0xfU) | ((((0U 
                                                == 
                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                [0xeU]) 
                                               & ((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                   [0xeU]) 
                                                  & ((0U 
                                                      >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                     & (0U 
                                                        == 
                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                        [0xeU])))) 
                                              << 0xeU) 
                                             | ((((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                   [0xdU]) 
                                                  & ((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                      [0xdU]) 
                                                     & ((0U 
                                                         >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                        & (0U 
                                                           == 
                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                           [0xdU])))) 
                                                 << 0xdU) 
                                                | ((((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                      [0xcU]) 
                                                     & ((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                         [0xcU]) 
                                                        & ((0U 
                                                            >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                           & (0U 
                                                              == 
                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                              [0xcU])))) 
                                                    << 0xcU) 
                                                   | ((((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                         [0xbU]) 
                                                        & ((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                            [0xbU]) 
                                                           & ((0U 
                                                               >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                              & (0U 
                                                                 == 
                                                                 vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                 [0xbU])))) 
                                                       << 0xbU) 
                                                      | ((((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                            [0xaU]) 
                                                           & ((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                               [0xaU]) 
                                                              & ((0U 
                                                                  >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                 & (0U 
                                                                    == 
                                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                    [0xaU])))) 
                                                          << 0xaU) 
                                                         | ((((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                               [9U]) 
                                                              & ((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                  [9U]) 
                                                                 & ((0U 
                                                                     >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                    & (0U 
                                                                       == 
                                                                       vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                       [9U])))) 
                                                             << 9U) 
                                                            | ((((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                  [8U]) 
                                                                 & ((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                     [8U]) 
                                                                    & ((0U 
                                                                        >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                       & (0U 
                                                                          == 
                                                                          vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                          [8U])))) 
                                                                << 8U) 
                                                               | ((((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                     [7U]) 
                                                                    & ((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                        [7U]) 
                                                                       & ((0U 
                                                                           >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                          & (0U 
                                                                             == 
                                                                             vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                             [7U])))) 
                                                                   << 7U) 
                                                                  | ((((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                        [6U]) 
                                                                       & ((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                           [6U]) 
                                                                          & ((0U 
                                                                              >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                             & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [6U])))) 
                                                                      << 6U) 
                                                                     | ((((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                           [5U]) 
                                                                          & ((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                              [5U]) 
                                                                             & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [5U])))) 
                                                                         << 5U) 
                                                                        | ((((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                              [4U]) 
                                                                             & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [4U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [4U])))) 
                                                                            << 4U) 
                                                                           | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [3U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [3U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [3U])))) 
                                                                               << 3U) 
                                                                              | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [2U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [2U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [2U])))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [1U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [1U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [1U])))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [0U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [0U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [0U])))))))))))))))))));
    vlSelf->__PVT__slot_data[0x1fU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1fU];
    vlSelf->__PVT__slot_data[0x1eU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1eU];
    vlSelf->__PVT__slot_data[0x1dU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1dU];
    vlSelf->__PVT__slot_data[0x1cU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1cU];
    vlSelf->__PVT__slot_data[0x1bU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1bU];
    vlSelf->__PVT__slot_data[0x1aU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1aU];
    vlSelf->__PVT__slot_data[0x19U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x19U];
    vlSelf->__PVT__slot_data[0x18U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x18U];
    vlSelf->__PVT__slot_data[0x17U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x17U];
    vlSelf->__PVT__slot_data[0x16U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x16U];
    vlSelf->__PVT__slot_data[0x15U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x15U];
    vlSelf->__PVT__slot_data[0x14U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x14U];
    vlSelf->__PVT__slot_data[0x13U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x13U];
    vlSelf->__PVT__slot_data[0x12U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x12U];
    vlSelf->__PVT__slot_data[0x11U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x11U];
    vlSelf->__PVT__slot_data[0x10U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x10U];
    vlSelf->__PVT__slot_data[0xfU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xfU];
    vlSelf->__PVT__slot_data[0xeU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xeU];
    vlSelf->__PVT__slot_data[0xdU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xdU];
    vlSelf->__PVT__slot_data[0xcU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xcU];
    vlSelf->__PVT__slot_data[0xbU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xbU];
    vlSelf->__PVT__slot_data[0xaU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xaU];
    vlSelf->__PVT__slot_data[9U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [9U];
    vlSelf->__PVT__slot_data[8U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [8U];
    vlSelf->__PVT__slot_data[7U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [7U];
    vlSelf->__PVT__slot_data[6U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [6U];
    vlSelf->__PVT__slot_data[5U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [5U];
    vlSelf->__PVT__slot_data[4U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [4U];
    vlSelf->__PVT__slot_data[3U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [3U];
    vlSelf->__PVT__slot_data[2U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [2U];
    vlSelf->__PVT__slot_data[1U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [1U];
    vlSelf->__PVT__slot_data[0U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0U];
    u_timing_check__DOT____VdfgTmp_h11132cdf__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xfU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11f0ecba__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xeU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11b16388__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xdU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h113ea5d5__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xcU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h1349cac2__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xbU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h127be82f__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xaU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h1186e3d6__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [9U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11931093__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [8U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h118790e4__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [7U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11b3de41__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [6U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc80a969c__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [5U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc8d79bd1__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [4U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hcf8f8086__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [3U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc36b27e3__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [2U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h113fc8fe__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [1U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc81cdc6b__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    vlSelf->__PVT__any_bank_open = 0U;
    if ((1U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((2U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((4U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((8U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    vlSelf->__PVT__legal_act = ((((0U == vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                   [0xfU]) & ((0U == 
                                               vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                               [0xfU]) 
                                              & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                 << 0xfU) | ((((0U 
                                                == 
                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                [0xeU]) 
                                               & ((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                   [0xeU]) 
                                                  & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                              << 0xeU) 
                                             | ((((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                   [0xdU]) 
                                                  & ((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                      [0xdU]) 
                                                     & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                 << 0xdU) 
                                                | ((((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                      [0xcU]) 
                                                     & ((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                         [0xcU]) 
                                                        & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                    << 0xcU) 
                                                   | ((((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                         [0xbU]) 
                                                        & ((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                            [0xbU]) 
                                                           & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                       << 0xbU) 
                                                      | ((((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                            [0xaU]) 
                                                           & ((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                               [0xaU]) 
                                                              & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                          << 0xaU) 
                                                         | ((((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                               [9U]) 
                                                              & ((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                  [9U]) 
                                                                 & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                             << 9U) 
                                                            | ((((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                  [8U]) 
                                                                 & ((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                     [8U]) 
                                                                    & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                << 8U) 
                                                               | ((((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                     [7U]) 
                                                                    & ((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                        [7U]) 
                                                                       & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                   << 7U) 
                                                                  | ((((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                        [6U]) 
                                                                       & ((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                           [6U]) 
                                                                          & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                      << 6U) 
                                                                     | ((((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                           [5U]) 
                                                                          & ((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                              [5U]) 
                                                                             & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                         << 5U) 
                                                                        | ((((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                              [4U]) 
                                                                             & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [4U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                            << 4U) 
                                                                           | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [3U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [3U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                               << 3U) 
                                                                              | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [2U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [2U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [1U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [1U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [0U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [0U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))))))))))))))))));
    vlSelf->__PVT__refresh_pre_valid = 0U;
    vlSelf->__PVT__refresh_pre_bank_idx = 0U;
    if ((1U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & ((IData)(vlSelf->__PVT__legal_pre) 
                   & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 1U;
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 2U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 2U;
        }
    }
    if ((8U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 3U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 3U;
        }
    }
    if ((0x10U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 4U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 4U;
        }
    }
    if ((0x20U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 5U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 5U;
        }
    }
    if ((0x40U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 6U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 6U;
        }
    }
    if ((0x80U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 7U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 7U;
        }
    }
    if ((0x100U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 8U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 8U;
        }
    }
    if ((0x200U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 9U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 9U;
        }
    }
    if ((0x400U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xaU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xaU;
        }
    }
    if ((0x800U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xbU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xbU;
        }
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xcU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xcU;
        }
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xdU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xdU;
        }
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xeU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xeU;
        }
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
        if ((IData)((((IData)(vlSelf->__PVT__legal_pre) 
                      >> 0xfU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xfU;
        }
    }
    vlSelf->__PVT__legal_wr = ((((0U >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                 & (IData)(u_timing_check__DOT____VdfgTmp_h11132cdf__0)) 
                                << 0xfU) | ((((0U >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                              & (IData)(u_timing_check__DOT____VdfgTmp_h11f0ecba__0)) 
                                             << 0xeU) 
                                            | ((((0U 
                                                  >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                 & (IData)(u_timing_check__DOT____VdfgTmp_h11b16388__0)) 
                                                << 0xdU) 
                                               | ((((0U 
                                                     >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                    & (IData)(u_timing_check__DOT____VdfgTmp_h113ea5d5__0)) 
                                                   << 0xcU) 
                                                  | ((((0U 
                                                        >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                       & (IData)(u_timing_check__DOT____VdfgTmp_h1349cac2__0)) 
                                                      << 0xbU) 
                                                     | ((((0U 
                                                           >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                          & (IData)(u_timing_check__DOT____VdfgTmp_h127be82f__0)) 
                                                         << 0xaU) 
                                                        | ((((0U 
                                                              >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                             & (IData)(u_timing_check__DOT____VdfgTmp_h1186e3d6__0)) 
                                                            << 9U) 
                                                           | ((((0U 
                                                                 >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                & (IData)(u_timing_check__DOT____VdfgTmp_h11931093__0)) 
                                                               << 8U) 
                                                              | ((((0U 
                                                                    >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                   & (IData)(u_timing_check__DOT____VdfgTmp_h118790e4__0)) 
                                                                  << 7U) 
                                                                 | ((((0U 
                                                                       >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                      & (IData)(u_timing_check__DOT____VdfgTmp_h11b3de41__0)) 
                                                                     << 6U) 
                                                                    | ((((0U 
                                                                          >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                         & (IData)(u_timing_check__DOT____VdfgTmp_hc80a969c__0)) 
                                                                        << 5U) 
                                                                       | ((((0U 
                                                                             >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                            & (IData)(u_timing_check__DOT____VdfgTmp_hc8d79bd1__0)) 
                                                                           << 4U) 
                                                                          | ((((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                               & (IData)(u_timing_check__DOT____VdfgTmp_hcf8f8086__0)) 
                                                                              << 3U) 
                                                                             | ((((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hc36b27e3__0)) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_h113fc8fe__0)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hc81cdc6b__0)))))))))))))))));
    vlSelf->__PVT__legal_rd = ((((IData)(u_timing_check__DOT____VdfgTmp_h11132cdf__0) 
                                 & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                << 0xfU) | ((((IData)(u_timing_check__DOT____VdfgTmp_h11f0ecba__0) 
                                              & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                             << 0xeU) 
                                            | ((((IData)(u_timing_check__DOT____VdfgTmp_h11b16388__0) 
                                                 & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                << 0xdU) 
                                               | ((((IData)(u_timing_check__DOT____VdfgTmp_h113ea5d5__0) 
                                                    & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                   << 0xcU) 
                                                  | ((((IData)(u_timing_check__DOT____VdfgTmp_h1349cac2__0) 
                                                       & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                      << 0xbU) 
                                                     | ((((IData)(u_timing_check__DOT____VdfgTmp_h127be82f__0) 
                                                          & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                         << 0xaU) 
                                                        | ((((IData)(u_timing_check__DOT____VdfgTmp_h1186e3d6__0) 
                                                             & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                            << 9U) 
                                                           | ((((IData)(u_timing_check__DOT____VdfgTmp_h11931093__0) 
                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                               << 8U) 
                                                              | ((((IData)(u_timing_check__DOT____VdfgTmp_h118790e4__0) 
                                                                   & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                  << 7U) 
                                                                 | ((((IData)(u_timing_check__DOT____VdfgTmp_h11b3de41__0) 
                                                                      & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                     << 6U) 
                                                                    | ((((IData)(u_timing_check__DOT____VdfgTmp_hc80a969c__0) 
                                                                         & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                        << 5U) 
                                                                       | ((((IData)(u_timing_check__DOT____VdfgTmp_hc8d79bd1__0) 
                                                                            & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                           << 4U) 
                                                                          | ((((IData)(u_timing_check__DOT____VdfgTmp_hcf8f8086__0) 
                                                                               & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                              << 3U) 
                                                                             | ((((IData)(u_timing_check__DOT____VdfgTmp_hc36b27e3__0) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_timing_check__DOT____VdfgTmp_h113fc8fe__0) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                                << 1U) 
                                                                                | ((IData)(u_timing_check__DOT____VdfgTmp_hc81cdc6b__0) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)))))))))))))))));
    vlSelf->wdb_full = (0xffffU == (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg));
    vlSelf->wdb_alloc_ptr = 0U;
    vlSelf->__PVT__u_wdb__DOT__free_found = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg)))) {
        vlSelf->wdb_alloc_ptr = 0U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 1U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 1U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 2U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 2U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 3U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 3U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 4U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 4U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 5U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 5U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 6U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 6U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 7U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 7U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 8U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 8U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 9U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 9U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xaU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xaU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xbU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xbU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xcU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xcU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xdU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xdU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xeU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xeU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xfU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xfU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    vlSelf->row_req_is_ref = 0U;
    vlSelf->cmdq_full = (0xffffffffU == vlSelf->__PVT__u_cmdq__DOT__valid_reg);
    vlSelf->__PVT__u_cmdq__DOT__free_idx = 0U;
    vlSelf->__PVT__u_cmdq__DOT__free_found = 0U;
    if ((1U & (~ vlSelf->__PVT__u_cmdq__DOT__valid_reg))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 1U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 1U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 2U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 2U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 3U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 3U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 4U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 4U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 5U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 5U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 6U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 6U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 7U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 7U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 8U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 8U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 9U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 9U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xaU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xaU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xbU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xbU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xcU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xcU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xdU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xdU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xeU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xeU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xfU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xfU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x10U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x10U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x11U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x11U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x12U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x12U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x13U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x13U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x14U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x14U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x15U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x15U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x16U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x16U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x17U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x17U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x18U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x18U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x19U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x19U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1aU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1aU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1bU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1bU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1cU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1cU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1dU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1dU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1eU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1eU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1fU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1fU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffffeU & vlSelf->__PVT__slot_legal) 
                                 | ((1U & vlSelf->__PVT__u_cmdq__DOT__valid_reg) 
                                    && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                               & (vlSelf->__PVT__open_row
                                                  [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                  == 
                                                  (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                              >> 0xdU)))))
                                               ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                 >> 0x1bU)))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__legal_wr) 
                                                      >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__legal_rd) 
                                                      >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                               : ((1U 
                                                   & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                      >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__legal_pre) 
                                                   >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__legal_act) 
                                                   >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[1U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffffdU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 1U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 1U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[2U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffffbU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 2U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 2U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[3U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffff7U & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 3U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 3U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[4U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffffefU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 4U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 4U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[5U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffffdfU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 5U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 5U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[6U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffffbfU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 6U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 6U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[7U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffff7fU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 7U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 7U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[8U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffeffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 8U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 8U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[9U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffdffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 9U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 9U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xaU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffbffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xaU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xaU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xbU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffff7ffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xbU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xbU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xcU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffefffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xcU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xcU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xdU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffdfffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xdU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xdU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xeU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffbfffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xeU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xeU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xfU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffff7fffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xfU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xfU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x10U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffeffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x10U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x10U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x11U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffdffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x11U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x11U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x12U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffbffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x12U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x12U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x13U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfff7ffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x13U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x13U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x14U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffefffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x14U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x14U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x15U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffdfffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x15U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x15U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x16U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffbfffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x16U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x16U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x17U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xff7fffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x17U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x17U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x18U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfeffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x18U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x18U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x19U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfdffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x19U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x19U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1aU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfbffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1aU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1aU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1bU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xf7ffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1bU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1bU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1cU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xefffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1cU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1cU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1dU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xdfffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1dU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1dU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1eU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xbfffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1eU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1eU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1fU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__slot_legal = ((0x7fffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                      >> 0x1fU) && 
                                     (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                              >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                             & (vlSelf->__PVT__open_row
                                                [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                == 
                                                (0x3fffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                            >> 0xdU)))))
                                             ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0x1bU)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_wr) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_rd) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                             : ((1U 
                                                 & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__legal_pre) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                 : 
                                                ((IData)(vlSelf->__PVT__legal_act) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1fU));
    vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible = 
        (vlSelf->__PVT__slot_legal & vlSelf->__PVT__u_cmdq__DOT__valid_reg);
    vlSelf->__PVT__cmdq_grant_valid = 0U;
    vlSelf->__PVT__cmdq_grant_idx = 0U;
    vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__cmdq_grant_idx = 0U;
        }
    }
    if ((2U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__cmdq_grant_idx = 1U;
        }
    }
    if ((4U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [2U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [2U];
            vlSelf->__PVT__cmdq_grant_idx = 2U;
        }
    }
    if ((8U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [3U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [3U];
            vlSelf->__PVT__cmdq_grant_idx = 3U;
        }
    }
    if ((0x10U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [4U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [4U];
            vlSelf->__PVT__cmdq_grant_idx = 4U;
        }
    }
    if ((0x20U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [5U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [5U];
            vlSelf->__PVT__cmdq_grant_idx = 5U;
        }
    }
    if ((0x40U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [6U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [6U];
            vlSelf->__PVT__cmdq_grant_idx = 6U;
        }
    }
    if ((0x80U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [7U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [7U];
            vlSelf->__PVT__cmdq_grant_idx = 7U;
        }
    }
    if ((0x100U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [8U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [8U];
            vlSelf->__PVT__cmdq_grant_idx = 8U;
        }
    }
    if ((0x200U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [9U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [9U];
            vlSelf->__PVT__cmdq_grant_idx = 9U;
        }
    }
    if ((0x400U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xaU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xaU];
            vlSelf->__PVT__cmdq_grant_idx = 0xaU;
        }
    }
    if ((0x800U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xbU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xbU];
            vlSelf->__PVT__cmdq_grant_idx = 0xbU;
        }
    }
    if ((0x1000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xcU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xcU];
            vlSelf->__PVT__cmdq_grant_idx = 0xcU;
        }
    }
    if ((0x2000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xdU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xdU];
            vlSelf->__PVT__cmdq_grant_idx = 0xdU;
        }
    }
    if ((0x4000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xeU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xeU];
            vlSelf->__PVT__cmdq_grant_idx = 0xeU;
        }
    }
    if ((0x8000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xfU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xfU];
            vlSelf->__PVT__cmdq_grant_idx = 0xfU;
        }
    }
    if ((0x10000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x10U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x10U];
            vlSelf->__PVT__cmdq_grant_idx = 0x10U;
        }
    }
    if ((0x20000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x11U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x11U];
            vlSelf->__PVT__cmdq_grant_idx = 0x11U;
        }
    }
    if ((0x40000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x12U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x12U];
            vlSelf->__PVT__cmdq_grant_idx = 0x12U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x13U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x13U];
            vlSelf->__PVT__cmdq_grant_idx = 0x13U;
        }
    }
    if ((0x100000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x14U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x14U];
            vlSelf->__PVT__cmdq_grant_idx = 0x14U;
        }
    }
    if ((0x200000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x15U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x15U];
            vlSelf->__PVT__cmdq_grant_idx = 0x15U;
        }
    }
    if ((0x400000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x16U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x16U];
            vlSelf->__PVT__cmdq_grant_idx = 0x16U;
        }
    }
    if ((0x800000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x17U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x17U];
            vlSelf->__PVT__cmdq_grant_idx = 0x17U;
        }
    }
    if ((0x1000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x18U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x18U];
            vlSelf->__PVT__cmdq_grant_idx = 0x18U;
        }
    }
    if ((0x2000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x19U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x19U];
            vlSelf->__PVT__cmdq_grant_idx = 0x19U;
        }
    }
    if ((0x4000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1aU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1aU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1aU;
        }
    }
    if ((0x8000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1bU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1bU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1bU;
        }
    }
    if ((0x10000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1cU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1cU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1cU;
        }
    }
    if ((0x20000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1dU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1dU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1dU;
        }
    }
    if ((0x40000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1eU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1eU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1eU;
        }
    }
    if ((vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible 
         >> 0x1fU)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1fU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1fU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1fU;
        }
    }
    vlSelf->__PVT__cmdq_grant = 0U;
    if (vlSelf->__PVT__cmdq_grant_valid) {
        vlSelf->__PVT__cmdq_grant = (vlSelf->__PVT__cmdq_grant 
                                     | (0xffffffffULL 
                                        & ((IData)(1U) 
                                           << (IData)(vlSelf->__PVT__cmdq_grant_idx))));
    }
    vlSelf->__PVT__winner = vlSelf->__PVT__slot_data
        [vlSelf->__PVT__cmdq_grant_idx];
    vlSelf->col_req_axi_id = 0U;
    vlSelf->col_req_wdb_ptr = 0U;
    vlSelf->col_req_addr = 0U;
    vlSelf->row_req_addr = 0U;
    vlSelf->col_req_bank = 0U;
    vlSelf->col_req_bg = 0U;
    vlSelf->row_req_bank = 0U;
    vlSelf->row_req_bg = 0U;
    vlSelf->row_req_cmd = 0U;
    vlSelf->col_req_cmd = 0U;
    vlSelf->row_req_val = 0U;
    if (vlSelf->__PVT__ref_req) {
        if (vlSelf->__PVT__any_bank_open) {
            if (vlSelf->__PVT__refresh_pre_valid) {
                vlSelf->row_req_is_ref = 1U;
                vlSelf->row_req_bank = (3U & (IData)(vlSelf->__PVT__refresh_pre_bank_idx));
                vlSelf->row_req_bg = (3U & ((IData)(vlSelf->__PVT__refresh_pre_bank_idx) 
                                            >> 2U));
                vlSelf->row_req_cmd = 2U;
                vlSelf->row_req_val = 1U;
            }
        } else if (vlSelf->__PVT__legal_ref) {
            vlSelf->row_req_is_ref = 1U;
            vlSelf->row_req_cmd = 4U;
            vlSelf->row_req_val = 1U;
        }
    } else if (vlSelf->__PVT__cmdq_grant_valid) {
        if ((1U & (~ (((IData)(vlSelf->__PVT__bank_is_open) 
                       >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                           >> 9U)))) 
                      & (vlSelf->__PVT__open_row[(0xfU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__winner 
                                                             >> 9U)))] 
                         == (0x3fffU & (IData)((vlSelf->__PVT__winner 
                                                >> 0xdU)))))))) {
            if ((1U & ((IData)(vlSelf->__PVT__bank_is_open) 
                       >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                           >> 9U)))))) {
                vlSelf->row_req_bank = (3U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 9U)));
                vlSelf->row_req_bg = (3U & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xbU)));
                vlSelf->row_req_cmd = 2U;
            } else {
                vlSelf->row_req_bank = (3U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 9U)));
                vlSelf->row_req_bg = (3U & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xbU)));
                vlSelf->row_req_cmd = 1U;
            }
            vlSelf->row_req_val = 1U;
        }
    }
    vlSelf->col_req_val = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ref_req)))) {
        if (vlSelf->__PVT__cmdq_grant_valid) {
            if ((((IData)(vlSelf->__PVT__bank_is_open) 
                  >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                      >> 9U)))) & (
                                                   vlSelf->__PVT__open_row
                                                   [
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__winner 
                                                               >> 9U)))] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__winner 
                                                               >> 0xdU)))))) {
                vlSelf->col_req_axi_id = (0xffU & (IData)(
                                                          (vlSelf->__PVT__winner 
                                                           >> 0x1cU)));
                vlSelf->col_req_wdb_ptr = (0xfU & (IData)(vlSelf->__PVT__winner));
                vlSelf->col_req_addr = (0x1fU & (IData)(
                                                        (vlSelf->__PVT__winner 
                                                         >> 4U)));
                vlSelf->col_req_bank = (3U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 9U)));
                vlSelf->col_req_bg = (3U & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xbU)));
                vlSelf->col_req_cmd = ((1U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 0x1bU)))
                                        ? 2U : 1U);
                vlSelf->col_req_val = 1U;
            }
            if ((1U & (~ (((IData)(vlSelf->__PVT__bank_is_open) 
                           >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                               >> 9U)))) 
                          & (vlSelf->__PVT__open_row
                             [(0xfU & (IData)((vlSelf->__PVT__winner 
                                               >> 9U)))] 
                             == (0x3fffU & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xdU)))))))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__bank_is_open) 
                              >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                                  >> 9U))))))) {
                    vlSelf->row_req_addr = (0x3fffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__winner 
                                                       >> 0xdU)));
                }
            }
        }
    }
    vlSelf->__PVT__u_bank_state__DOT__flat_update_bank 
        = (((IData)(vlSelf->row_req_bg) << 2U) | (IData)(vlSelf->row_req_bank));
    vlSelf->__PVT__active_bank_idx = ((IData)(vlSelf->row_req_val)
                                       ? (IData)(vlSelf->__PVT__u_bank_state__DOT__flat_update_bank)
                                       : (((IData)(vlSelf->col_req_bg) 
                                           << 2U) | (IData)(vlSelf->col_req_bank)));
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0\n"); );
    // Body
    vlSelf->__PVT__issue_act = ((IData)(vlSelf->row_req_val) 
                                & ((1U == (IData)(vlSelf->row_req_cmd)) 
                                   & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant)));
    vlSelf->__PVT__issue_pre = ((IData)(vlSelf->row_req_val) 
                                & ((2U == (IData)(vlSelf->row_req_cmd)) 
                                   & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant)));
    vlSelf->__PVT__ref_ack = 0U;
    if (vlSelf->__PVT__ref_req) {
        if ((1U & (~ (IData)(vlSelf->__PVT__any_bank_open)))) {
            if (vlSelf->__PVT__legal_ref) {
                if ((1U & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant))) {
                    vlSelf->__PVT__ref_ack = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__issue_rd = ((IData)(vlSelf->col_req_val) 
                               & ((1U == (IData)(vlSelf->col_req_cmd)) 
                                  & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant)));
    vlSelf->__PVT__issue_wr = ((IData)(vlSelf->col_req_val) 
                               & ((2U == (IData)(vlSelf->col_req_cmd)) 
                                  & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant)));
    vlSelf->__Vcellinp__u_cmdq__pop_val = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                           & (IData)(vlSelf->col_req_val));
    vlSelf->__PVT__cmdq_arb_ack = ((0U != vlSelf->__PVT__cmdq_grant) 
                                   & ((~ (IData)(vlSelf->__PVT__ref_req)) 
                                      & (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant) 
                                          & (IData)(vlSelf->row_req_val)) 
                                         | (IData)(vlSelf->__Vcellinp__u_cmdq__pop_val))));
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__1(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__1\n"); );
    // Body
    vlSelf->wdb_rdata = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U)))
                           ? 0U : (vlSelf->__PVT__u_wdb__DOT__data_mem
                                   [vlSelf->col_req_wdb_ptr][
                                   (((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U))))) 
                         | (vlSelf->__PVT__u_wdb__DOT__data_mem
                            [vlSelf->col_req_wdb_ptr][
                            (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 5U))));
    vlSelf->wdb_rmask = (0xfU & (vlSelf->__PVT__u_wdb__DOT__mask_mem
                                 [vlSelf->col_req_wdb_ptr] 
                                 >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat), 2U))));
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0\n"); );
    // Body
    vlSelf->__PVT__issue_act = ((IData)(vlSelf->row_req_val) 
                                & ((1U == (IData)(vlSelf->row_req_cmd)) 
                                   & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant) 
                                      >> 1U)));
    vlSelf->__PVT__issue_pre = ((IData)(vlSelf->row_req_val) 
                                & ((2U == (IData)(vlSelf->row_req_cmd)) 
                                   & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant) 
                                      >> 1U)));
    vlSelf->__PVT__ref_ack = 0U;
    if (vlSelf->__PVT__ref_req) {
        if ((1U & (~ (IData)(vlSelf->__PVT__any_bank_open)))) {
            if (vlSelf->__PVT__legal_ref) {
                if ((2U & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant))) {
                    vlSelf->__PVT__ref_ack = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__issue_rd = ((IData)(vlSelf->col_req_val) 
                               & ((1U == (IData)(vlSelf->col_req_cmd)) 
                                  & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                     >> 1U)));
    vlSelf->__PVT__issue_wr = ((IData)(vlSelf->col_req_val) 
                               & ((2U == (IData)(vlSelf->col_req_cmd)) 
                                  & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                     >> 1U)));
    vlSelf->__Vcellinp__u_cmdq__pop_val = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                            >> 1U) 
                                           & (IData)(vlSelf->col_req_val));
    vlSelf->wdb_rdata = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U)))
                           ? 0U : (vlSelf->__PVT__u_wdb__DOT__data_mem
                                   [vlSelf->col_req_wdb_ptr][
                                   (((IData)(0x1fU) 
                                     + (0xffU & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U))) 
                                    >> 5U)] << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U))))) 
                         | (vlSelf->__PVT__u_wdb__DOT__data_mem
                            [vlSelf->col_req_wdb_ptr][
                            (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U) 
                                   >> 5U))] >> (0x1fU 
                                                & VL_SHIFTL_III(8,8,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 5U))));
    vlSelf->wdb_rmask = (0xfU & (vlSelf->__PVT__u_wdb__DOT__mask_mem
                                 [vlSelf->col_req_wdb_ptr] 
                                 >> (0x1fU & VL_SHIFTL_III(5,5,32, (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat), 2U))));
    vlSelf->__PVT__cmdq_arb_ack = ((0U != vlSelf->__PVT__cmdq_grant) 
                                   & ((~ (IData)(vlSelf->__PVT__ref_req)) 
                                      & ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_grant) 
                                           >> 1U) & (IData)(vlSelf->row_req_val)) 
                                         | (IData)(vlSelf->__Vcellinp__u_cmdq__pop_val))));
}

VL_INLINE_OPT void Vtb_mc16x2_updated_mc_pc_core___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___nba_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0\n"); );
    // Init
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hab8b0bf2__0;
    u_timing_check__DOT____VdfgTmp_hab8b0bf2__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11132cdf__0;
    u_timing_check__DOT____VdfgTmp_h11132cdf__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hb2d28fa4__0;
    u_timing_check__DOT____VdfgTmp_hb2d28fa4__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11f0ecba__0;
    u_timing_check__DOT____VdfgTmp_h11f0ecba__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11b16388__0;
    u_timing_check__DOT____VdfgTmp_h11b16388__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h113ea5d5__0;
    u_timing_check__DOT____VdfgTmp_h113ea5d5__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h1349cac2__0;
    u_timing_check__DOT____VdfgTmp_h1349cac2__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h127be82f__0;
    u_timing_check__DOT____VdfgTmp_h127be82f__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h1186e3d6__0;
    u_timing_check__DOT____VdfgTmp_h1186e3d6__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11931093__0;
    u_timing_check__DOT____VdfgTmp_h11931093__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h118790e4__0;
    u_timing_check__DOT____VdfgTmp_h118790e4__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h11b3de41__0;
    u_timing_check__DOT____VdfgTmp_h11b3de41__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc80a969c__0;
    u_timing_check__DOT____VdfgTmp_hc80a969c__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc8d79bd1__0;
    u_timing_check__DOT____VdfgTmp_hc8d79bd1__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hcf8f8086__0;
    u_timing_check__DOT____VdfgTmp_hcf8f8086__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc36b27e3__0;
    u_timing_check__DOT____VdfgTmp_hc36b27e3__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_h113fc8fe__0;
    u_timing_check__DOT____VdfgTmp_h113fc8fe__0 = 0;
    CData/*0:0*/ u_timing_check__DOT____VdfgTmp_hc81cdc6b__0;
    u_timing_check__DOT____VdfgTmp_hc81cdc6b__0 = 0;
    CData/*4:0*/ __Vdlyvdim0__u_cmdq__DOT__entries__v0;
    __Vdlyvdim0__u_cmdq__DOT__entries__v0 = 0;
    QData/*35:0*/ __Vdlyvval__u_cmdq__DOT__entries__v0;
    __Vdlyvval__u_cmdq__DOT__entries__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq__DOT__entries__v0;
    __Vdlyvset__u_cmdq__DOT__entries__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq__DOT__entries__v1;
    __Vdlyvset__u_cmdq__DOT__entries__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_wdb__DOT__mask_mem__v0;
    __Vdlyvdim0__u_wdb__DOT__mask_mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_wdb__DOT__mask_mem__v0;
    __Vdlyvval__u_wdb__DOT__mask_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__mask_mem__v0;
    __Vdlyvset__u_wdb__DOT__mask_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__mask_mem__v1;
    __Vdlyvset__u_wdb__DOT__mask_mem__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_wdb__DOT__data_mem__v0;
    __Vdlyvdim0__u_wdb__DOT__data_mem__v0 = 0;
    VlWide<8>/*255:0*/ __Vdlyvval__u_wdb__DOT__data_mem__v0;
    VL_ZERO_W(256, __Vdlyvval__u_wdb__DOT__data_mem__v0);
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__data_mem__v0;
    __Vdlyvset__u_wdb__DOT__data_mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_wdb__DOT__data_mem__v1;
    __Vdlyvset__u_wdb__DOT__data_mem__v1 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_rdb__DOT__id_fifo__v0;
    __Vdlyvdim0__u_rdb__DOT__id_fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_rdb__DOT__id_fifo__v0;
    __Vdlyvval__u_rdb__DOT__id_fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_rdb__DOT__id_fifo__v0;
    __Vdlyvset__u_rdb__DOT__id_fifo__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_rdb__DOT__data_fifo__v0;
    __Vdlyvdim0__u_rdb__DOT__data_fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvlsb__u_rdb__DOT__data_fifo__v0;
    __Vdlyvlsb__u_rdb__DOT__data_fifo__v0 = 0;
    IData/*31:0*/ __Vdlyvval__u_rdb__DOT__data_fifo__v0;
    __Vdlyvval__u_rdb__DOT__data_fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_rdb__DOT__data_fifo__v0;
    __Vdlyvset__u_rdb__DOT__data_fifo__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0;
    __Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0;
    __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0;
    __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0 = 0;
    CData/*2:0*/ __Vdly__u_rdb__DOT__rbeat_cnt;
    __Vdly__u_rdb__DOT__rbeat_cnt = 0;
    CData/*0:0*/ __Vdly__ref_req;
    __Vdly__ref_req = 0;
    SData/*12:0*/ __Vdly__u_ref_eng__DOT__refi_counter;
    __Vdly__u_ref_eng__DOT__refi_counter = 0;
    CData/*3:0*/ __Vdlyvdim0__open_row__v0;
    __Vdlyvdim0__open_row__v0 = 0;
    SData/*13:0*/ __Vdlyvval__open_row__v0;
    __Vdlyvval__open_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__open_row__v0;
    __Vdlyvset__open_row__v0 = 0;
    CData/*0:0*/ __Vdlyvset__open_row__v1;
    __Vdlyvset__open_row__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_ras__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_ras__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_ras__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_ras__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_ras__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v0;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__faw_timer__v0;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v1;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v2;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v3;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v4;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__faw_timer__v4;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v5;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__faw_timer__v6;
    __Vdlyvval__u_timing_check__DOT__faw_timer__v6 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__faw_timer__v8;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_wr__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_wr__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_wr__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_wr__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_wr__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rc__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rc__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rc__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rc__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rc__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v17 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v0;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rp__v0;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v1;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v1 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v2;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v2 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v3;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v4;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v4 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v5;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v5 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v6;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v7;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v7 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v8;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v8 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v9;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v10;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v10 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v11;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v11 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v12;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v13;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v13 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v14;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v14 = 0;
    CData/*7:0*/ __Vdlyvval__u_timing_check__DOT__cnt_rp__v15;
    __Vdlyvval__u_timing_check__DOT__cnt_rp__v15 = 0;
    CData/*3:0*/ __Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16;
    __Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rp__v16;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_timing_check__DOT__cnt_rp__v17;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v17 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93 = 0;
    CData/*7:0*/ __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94;
    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95 = 0;
    CData/*0:0*/ __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96 = 0;
    // Body
    __Vdly__u_ref_eng__DOT__refi_counter = vlSelf->__PVT__u_ref_eng__DOT__refi_counter;
    __Vdly__ref_req = vlSelf->__PVT__ref_req;
    __Vdly__u_rdb__DOT__rbeat_cnt = vlSelf->__PVT__u_rdb__DOT__rbeat_cnt;
    __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0 = 0U;
    __Vdlyvset__u_rdb__DOT__data_fifo__v0 = 0U;
    __Vdlyvset__u_rdb__DOT__id_fifo__v0 = 0U;
    __Vdlyvset__u_wdb__DOT__data_mem__v0 = 0U;
    __Vdlyvset__u_wdb__DOT__data_mem__v1 = 0U;
    __Vdlyvset__u_wdb__DOT__mask_mem__v0 = 0U;
    __Vdlyvset__u_wdb__DOT__mask_mem__v1 = 0U;
    __Vdlyvset__open_row__v0 = 0U;
    __Vdlyvset__open_row__v1 = 0U;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v4 = 0U;
    __Vdlyvset__u_timing_check__DOT__faw_timer__v8 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rc__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rp__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_wr__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_ras__v17 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95 = 0U;
    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96 = 0U;
    __Vdlyvset__u_cmdq__DOT__entries__v0 = 0U;
    __Vdlyvset__u_cmdq__DOT__entries__v1 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16 = 0U;
    __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n)))) {
        vlSelf->__PVT__u_cmdq__DOT__unnamedblk2__DOT__i = 0x20U;
        vlSelf->__PVT__u_wdb__DOT__unnamedblk2__DOT__i = 0x10U;
        vlSelf->__PVT__u_bank_state__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk2__DOT__i = 4U;
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk3__DOT__i = 0x10U;
    }
    if (vlSymsp->TOP.tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->__PVT__u_timing_check__DOT__unnamedblk5__DOT__i = 0x10U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk3__DOT__i = 0x20U;
        if ((IData)((((IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_valid) 
                      >> 1U) & (~ (IData)(vlSelf->__PVT__u_rdb__DOT__id_empty))))) {
            __Vdlyvval__u_rdb__DOT__data_fifo__v0 = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc1;
            __Vdlyvset__u_rdb__DOT__data_fifo__v0 = 1U;
            __Vdlyvlsb__u_rdb__DOT__data_fifo__v0 = 
                (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelf->__PVT__u_rdb__DOT__rbeat_cnt), 5U));
            __Vdlyvdim0__u_rdb__DOT__data_fifo__v0 
                = (0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr));
            if ((7U == (IData)(vlSelf->__PVT__u_rdb__DOT__rbeat_cnt))) {
                __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0 
                    = vlSelf->__PVT__u_rdb__DOT__id_fifo
                    [(0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__id_rd_ptr))];
                __Vdlyvset__u_rdb__DOT__ret_id_fifo__v0 = 1U;
                __Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0 
                    = (0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr));
                __Vdly__u_rdb__DOT__rbeat_cnt = 0U;
                vlSelf->__PVT__u_rdb__DOT__id_rd_ptr 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__id_rd_ptr)));
                vlSelf->__PVT__u_rdb__DOT__data_wr_ptr 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr)));
            } else {
                __Vdly__u_rdb__DOT__rbeat_cnt = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__u_rdb__DOT__rbeat_cnt)));
            }
        }
        vlSelf->__PVT__u_timing_check__DOT__cnt_wtr 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_wtr))
                ? (0xffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_wtr) 
                            - (IData)(1U))) : 0U);
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_rdb__DOT__data_empty)) 
                   & (vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__rdb_ready 
                      >> 3U)))) {
            vlSelf->__PVT__u_rdb__DOT__data_rd_ptr 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__data_rd_ptr)));
        }
        vlSelf->__PVT__u_timing_check__DOT__cnt_rrd 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd))
                ? (0xffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd) 
                            - (IData)(1U))) : 0U);
        if (vlSelf->__PVT__issue_act) {
            vlSelf->__PVT__u_timing_check__DOT__cnt_rrd = 5U;
            __Vdlyvval__u_timing_check__DOT__faw_timer__v4 
                = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                    [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                      [2U] - (IData)(1U)))
                    : 0U);
            __Vdlyvset__u_timing_check__DOT__faw_timer__v4 = 1U;
            __Vdlyvval__u_timing_check__DOT__faw_timer__v5 
                = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                    [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                      [1U] - (IData)(1U)))
                    : 0U);
            __Vdlyvval__u_timing_check__DOT__faw_timer__v6 
                = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                    [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                      [0U] - (IData)(1U)))
                    : 0U);
            __Vdlyvset__u_timing_check__DOT__cnt_rc__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16 
                = vlSelf->__PVT__active_bank_idx;
            __Vdlyvset__u_timing_check__DOT__cnt_ras__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16 
                = vlSelf->__PVT__active_bank_idx;
            __Vdlyvset__u_timing_check__DOT__cnt_rcd__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16 
                = vlSelf->__PVT__active_bank_idx;
        }
        if (((IData)(vlSelf->__PVT__issue_rd) & (0x10U 
                                                 != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt)))) {
            __Vdlyvval__u_rdb__DOT__id_fifo__v0 = vlSelf->col_req_axi_id;
            __Vdlyvset__u_rdb__DOT__id_fifo__v0 = 1U;
            __Vdlyvdim0__u_rdb__DOT__id_fifo__v0 = 
                (0xfU & (IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr));
            vlSelf->__PVT__u_rdb__DOT__id_wr_ptr = 
                (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr)));
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                    >> 3U) & (~ (IData)((0xffffU == (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg))))))) {
            __Vdlyvval__u_wdb__DOT__data_mem__v0[0U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x18U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[1U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x19U];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[2U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x1aU];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[3U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x1bU];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[4U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x1cU];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[5U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x1dU];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[6U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x1eU];
            __Vdlyvval__u_wdb__DOT__data_mem__v0[7U] 
                = vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data[0x1fU];
            __Vdlyvset__u_wdb__DOT__data_mem__v0 = 1U;
            __Vdlyvdim0__u_wdb__DOT__data_mem__v0 = vlSelf->wdb_alloc_ptr;
            __Vdlyvval__u_wdb__DOT__mask_mem__v0 = 
                vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[3U];
            __Vdlyvset__u_wdb__DOT__mask_mem__v0 = 1U;
            __Vdlyvdim0__u_wdb__DOT__mask_mem__v0 = vlSelf->wdb_alloc_ptr;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__ref_ack)))) {
            if (vlSelf->__PVT__issue_act) {
                __Vdlyvval__open_row__v0 = vlSelf->row_req_addr;
                __Vdlyvset__open_row__v0 = 1U;
                __Vdlyvdim0__open_row__v0 = vlSelf->__PVT__u_bank_state__DOT__flat_update_bank;
            }
        }
        __Vdlyvval__u_timing_check__DOT__faw_timer__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__faw_timer__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__faw_timer__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__faw_timer__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__faw_timer__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__faw_timer
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                  [3U] - (IData)(1U)))
                : 0U);
        vlSelf->__PVT__u_timing_check__DOT__cnt_rfc 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc))
                ? (0x3ffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc) 
                             - (IData)(1U))) : 0U);
        if (vlSelf->__PVT__ref_ack) {
            vlSelf->__PVT__u_timing_check__DOT__cnt_rfc = 0x15dU;
            __Vdly__ref_req = 0U;
            vlSelf->__PVT__bank_is_open = 0U;
        } else if (vlSelf->__PVT__issue_act) {
            vlSelf->__PVT__bank_is_open = ((IData)(vlSelf->__PVT__bank_is_open) 
                                           | (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlSelf->__PVT__u_bank_state__DOT__flat_update_bank))));
        } else if (vlSelf->__PVT__issue_pre) {
            vlSelf->__PVT__bank_is_open = ((~ ((IData)(1U) 
                                               << (IData)(vlSelf->__PVT__u_bank_state__DOT__flat_update_bank))) 
                                           & (IData)(vlSelf->__PVT__bank_is_open));
        }
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rc__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rc__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                    [0xfU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rp__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rp__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                    [0xfU] - (IData)(1U)))
                : 0U);
        if (vlSelf->__PVT__issue_pre) {
            __Vdlyvset__u_timing_check__DOT__cnt_rp__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16 
                = vlSelf->__PVT__active_bank_idx;
        }
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_wr__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_wr__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                    [0xfU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rtp__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                    [0xfU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_ras__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_ras__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                    [0xfU] - (IData)(1U)))
                : 0U);
        vlSelf->__PVT__u_timing_check__DOT__cnt_ccd 
            = ((0U < (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd))
                ? (0xffU & ((IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd) 
                            - (IData)(1U))) : 0U);
        if (vlSelf->__PVT__issue_rd) {
            __Vdlyvset__u_timing_check__DOT__cnt_rtp__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16 
                = vlSelf->__PVT__active_bank_idx;
            vlSelf->__PVT__u_timing_check__DOT__cnt_ccd = 3U;
        }
        if (vlSelf->__PVT__issue_wr) {
            vlSelf->__PVT__u_timing_check__DOT__cnt_wtr = 7U;
            __Vdlyvset__u_timing_check__DOT__cnt_wr__v16 = 1U;
            __Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16 
                = vlSelf->__PVT__active_bank_idx;
            vlSelf->__PVT__u_timing_check__DOT__cnt_ccd = 3U;
        }
        if ((1U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if ((vlSelf->__PVT__cmdq_grant & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0 = 1U;
            } else if ((1U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2 = 1U;
        }
        if ((2U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 1U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3 = 1U;
            } else if ((2U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [1U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [1U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5 = 1U;
        }
        if ((4U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 2U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6 = 1U;
            } else if ((4U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [2U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [2U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8 = 1U;
        }
        if ((8U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 3U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9 = 1U;
            } else if ((8U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [3U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [3U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11 = 1U;
        }
        if ((0x10U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 4U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12 = 1U;
            } else if ((0x10U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [4U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [4U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14 = 1U;
        }
        if ((0x20U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 5U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15 = 1U;
            } else if ((0x20U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [5U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [5U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17 = 1U;
        }
        if ((0x40U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 6U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18 = 1U;
            } else if ((0x40U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [6U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [6U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20 = 1U;
        }
        if ((0x80U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 7U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21 = 1U;
            } else if ((0x80U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [7U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [7U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23 = 1U;
        }
        if ((0x100U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 8U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24 = 1U;
            } else if ((0x100U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [8U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [8U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26 = 1U;
        }
        if ((0x200U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 9U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27 = 1U;
            } else if ((0x200U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [9U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [9U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29 = 1U;
        }
        if ((0x400U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xaU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30 = 1U;
            } else if ((0x400U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xaU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xaU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32 = 1U;
        }
        if ((0x800U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xbU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33 = 1U;
            } else if ((0x800U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xbU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xbU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35 = 1U;
        }
        if ((0x1000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xcU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36 = 1U;
            } else if ((0x1000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xcU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xcU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38 = 1U;
        }
        if ((0x2000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xdU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39 = 1U;
            } else if ((0x2000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xdU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xdU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41 = 1U;
        }
        if ((0x4000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xeU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42 = 1U;
            } else if ((0x4000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xeU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xeU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44 = 1U;
        }
        if ((0x8000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0xfU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45 = 1U;
            } else if ((0x8000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0xfU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0xfU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47 = 1U;
        }
        if ((0x10000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x10U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48 = 1U;
            } else if ((0x10000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x10U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x10U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50 = 1U;
        }
        if ((0x20000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x11U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51 = 1U;
            } else if ((0x20000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x11U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x11U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53 = 1U;
        }
        if ((0x40000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x12U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54 = 1U;
            } else if ((0x40000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x12U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x12U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56 = 1U;
        }
        if ((0x80000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x13U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57 = 1U;
            } else if ((0x80000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x13U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x13U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59 = 1U;
        }
        if ((0x100000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x14U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60 = 1U;
            } else if ((0x100000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x14U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x14U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62 = 1U;
        }
        if ((0x200000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x15U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63 = 1U;
            } else if ((0x200000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x15U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x15U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65 = 1U;
        }
        if ((0x400000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x16U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66 = 1U;
            } else if ((0x400000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x16U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x16U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68 = 1U;
        }
        if ((0x800000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x17U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69 = 1U;
            } else if ((0x800000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x17U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x17U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71 = 1U;
        }
        if ((0x1000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x18U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72 = 1U;
            } else if ((0x1000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x18U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x18U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74 = 1U;
        }
        if ((0x2000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x19U) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75 = 1U;
            } else if ((0x2000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x19U])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x19U]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77 = 1U;
        }
        if ((0x4000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1aU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78 = 1U;
            } else if ((0x4000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1aU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1aU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80 = 1U;
        }
        if ((0x8000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1bU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81 = 1U;
            } else if ((0x8000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1bU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1bU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83 = 1U;
        }
        if ((0x10000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1cU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84 = 1U;
            } else if ((0x10000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1cU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1cU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86 = 1U;
        }
        if ((0x20000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1dU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87 = 1U;
            } else if ((0x20000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1dU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1dU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89 = 1U;
        }
        if ((0x40000000U & vlSelf->__PVT__u_cmdq__DOT__valid_reg)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1eU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90 = 1U;
            } else if ((0x40000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1eU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1eU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92 = 1U;
        }
        if ((vlSelf->__PVT__u_cmdq__DOT__valid_reg 
             >> 0x1fU)) {
            if (((vlSelf->__PVT__cmdq_grant >> 0x1fU) 
                 & (IData)(vlSelf->__PVT__cmdq_arb_ack))) {
                __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93 = 1U;
            } else if ((vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible 
                        >> 0x1fU)) {
                if ((0xffU != vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                     [0x1fU])) {
                    __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94 
                        = (0xffU & ((IData)(1U) + vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                                    [0x1fU]));
                    __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94 = 1U;
                }
            }
        } else {
            __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95 = 1U;
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                    >> 3U) & (~ (IData)((0xffffffffU 
                                         == vlSelf->__PVT__u_cmdq__DOT__valid_reg)))))) {
            __Vdlyvval__u_cmdq__DOT__entries__v0 = 
                (0xfffffffffULL & (((QData)((IData)(
                                                    vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[4U])) 
                                    << 0x14U) | ((QData)((IData)(
                                                                 vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[3U])) 
                                                 >> 0xcU)));
            __Vdlyvset__u_cmdq__DOT__entries__v0 = 1U;
            __Vdlyvdim0__u_cmdq__DOT__entries__v0 = vlSelf->__PVT__u_cmdq__DOT__free_idx;
        }
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [0U] - (IData)(1U)))
                : 0U);
        __Vdlyvset__u_timing_check__DOT__cnt_rcd__v0 = 1U;
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [1U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [1U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [2U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [2U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [3U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [3U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [4U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [4U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [5U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [5U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [6U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [6U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [7U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [7U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [8U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [8U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [9U]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                  [9U] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xaU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xaU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xbU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xbU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xcU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xcU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xdU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xdU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xeU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xeU] - (IData)(1U)))
                : 0U);
        __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15 
            = ((0U < vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                [0xfU]) ? (0xffU & (vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                    [0xfU] - (IData)(1U)))
                : 0U);
        vlSelf->err_ref_deadline_miss = 0U;
        if ((0U == (IData)(vlSelf->__PVT__u_ref_eng__DOT__refi_counter))) {
            __Vdly__u_ref_eng__DOT__refi_counter = 0xf3bU;
            if (((IData)(vlSelf->__PVT__ref_req) & 
                 (~ (IData)(vlSelf->__PVT__ref_ack)))) {
                vlSelf->err_ref_deadline_miss = 1U;
            }
            __Vdly__ref_req = 1U;
        } else {
            __Vdly__u_ref_eng__DOT__refi_counter = 
                (0x1fffU & ((IData)(vlSelf->__PVT__u_ref_eng__DOT__refi_counter) 
                            - (IData)(1U)));
        }
        if (((IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
             & (7U == (IData)(vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)))) {
            vlSelf->__PVT__u_wdb__DOT__valid_reg = 
                ((~ ((IData)(1U) << (IData)(vlSelf->col_req_wdb_ptr))) 
                 & (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg));
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                    >> 3U) & (~ (IData)(vlSelf->wdb_full))))) {
            vlSelf->__PVT__u_wdb__DOT__valid_reg = 
                ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                 | (0xffffU & ((IData)(1U) << (IData)(vlSelf->wdb_alloc_ptr))));
        }
        if (vlSelf->__Vcellinp__u_cmdq__pop_val) {
            vlSelf->__PVT__u_cmdq__DOT__valid_reg = 
                ((~ ((IData)(1U) << (IData)(vlSelf->__PVT__cmdq_grant_idx))) 
                 & vlSelf->__PVT__u_cmdq__DOT__valid_reg);
        }
        if ((1U & ((vlSymsp->TOP.tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                    >> 3U) & (~ (IData)(vlSelf->cmdq_full))))) {
            vlSelf->__PVT__u_cmdq__DOT__valid_reg = 
                (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                 | (0xffffffffULL & ((IData)(1U) << (IData)(vlSelf->__PVT__u_cmdq__DOT__free_idx))));
        }
    } else {
        vlSelf->__PVT__u_rdb__DOT__id_rd_ptr = 0U;
        vlSelf->__PVT__u_rdb__DOT__data_wr_ptr = 0U;
        __Vdly__u_rdb__DOT__rbeat_cnt = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wtr = 0U;
        vlSelf->__PVT__u_rdb__DOT__data_rd_ptr = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rrd = 0U;
        vlSelf->__PVT__u_rdb__DOT__id_wr_ptr = 0U;
        __Vdlyvset__u_wdb__DOT__data_mem__v1 = 1U;
        __Vdlyvset__u_wdb__DOT__mask_mem__v1 = 1U;
        __Vdlyvset__open_row__v1 = 1U;
        __Vdlyvset__u_timing_check__DOT__faw_timer__v8 = 1U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rfc = 0U;
        __Vdlyvset__u_timing_check__DOT__cnt_rc__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_rp__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_wr__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_rtp__v17 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_ras__v17 = 1U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ccd = 0U;
        __Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96 = 1U;
        __Vdlyvset__u_cmdq__DOT__entries__v1 = 1U;
        __Vdlyvset__u_timing_check__DOT__cnt_rcd__v17 = 1U;
        __Vdly__ref_req = 0U;
        __Vdly__u_ref_eng__DOT__refi_counter = 0xf3bU;
        vlSelf->err_ref_deadline_miss = 0U;
        vlSelf->__PVT__bank_is_open = 0U;
        vlSelf->__PVT__u_wdb__DOT__valid_reg = 0U;
        vlSelf->__PVT__u_cmdq__DOT__valid_reg = 0U;
    }
    vlSelf->__PVT__u_rdb__DOT__rbeat_cnt = __Vdly__u_rdb__DOT__rbeat_cnt;
    if (__Vdlyvset__u_rdb__DOT__ret_id_fifo__v0) {
        vlSelf->__PVT__u_rdb__DOT__ret_id_fifo[__Vdlyvdim0__u_rdb__DOT__ret_id_fifo__v0] 
            = __Vdlyvval__u_rdb__DOT__ret_id_fifo__v0;
    }
    if (__Vdlyvset__u_rdb__DOT__data_fifo__v0) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__Vdlyvlsb__u_rdb__DOT__data_fifo__v0), 
                        vlSelf->__PVT__u_rdb__DOT__data_fifo
                        [__Vdlyvdim0__u_rdb__DOT__data_fifo__v0], __Vdlyvval__u_rdb__DOT__data_fifo__v0);
    }
    if (__Vdlyvset__u_rdb__DOT__id_fifo__v0) {
        vlSelf->__PVT__u_rdb__DOT__id_fifo[__Vdlyvdim0__u_rdb__DOT__id_fifo__v0] 
            = __Vdlyvval__u_rdb__DOT__id_fifo__v0;
    }
    if (__Vdlyvset__u_wdb__DOT__data_mem__v0) {
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][0U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][1U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][2U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][3U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][4U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][5U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][6U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[__Vdlyvdim0__u_wdb__DOT__data_mem__v0][7U] 
            = __Vdlyvval__u_wdb__DOT__data_mem__v0[7U];
    }
    if (__Vdlyvset__u_wdb__DOT__data_mem__v1) {
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[1U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[2U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[3U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[4U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[5U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[6U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[7U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[8U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[9U][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xaU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xbU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xcU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xdU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xeU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->__PVT__u_wdb__DOT__data_mem[0xfU][7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
    }
    if (__Vdlyvset__u_wdb__DOT__mask_mem__v0) {
        vlSelf->__PVT__u_wdb__DOT__mask_mem[__Vdlyvdim0__u_wdb__DOT__mask_mem__v0] 
            = __Vdlyvval__u_wdb__DOT__mask_mem__v0;
    }
    if (__Vdlyvset__u_wdb__DOT__mask_mem__v1) {
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[1U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[2U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[3U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[4U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[5U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[6U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[7U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[8U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[9U] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xaU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xbU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xcU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xdU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xeU] = 0U;
        vlSelf->__PVT__u_wdb__DOT__mask_mem[0xfU] = 0U;
    }
    if (__Vdlyvset__open_row__v0) {
        vlSelf->__PVT__open_row[__Vdlyvdim0__open_row__v0] 
            = __Vdlyvval__open_row__v0;
    }
    if (__Vdlyvset__open_row__v1) {
        vlSelf->__PVT__open_row[0U] = 0U;
        vlSelf->__PVT__open_row[1U] = 0U;
        vlSelf->__PVT__open_row[2U] = 0U;
        vlSelf->__PVT__open_row[3U] = 0U;
        vlSelf->__PVT__open_row[4U] = 0U;
        vlSelf->__PVT__open_row[5U] = 0U;
        vlSelf->__PVT__open_row[6U] = 0U;
        vlSelf->__PVT__open_row[7U] = 0U;
        vlSelf->__PVT__open_row[8U] = 0U;
        vlSelf->__PVT__open_row[9U] = 0U;
        vlSelf->__PVT__open_row[0xaU] = 0U;
        vlSelf->__PVT__open_row[0xbU] = 0U;
        vlSelf->__PVT__open_row[0xcU] = 0U;
        vlSelf->__PVT__open_row[0xdU] = 0U;
        vlSelf->__PVT__open_row[0xeU] = 0U;
        vlSelf->__PVT__open_row[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__faw_timer__v0) {
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[0U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v0;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[1U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v1;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[2U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v2;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[3U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v3;
    }
    if (__Vdlyvset__u_timing_check__DOT__faw_timer__v4) {
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[3U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v4;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[2U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v5;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[1U] 
            = __Vdlyvval__u_timing_check__DOT__faw_timer__v6;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[0U] = 0x1fU;
    }
    if (__Vdlyvset__u_timing_check__DOT__faw_timer__v8) {
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[3U] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rc__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rc__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rc__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[__Vdlyvdim0__u_timing_check__DOT__cnt_rc__v16] = 0x31U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rc__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rp__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rp__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rp__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[__Vdlyvdim0__u_timing_check__DOT__cnt_rp__v16] = 0xdU;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rp__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_wr__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_wr__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_wr__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[__Vdlyvdim0__u_timing_check__DOT__cnt_wr__v16] = 0x11U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_wr__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rtp__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rtp__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rtp__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[__Vdlyvdim0__u_timing_check__DOT__cnt_rtp__v16] = 7U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rtp__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[0xfU] = 0U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_ras__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_ras__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_ras__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[__Vdlyvdim0__u_timing_check__DOT__cnt_ras__v16] = 0x21U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_ras__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[0xfU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v0) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v1) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v1;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v2) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v3) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v4) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v4;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v5) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v6) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v7) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v7;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v8) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v9) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v10) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v10;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v11) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v12) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v13) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v13;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v14) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v15) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v16) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v16;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v17) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v18) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v19) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v19;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v20) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v21) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v22) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v22;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v23) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v24) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v25) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v25;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v26) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v27) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v28) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v28;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v29) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v30) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v31) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v31;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v32) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v33) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v34) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v34;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v35) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v36) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v37) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v37;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v38) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v39) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v40) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v40;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v41) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v42) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v43) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v43;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v44) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v45) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v46) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v46;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v47) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v48) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v49) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v49;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v50) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v51) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v52) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v52;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v53) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v54) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v55) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v55;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v56) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v57) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v58) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v58;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v59) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v60) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v61) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v61;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v62) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v63) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v64) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v64;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v65) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v66) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v67) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v67;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v68) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v69) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v70) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v70;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v71) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v72) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v73) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v73;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v74) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v75) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v76) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v76;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v77) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v78) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v79) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v79;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v80) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v81) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v82) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v82;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v83) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v84) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v85) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v85;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v86) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v87) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v88) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v88;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v89) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v90) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v91) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v91;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v92) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v93) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v94) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] 
            = __Vdlyvval__u_cmdq_arbiter__DOT__wait_ctr__v94;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v95) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] = 0U;
    }
    if (__Vdlyvset__u_cmdq_arbiter__DOT__wait_ctr__v96) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1fU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1eU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1dU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1cU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1bU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x1aU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x19U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x18U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x17U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x16U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x15U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x14U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x13U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x12U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x11U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0x10U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xfU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xeU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xdU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xcU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xbU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0xaU] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[9U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[8U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[7U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[6U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[5U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[4U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[3U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[2U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[1U] = 0U;
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[0U] = 0U;
    }
    if (__Vdlyvset__u_cmdq__DOT__entries__v0) {
        vlSelf->__PVT__u_cmdq__DOT__entries[__Vdlyvdim0__u_cmdq__DOT__entries__v0] 
            = __Vdlyvval__u_cmdq__DOT__entries__v0;
    }
    if (__Vdlyvset__u_cmdq__DOT__entries__v1) {
        vlSelf->__PVT__u_cmdq__DOT__entries[0U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[1U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[2U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[3U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[4U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[5U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[6U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[7U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[8U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[9U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xaU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xbU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xcU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xdU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xeU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0xfU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x10U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x11U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x12U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x13U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x14U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x15U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x16U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x17U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x18U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x19U] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1aU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1bU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1cU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1dU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1eU] = 0ULL;
        vlSelf->__PVT__u_cmdq__DOT__entries[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rcd__v0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v0;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[1U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v1;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[2U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v2;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[3U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v3;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[4U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v4;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[5U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v5;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[6U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v6;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[7U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v7;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[8U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v8;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[9U] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v9;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xaU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v10;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xbU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v11;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xcU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v12;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xdU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v13;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xeU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v14;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xfU] 
            = __Vdlyvval__u_timing_check__DOT__cnt_rcd__v15;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rcd__v16) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[__Vdlyvdim0__u_timing_check__DOT__cnt_rcd__v16] = 0x11U;
    }
    if (__Vdlyvset__u_timing_check__DOT__cnt_rcd__v17) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[1U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[2U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[3U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[4U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[5U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[6U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[7U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[8U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[9U] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xaU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xbU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xcU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xdU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xeU] = 0U;
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[0xfU] = 0U;
    }
    vlSelf->__PVT__u_ref_eng__DOT__refi_counter = __Vdly__u_ref_eng__DOT__refi_counter;
    vlSelf->__PVT__ref_req = __Vdly__ref_req;
    vlSelf->__PVT__u_rdb__DOT__data_empty = ((IData)(vlSelf->__PVT__u_rdb__DOT__data_rd_ptr) 
                                             == (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr));
    vlSelf->__PVT__u_rdb__DOT__id_empty = ((IData)(vlSelf->__PVT__u_rdb__DOT__id_rd_ptr) 
                                           == (IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr));
    vlSelf->__PVT__u_rdb__DOT__outstanding_cnt = (0x1fU 
                                                  & ((IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr) 
                                                     - (IData)(vlSelf->__PVT__u_rdb__DOT__data_rd_ptr)));
    u_timing_check__DOT____VdfgTmp_hab8b0bf2__0 = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd)) 
                                                   & ((0U 
                                                       >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                      & (0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__faw_timer
                                                         [3U])));
    u_timing_check__DOT____VdfgTmp_hb2d28fa4__0 = (
                                                   (0U 
                                                    >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_wtr)));
    vlSelf->__PVT__legal_ref = ((0U >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                & (0U == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rrd)));
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [1U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [2U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [3U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [4U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [5U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [6U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [7U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [8U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [9U])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xaU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xbU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xcU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xdU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xeU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    if ((0U != vlSelf->__PVT__u_timing_check__DOT__cnt_rp
         [0xfU])) {
        vlSelf->__PVT__legal_ref = 0U;
    }
    vlSelf->__PVT__legal_pre = ((((0U == vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                   [0xfU]) & ((0U == 
                                               vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                               [0xfU]) 
                                              & ((0U 
                                                  >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                 & (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                    [0xfU])))) 
                                 << 0xfU) | ((((0U 
                                                == 
                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                [0xeU]) 
                                               & ((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                   [0xeU]) 
                                                  & ((0U 
                                                      >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                     & (0U 
                                                        == 
                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                        [0xeU])))) 
                                              << 0xeU) 
                                             | ((((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                   [0xdU]) 
                                                  & ((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                      [0xdU]) 
                                                     & ((0U 
                                                         >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                        & (0U 
                                                           == 
                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                           [0xdU])))) 
                                                 << 0xdU) 
                                                | ((((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                      [0xcU]) 
                                                     & ((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                         [0xcU]) 
                                                        & ((0U 
                                                            >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                           & (0U 
                                                              == 
                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                              [0xcU])))) 
                                                    << 0xcU) 
                                                   | ((((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                         [0xbU]) 
                                                        & ((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                            [0xbU]) 
                                                           & ((0U 
                                                               >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                              & (0U 
                                                                 == 
                                                                 vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                 [0xbU])))) 
                                                       << 0xbU) 
                                                      | ((((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                            [0xaU]) 
                                                           & ((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                               [0xaU]) 
                                                              & ((0U 
                                                                  >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                 & (0U 
                                                                    == 
                                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                    [0xaU])))) 
                                                          << 0xaU) 
                                                         | ((((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                               [9U]) 
                                                              & ((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                  [9U]) 
                                                                 & ((0U 
                                                                     >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                    & (0U 
                                                                       == 
                                                                       vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                       [9U])))) 
                                                             << 9U) 
                                                            | ((((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                  [8U]) 
                                                                 & ((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                     [8U]) 
                                                                    & ((0U 
                                                                        >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                       & (0U 
                                                                          == 
                                                                          vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                          [8U])))) 
                                                                << 8U) 
                                                               | ((((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                     [7U]) 
                                                                    & ((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                        [7U]) 
                                                                       & ((0U 
                                                                           >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                          & (0U 
                                                                             == 
                                                                             vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                             [7U])))) 
                                                                   << 7U) 
                                                                  | ((((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                        [6U]) 
                                                                       & ((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                           [6U]) 
                                                                          & ((0U 
                                                                              >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                             & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [6U])))) 
                                                                      << 6U) 
                                                                     | ((((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                           [5U]) 
                                                                          & ((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                              [5U]) 
                                                                             & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [5U])))) 
                                                                         << 5U) 
                                                                        | ((((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                              [4U]) 
                                                                             & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [4U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [4U])))) 
                                                                            << 4U) 
                                                                           | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [3U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [3U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [3U])))) 
                                                                               << 3U) 
                                                                              | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [2U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [2U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [2U])))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [1U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [1U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [1U])))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_ras
                                                                                [0U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_wr
                                                                                [0U]) 
                                                                                & ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rtp
                                                                                [0U])))))))))))))))))));
    vlSelf->__PVT__slot_data[0x1fU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1fU];
    vlSelf->__PVT__slot_data[0x1eU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1eU];
    vlSelf->__PVT__slot_data[0x1dU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1dU];
    vlSelf->__PVT__slot_data[0x1cU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1cU];
    vlSelf->__PVT__slot_data[0x1bU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1bU];
    vlSelf->__PVT__slot_data[0x1aU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x1aU];
    vlSelf->__PVT__slot_data[0x19U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x19U];
    vlSelf->__PVT__slot_data[0x18U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x18U];
    vlSelf->__PVT__slot_data[0x17U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x17U];
    vlSelf->__PVT__slot_data[0x16U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x16U];
    vlSelf->__PVT__slot_data[0x15U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x15U];
    vlSelf->__PVT__slot_data[0x14U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x14U];
    vlSelf->__PVT__slot_data[0x13U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x13U];
    vlSelf->__PVT__slot_data[0x12U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x12U];
    vlSelf->__PVT__slot_data[0x11U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x11U];
    vlSelf->__PVT__slot_data[0x10U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0x10U];
    vlSelf->__PVT__slot_data[0xfU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xfU];
    vlSelf->__PVT__slot_data[0xeU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xeU];
    vlSelf->__PVT__slot_data[0xdU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xdU];
    vlSelf->__PVT__slot_data[0xcU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xcU];
    vlSelf->__PVT__slot_data[0xbU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xbU];
    vlSelf->__PVT__slot_data[0xaU] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0xaU];
    vlSelf->__PVT__slot_data[9U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [9U];
    vlSelf->__PVT__slot_data[8U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [8U];
    vlSelf->__PVT__slot_data[7U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [7U];
    vlSelf->__PVT__slot_data[6U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [6U];
    vlSelf->__PVT__slot_data[5U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [5U];
    vlSelf->__PVT__slot_data[4U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [4U];
    vlSelf->__PVT__slot_data[3U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [3U];
    vlSelf->__PVT__slot_data[2U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [2U];
    vlSelf->__PVT__slot_data[1U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [1U];
    vlSelf->__PVT__slot_data[0U] = vlSelf->__PVT__u_cmdq__DOT__entries
        [0U];
    u_timing_check__DOT____VdfgTmp_h11132cdf__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xfU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11f0ecba__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xeU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11b16388__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xdU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h113ea5d5__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xcU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h1349cac2__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xbU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h127be82f__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0xaU]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h1186e3d6__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [9U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11931093__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [8U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h118790e4__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [7U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h11b3de41__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [6U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc80a969c__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [5U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc8d79bd1__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [4U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hcf8f8086__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [3U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc36b27e3__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [2U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_h113fc8fe__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [1U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    u_timing_check__DOT____VdfgTmp_hc81cdc6b__0 = (
                                                   (0U 
                                                    == 
                                                    vlSelf->__PVT__u_timing_check__DOT__cnt_rcd
                                                    [0U]) 
                                                   & (0U 
                                                      == (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_ccd)));
    vlSelf->__PVT__any_bank_open = 0U;
    if ((1U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((2U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((4U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((8U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x10U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x20U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x40U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x80U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x100U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x200U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x400U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x800U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
    }
    vlSelf->__PVT__legal_act = ((((0U == vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                   [0xfU]) & ((0U == 
                                               vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                               [0xfU]) 
                                              & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                 << 0xfU) | ((((0U 
                                                == 
                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                [0xeU]) 
                                               & ((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                   [0xeU]) 
                                                  & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                              << 0xeU) 
                                             | ((((0U 
                                                   == 
                                                   vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                   [0xdU]) 
                                                  & ((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                      [0xdU]) 
                                                     & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                 << 0xdU) 
                                                | ((((0U 
                                                      == 
                                                      vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                      [0xcU]) 
                                                     & ((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                         [0xcU]) 
                                                        & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                    << 0xcU) 
                                                   | ((((0U 
                                                         == 
                                                         vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                         [0xbU]) 
                                                        & ((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                            [0xbU]) 
                                                           & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                       << 0xbU) 
                                                      | ((((0U 
                                                            == 
                                                            vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                            [0xaU]) 
                                                           & ((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                               [0xaU]) 
                                                              & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                          << 0xaU) 
                                                         | ((((0U 
                                                               == 
                                                               vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                               [9U]) 
                                                              & ((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                  [9U]) 
                                                                 & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                             << 9U) 
                                                            | ((((0U 
                                                                  == 
                                                                  vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                  [8U]) 
                                                                 & ((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                     [8U]) 
                                                                    & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                << 8U) 
                                                               | ((((0U 
                                                                     == 
                                                                     vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                     [7U]) 
                                                                    & ((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                        [7U]) 
                                                                       & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                   << 7U) 
                                                                  | ((((0U 
                                                                        == 
                                                                        vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                        [6U]) 
                                                                       & ((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                           [6U]) 
                                                                          & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                      << 6U) 
                                                                     | ((((0U 
                                                                           == 
                                                                           vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                           [5U]) 
                                                                          & ((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                              [5U]) 
                                                                             & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                         << 5U) 
                                                                        | ((((0U 
                                                                              == 
                                                                              vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                              [4U]) 
                                                                             & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [4U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                            << 4U) 
                                                                           | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [3U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [3U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                               << 3U) 
                                                                              | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [2U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [2U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [1U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [1U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rp
                                                                                [0U]) 
                                                                                & ((0U 
                                                                                == 
                                                                                vlSelf->__PVT__u_timing_check__DOT__cnt_rc
                                                                                [0U]) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hab8b0bf2__0))))))))))))))))));
    vlSelf->__PVT__refresh_pre_valid = 0U;
    vlSelf->__PVT__refresh_pre_bank_idx = 0U;
    if ((1U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & ((IData)(vlSelf->__PVT__legal_pre) 
                   & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0U;
        }
    }
    if ((2U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 1U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 1U;
        }
    }
    if ((4U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 2U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 2U;
        }
    }
    if ((8U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 3U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 3U;
        }
    }
    if ((0x10U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 4U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 4U;
        }
    }
    if ((0x20U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 5U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 5U;
        }
    }
    if ((0x40U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 6U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 6U;
        }
    }
    if ((0x80U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 7U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 7U;
        }
    }
    if ((0x100U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 8U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 8U;
        }
    }
    if ((0x200U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 9U) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 9U;
        }
    }
    if ((0x400U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xaU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xaU;
        }
    }
    if ((0x800U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xbU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xbU;
        }
    }
    if ((0x1000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xcU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xcU;
        }
    }
    if ((0x2000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xdU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xdU;
        }
    }
    if ((0x4000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        if ((1U & (((IData)(vlSelf->__PVT__legal_pre) 
                    >> 0xeU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xeU;
        }
    }
    if ((0x8000U & (IData)(vlSelf->__PVT__bank_is_open))) {
        vlSelf->__PVT__any_bank_open = 1U;
        if ((IData)((((IData)(vlSelf->__PVT__legal_pre) 
                      >> 0xfU) & (~ (IData)(vlSelf->__PVT__refresh_pre_valid))))) {
            vlSelf->__PVT__refresh_pre_valid = 1U;
            vlSelf->__PVT__refresh_pre_bank_idx = 0xfU;
        }
    }
    vlSelf->__PVT__legal_wr = ((((0U >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                 & (IData)(u_timing_check__DOT____VdfgTmp_h11132cdf__0)) 
                                << 0xfU) | ((((0U >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                              & (IData)(u_timing_check__DOT____VdfgTmp_h11f0ecba__0)) 
                                             << 0xeU) 
                                            | ((((0U 
                                                  >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                 & (IData)(u_timing_check__DOT____VdfgTmp_h11b16388__0)) 
                                                << 0xdU) 
                                               | ((((0U 
                                                     >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                    & (IData)(u_timing_check__DOT____VdfgTmp_h113ea5d5__0)) 
                                                   << 0xcU) 
                                                  | ((((0U 
                                                        >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                       & (IData)(u_timing_check__DOT____VdfgTmp_h1349cac2__0)) 
                                                      << 0xbU) 
                                                     | ((((0U 
                                                           >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                          & (IData)(u_timing_check__DOT____VdfgTmp_h127be82f__0)) 
                                                         << 0xaU) 
                                                        | ((((0U 
                                                              >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                             & (IData)(u_timing_check__DOT____VdfgTmp_h1186e3d6__0)) 
                                                            << 9U) 
                                                           | ((((0U 
                                                                 >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                & (IData)(u_timing_check__DOT____VdfgTmp_h11931093__0)) 
                                                               << 8U) 
                                                              | ((((0U 
                                                                    >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                   & (IData)(u_timing_check__DOT____VdfgTmp_h118790e4__0)) 
                                                                  << 7U) 
                                                                 | ((((0U 
                                                                       >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                      & (IData)(u_timing_check__DOT____VdfgTmp_h11b3de41__0)) 
                                                                     << 6U) 
                                                                    | ((((0U 
                                                                          >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                         & (IData)(u_timing_check__DOT____VdfgTmp_hc80a969c__0)) 
                                                                        << 5U) 
                                                                       | ((((0U 
                                                                             >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                            & (IData)(u_timing_check__DOT____VdfgTmp_hc8d79bd1__0)) 
                                                                           << 4U) 
                                                                          | ((((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                               & (IData)(u_timing_check__DOT____VdfgTmp_hcf8f8086__0)) 
                                                                              << 3U) 
                                                                             | ((((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hc36b27e3__0)) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_h113fc8fe__0)) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                >= (IData)(vlSelf->__PVT__u_timing_check__DOT__cnt_rfc)) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hc81cdc6b__0)))))))))))))))));
    vlSelf->__PVT__legal_rd = ((((IData)(u_timing_check__DOT____VdfgTmp_h11132cdf__0) 
                                 & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                << 0xfU) | ((((IData)(u_timing_check__DOT____VdfgTmp_h11f0ecba__0) 
                                              & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                             << 0xeU) 
                                            | ((((IData)(u_timing_check__DOT____VdfgTmp_h11b16388__0) 
                                                 & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                << 0xdU) 
                                               | ((((IData)(u_timing_check__DOT____VdfgTmp_h113ea5d5__0) 
                                                    & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                   << 0xcU) 
                                                  | ((((IData)(u_timing_check__DOT____VdfgTmp_h1349cac2__0) 
                                                       & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                      << 0xbU) 
                                                     | ((((IData)(u_timing_check__DOT____VdfgTmp_h127be82f__0) 
                                                          & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                         << 0xaU) 
                                                        | ((((IData)(u_timing_check__DOT____VdfgTmp_h1186e3d6__0) 
                                                             & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                            << 9U) 
                                                           | ((((IData)(u_timing_check__DOT____VdfgTmp_h11931093__0) 
                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                               << 8U) 
                                                              | ((((IData)(u_timing_check__DOT____VdfgTmp_h118790e4__0) 
                                                                   & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                  << 7U) 
                                                                 | ((((IData)(u_timing_check__DOT____VdfgTmp_h11b3de41__0) 
                                                                      & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                     << 6U) 
                                                                    | ((((IData)(u_timing_check__DOT____VdfgTmp_hc80a969c__0) 
                                                                         & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                        << 5U) 
                                                                       | ((((IData)(u_timing_check__DOT____VdfgTmp_hc8d79bd1__0) 
                                                                            & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                           << 4U) 
                                                                          | ((((IData)(u_timing_check__DOT____VdfgTmp_hcf8f8086__0) 
                                                                               & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                              << 3U) 
                                                                             | ((((IData)(u_timing_check__DOT____VdfgTmp_hc36b27e3__0) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                                << 2U) 
                                                                                | ((((IData)(u_timing_check__DOT____VdfgTmp_h113fc8fe__0) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)) 
                                                                                << 1U) 
                                                                                | ((IData)(u_timing_check__DOT____VdfgTmp_hc81cdc6b__0) 
                                                                                & (IData)(u_timing_check__DOT____VdfgTmp_hb2d28fa4__0)))))))))))))))));
    vlSelf->wdb_full = (0xffffU == (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg));
    vlSelf->wdb_alloc_ptr = 0U;
    vlSelf->__PVT__u_wdb__DOT__free_found = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg)))) {
        vlSelf->wdb_alloc_ptr = 0U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 1U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 1U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 2U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 2U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 3U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 3U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 4U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 4U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 5U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 5U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 6U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 6U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 7U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 7U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 8U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 8U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 9U)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 9U;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xaU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xaU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xbU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xbU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xcU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xcU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xdU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xdU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xeU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xeU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                   >> 0xfU)) & (~ (IData)(vlSelf->__PVT__u_wdb__DOT__free_found))))) {
        vlSelf->wdb_alloc_ptr = 0xfU;
        vlSelf->__PVT__u_wdb__DOT__free_found = 1U;
    }
    vlSelf->row_req_is_ref = 0U;
    vlSelf->cmdq_full = (0xffffffffU == vlSelf->__PVT__u_cmdq__DOT__valid_reg);
    vlSelf->__PVT__u_cmdq__DOT__free_idx = 0U;
    vlSelf->__PVT__u_cmdq__DOT__free_found = 0U;
    if ((1U & (~ vlSelf->__PVT__u_cmdq__DOT__valid_reg))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 1U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 1U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 2U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 2U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 3U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 3U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 4U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 4U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 5U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 5U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 6U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 6U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 7U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 7U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 8U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 8U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 9U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 9U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xaU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xaU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xbU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xbU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xcU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xcU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xdU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xdU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xeU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xeU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0xfU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0xfU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x10U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x10U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x11U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x11U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x12U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x12U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x13U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x13U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x14U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x14U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x15U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x15U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x16U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x16U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x17U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x17U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x18U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x18U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x19U)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x19U;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1aU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1aU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1bU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1bU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1cU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1cU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1dU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1dU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1eU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1eU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    if ((1U & ((~ (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                   >> 0x1fU)) & (~ (IData)(vlSelf->__PVT__u_cmdq__DOT__free_found))))) {
        vlSelf->__PVT__u_cmdq__DOT__free_idx = 0x1fU;
        vlSelf->__PVT__u_cmdq__DOT__free_found = 1U;
    }
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffffeU & vlSelf->__PVT__slot_legal) 
                                 | ((1U & vlSelf->__PVT__u_cmdq__DOT__valid_reg) 
                                    && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                               & (vlSelf->__PVT__open_row
                                                  [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                  == 
                                                  (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                              >> 0xdU)))))
                                               ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                  & ((1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                 >> 0x1bU)))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__legal_wr) 
                                                      >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__legal_rd) 
                                                      >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                               : ((1U 
                                                   & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                      >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__legal_pre) 
                                                   >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__legal_act) 
                                                   >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[1U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffffdU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 1U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 1U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[2U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffffbU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 2U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 2U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[3U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffff7U & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 3U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 3U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[4U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffffefU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 4U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 4U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[5U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffffdfU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 5U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 5U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[6U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffffbfU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 6U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 6U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[7U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffff7fU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 7U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 7U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[8U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffeffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 8U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 8U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[9U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffdffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 9U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 9U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xaU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffffbffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xaU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xaU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xbU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffff7ffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xbU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xbU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xcU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffefffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xcU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xcU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xdU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffdfffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xdU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xdU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xeU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffffbfffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xeU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xeU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0xfU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffff7fffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0xfU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0xfU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x10U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffeffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x10U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x10U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x11U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffdffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x11U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x11U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x12U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfffbffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x12U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x12U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x13U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfff7ffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x13U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x13U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x14U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffefffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x14U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x14U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x15U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffdfffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x15U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x15U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x16U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xffbfffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x16U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x16U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x17U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xff7fffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x17U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x17U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x18U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfeffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x18U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x18U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x19U];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfdffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x19U)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x19U));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1aU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xfbffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1aU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1aU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1bU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xf7ffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1bU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1bU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1cU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xefffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1cU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1cU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1dU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xdfffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1dU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1dU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1eU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__slot_legal = ((0xbfffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((1U & (vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                            >> 0x1eU)) 
                                     && (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                                & (vlSelf->__PVT__open_row
                                                   [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0xdU)))))
                                                ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                   & ((1U 
                                                       & (IData)(
                                                                 (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                                  >> 0x1bU)))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__legal_wr) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__legal_rd) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                                : (
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                       >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_pre) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_act) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1eU));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
        = vlSelf->__PVT__slot_data[0x1fU];
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok 
        = (1U & ((1U & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                >> 0x1bU))) ? ((IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg) 
                                               >> (0xfU 
                                                   & (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry)))
                  : (0x10U != (IData)(vlSelf->__PVT__u_rdb__DOT__outstanding_cnt))));
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx 
        = (0xfU & (IData)((vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                           >> 9U)));
    vlSelf->__PVT__slot_legal = ((0x7fffffffU & vlSelf->__PVT__slot_legal) 
                                 | (((vlSelf->__PVT__u_cmdq__DOT__valid_reg 
                                      >> 0x1fU) && 
                                     (1U & ((((IData)(vlSelf->__PVT__bank_is_open) 
                                              >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)) 
                                             & (vlSelf->__PVT__open_row
                                                [vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx] 
                                                == 
                                                (0x3fffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                            >> 0xdU)))))
                                             ? ((IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok) 
                                                & ((1U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry 
                                                               >> 0x1bU)))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__legal_wr) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__legal_rd) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))))
                                             : ((1U 
                                                 & ((IData)(vlSelf->__PVT__bank_is_open) 
                                                    >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__legal_pre) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx))
                                                 : 
                                                ((IData)(vlSelf->__PVT__legal_act) 
                                                 >> (IData)(vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx)))))) 
                                    << 0x1fU));
    vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible = 
        (vlSelf->__PVT__slot_legal & vlSelf->__PVT__u_cmdq__DOT__valid_reg);
    vlSelf->__PVT__cmdq_grant_valid = 0U;
    vlSelf->__PVT__cmdq_grant_idx = 0U;
    vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr = 0U;
    vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen = 0U;
    if ((1U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0U];
            vlSelf->__PVT__cmdq_grant_idx = 0U;
        }
    }
    if ((2U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [1U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [1U];
            vlSelf->__PVT__cmdq_grant_idx = 1U;
        }
    }
    if ((4U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [2U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [2U];
            vlSelf->__PVT__cmdq_grant_idx = 2U;
        }
    }
    if ((8U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [3U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [3U];
            vlSelf->__PVT__cmdq_grant_idx = 3U;
        }
    }
    if ((0x10U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [4U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [4U];
            vlSelf->__PVT__cmdq_grant_idx = 4U;
        }
    }
    if ((0x20U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [5U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [5U];
            vlSelf->__PVT__cmdq_grant_idx = 5U;
        }
    }
    if ((0x40U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [6U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [6U];
            vlSelf->__PVT__cmdq_grant_idx = 6U;
        }
    }
    if ((0x80U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [7U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [7U];
            vlSelf->__PVT__cmdq_grant_idx = 7U;
        }
    }
    if ((0x100U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [8U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [8U];
            vlSelf->__PVT__cmdq_grant_idx = 8U;
        }
    }
    if ((0x200U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [9U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [9U];
            vlSelf->__PVT__cmdq_grant_idx = 9U;
        }
    }
    if ((0x400U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xaU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xaU];
            vlSelf->__PVT__cmdq_grant_idx = 0xaU;
        }
    }
    if ((0x800U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xbU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xbU];
            vlSelf->__PVT__cmdq_grant_idx = 0xbU;
        }
    }
    if ((0x1000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xcU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xcU];
            vlSelf->__PVT__cmdq_grant_idx = 0xcU;
        }
    }
    if ((0x2000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xdU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xdU];
            vlSelf->__PVT__cmdq_grant_idx = 0xdU;
        }
    }
    if ((0x4000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xeU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xeU];
            vlSelf->__PVT__cmdq_grant_idx = 0xeU;
        }
    }
    if ((0x8000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0xfU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0xfU];
            vlSelf->__PVT__cmdq_grant_idx = 0xfU;
        }
    }
    if ((0x10000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x10U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x10U];
            vlSelf->__PVT__cmdq_grant_idx = 0x10U;
        }
    }
    if ((0x20000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x11U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x11U];
            vlSelf->__PVT__cmdq_grant_idx = 0x11U;
        }
    }
    if ((0x40000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x12U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x12U];
            vlSelf->__PVT__cmdq_grant_idx = 0x12U;
        }
    }
    if ((0x80000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x13U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x13U];
            vlSelf->__PVT__cmdq_grant_idx = 0x13U;
        }
    }
    if ((0x100000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x14U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x14U];
            vlSelf->__PVT__cmdq_grant_idx = 0x14U;
        }
    }
    if ((0x200000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x15U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x15U];
            vlSelf->__PVT__cmdq_grant_idx = 0x15U;
        }
    }
    if ((0x400000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x16U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x16U];
            vlSelf->__PVT__cmdq_grant_idx = 0x16U;
        }
    }
    if ((0x800000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x17U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x17U];
            vlSelf->__PVT__cmdq_grant_idx = 0x17U;
        }
    }
    if ((0x1000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x18U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x18U];
            vlSelf->__PVT__cmdq_grant_idx = 0x18U;
        }
    }
    if ((0x2000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x19U] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x19U];
            vlSelf->__PVT__cmdq_grant_idx = 0x19U;
        }
    }
    if ((0x4000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1aU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1aU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1aU;
        }
    }
    if ((0x8000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1bU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1bU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1bU;
        }
    }
    if ((0x10000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1cU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1cU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1cU;
        }
    }
    if ((0x20000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1dU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1dU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1dU;
        }
    }
    if ((0x40000000U & vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1eU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1eU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1eU;
        }
    }
    if ((vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible 
         >> 0x1fU)) {
        if ((1U & ((~ (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen)) 
                   & ((~ (IData)(vlSelf->__PVT__cmdq_grant_valid)) 
                      | (vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                         [0x1fU] > (IData)(vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr)))))) {
            vlSelf->__PVT__cmdq_grant_valid = 1U;
            vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr 
                = vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr
                [0x1fU];
            vlSelf->__PVT__cmdq_grant_idx = 0x1fU;
        }
    }
    vlSelf->__PVT__cmdq_grant = 0U;
    if (vlSelf->__PVT__cmdq_grant_valid) {
        vlSelf->__PVT__cmdq_grant = (vlSelf->__PVT__cmdq_grant 
                                     | (0xffffffffULL 
                                        & ((IData)(1U) 
                                           << (IData)(vlSelf->__PVT__cmdq_grant_idx))));
    }
    vlSelf->__PVT__winner = vlSelf->__PVT__slot_data
        [vlSelf->__PVT__cmdq_grant_idx];
    vlSelf->col_req_axi_id = 0U;
    vlSelf->col_req_wdb_ptr = 0U;
    vlSelf->col_req_addr = 0U;
    vlSelf->row_req_addr = 0U;
    vlSelf->col_req_bank = 0U;
    vlSelf->col_req_bg = 0U;
    vlSelf->row_req_bank = 0U;
    vlSelf->row_req_bg = 0U;
    vlSelf->row_req_cmd = 0U;
    vlSelf->col_req_cmd = 0U;
    vlSelf->row_req_val = 0U;
    if (vlSelf->__PVT__ref_req) {
        if (vlSelf->__PVT__any_bank_open) {
            if (vlSelf->__PVT__refresh_pre_valid) {
                vlSelf->row_req_is_ref = 1U;
                vlSelf->row_req_bank = (3U & (IData)(vlSelf->__PVT__refresh_pre_bank_idx));
                vlSelf->row_req_bg = (3U & ((IData)(vlSelf->__PVT__refresh_pre_bank_idx) 
                                            >> 2U));
                vlSelf->row_req_cmd = 2U;
                vlSelf->row_req_val = 1U;
            }
        } else if (vlSelf->__PVT__legal_ref) {
            vlSelf->row_req_is_ref = 1U;
            vlSelf->row_req_cmd = 4U;
            vlSelf->row_req_val = 1U;
        }
    } else if (vlSelf->__PVT__cmdq_grant_valid) {
        if ((1U & (~ (((IData)(vlSelf->__PVT__bank_is_open) 
                       >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                           >> 9U)))) 
                      & (vlSelf->__PVT__open_row[(0xfU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__winner 
                                                             >> 9U)))] 
                         == (0x3fffU & (IData)((vlSelf->__PVT__winner 
                                                >> 0xdU)))))))) {
            if ((1U & ((IData)(vlSelf->__PVT__bank_is_open) 
                       >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                           >> 9U)))))) {
                vlSelf->row_req_bank = (3U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 9U)));
                vlSelf->row_req_bg = (3U & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xbU)));
                vlSelf->row_req_cmd = 2U;
            } else {
                vlSelf->row_req_bank = (3U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 9U)));
                vlSelf->row_req_bg = (3U & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xbU)));
                vlSelf->row_req_cmd = 1U;
            }
            vlSelf->row_req_val = 1U;
        }
    }
    vlSelf->col_req_val = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__ref_req)))) {
        if (vlSelf->__PVT__cmdq_grant_valid) {
            if ((((IData)(vlSelf->__PVT__bank_is_open) 
                  >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                      >> 9U)))) & (
                                                   vlSelf->__PVT__open_row
                                                   [
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__winner 
                                                               >> 9U)))] 
                                                   == 
                                                   (0x3fffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__winner 
                                                               >> 0xdU)))))) {
                vlSelf->col_req_axi_id = (0xffU & (IData)(
                                                          (vlSelf->__PVT__winner 
                                                           >> 0x1cU)));
                vlSelf->col_req_wdb_ptr = (0xfU & (IData)(vlSelf->__PVT__winner));
                vlSelf->col_req_addr = (0x1fU & (IData)(
                                                        (vlSelf->__PVT__winner 
                                                         >> 4U)));
                vlSelf->col_req_bank = (3U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 9U)));
                vlSelf->col_req_bg = (3U & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xbU)));
                vlSelf->col_req_cmd = ((1U & (IData)(
                                                     (vlSelf->__PVT__winner 
                                                      >> 0x1bU)))
                                        ? 2U : 1U);
                vlSelf->col_req_val = 1U;
            }
            if ((1U & (~ (((IData)(vlSelf->__PVT__bank_is_open) 
                           >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                               >> 9U)))) 
                          & (vlSelf->__PVT__open_row
                             [(0xfU & (IData)((vlSelf->__PVT__winner 
                                               >> 9U)))] 
                             == (0x3fffU & (IData)(
                                                   (vlSelf->__PVT__winner 
                                                    >> 0xdU)))))))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__bank_is_open) 
                              >> (0xfU & (IData)((vlSelf->__PVT__winner 
                                                  >> 9U))))))) {
                    vlSelf->row_req_addr = (0x3fffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__winner 
                                                       >> 0xdU)));
                }
            }
        }
    }
    vlSelf->__PVT__u_bank_state__DOT__flat_update_bank 
        = (((IData)(vlSelf->row_req_bg) << 2U) | (IData)(vlSelf->row_req_bank));
    vlSelf->__PVT__active_bank_idx = ((IData)(vlSelf->row_req_val)
                                       ? (IData)(vlSelf->__PVT__u_bank_state__DOT__flat_update_bank)
                                       : (((IData)(vlSelf->col_req_bg) 
                                           << 2U) | (IData)(vlSelf->col_req_bank)));
}
