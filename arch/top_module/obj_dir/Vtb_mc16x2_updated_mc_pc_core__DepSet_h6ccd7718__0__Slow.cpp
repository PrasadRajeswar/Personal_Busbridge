// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated_mc_pc_core.h"

VL_ATTR_COLD void Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0\n"); );
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
    // Body
    vlSelf->cmdq_full = (0xffffffffU == vlSelf->__PVT__u_cmdq__DOT__valid_reg);
    vlSelf->wdb_full = (0xffffU == (IData)(vlSelf->__PVT__u_wdb__DOT__valid_reg));
    vlSelf->__PVT__u_rdb__DOT__id_empty = ((IData)(vlSelf->__PVT__u_rdb__DOT__id_rd_ptr) 
                                           == (IData)(vlSelf->__PVT__u_rdb__DOT__id_wr_ptr));
    vlSelf->__PVT__u_rdb__DOT__data_empty = ((IData)(vlSelf->__PVT__u_rdb__DOT__data_rd_ptr) 
                                             == (IData)(vlSelf->__PVT__u_rdb__DOT__data_wr_ptr));
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
    vlSelf->row_req_is_ref = 0U;
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

VL_ATTR_COLD void Vtb_mc16x2_updated_mc_pc_core___ctor_var_reset(Vtb_mc16x2_updated_mc_pc_core* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_mc16x2_updated_mc_pc_core___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->cmd_push_val = VL_RAND_RESET_I(1);
    vlSelf->cmd_push_entry = VL_RAND_RESET_Q(36);
    vlSelf->cmdq_full = VL_RAND_RESET_I(1);
    vlSelf->wdb_push_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->wdb_push_data);
    vlSelf->wdb_push_mask = VL_RAND_RESET_I(32);
    vlSelf->wdb_alloc_ptr = VL_RAND_RESET_I(4);
    vlSelf->wdb_full = VL_RAND_RESET_I(1);
    vlSelf->wdb_raddr = VL_RAND_RESET_I(4);
    vlSelf->wbeat = VL_RAND_RESET_I(3);
    vlSelf->wdb_rdata = VL_RAND_RESET_I(32);
    vlSelf->wdb_rmask = VL_RAND_RESET_I(4);
    vlSelf->wdb_pop_val = VL_RAND_RESET_I(1);
    vlSelf->wdb_pop_ptr = VL_RAND_RESET_I(4);
    vlSelf->dfi_rddata_valid = VL_RAND_RESET_I(1);
    vlSelf->dfi_rddata = VL_RAND_RESET_I(32);
    vlSelf->rdb_valid = VL_RAND_RESET_I(1);
    vlSelf->rdb_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->rdb_data);
    vlSelf->rdb_axi_id = VL_RAND_RESET_I(8);
    vlSelf->row_req_val = VL_RAND_RESET_I(1);
    vlSelf->row_req_is_ref = VL_RAND_RESET_I(1);
    vlSelf->row_req_cmd = VL_RAND_RESET_I(3);
    vlSelf->row_req_addr = VL_RAND_RESET_I(14);
    vlSelf->row_req_bg = VL_RAND_RESET_I(2);
    vlSelf->row_req_bank = VL_RAND_RESET_I(2);
    vlSelf->ch_arb_row_grant = VL_RAND_RESET_I(1);
    vlSelf->col_req_val = VL_RAND_RESET_I(1);
    vlSelf->col_req_cmd = VL_RAND_RESET_I(2);
    vlSelf->col_req_addr = VL_RAND_RESET_I(5);
    vlSelf->col_req_bg = VL_RAND_RESET_I(2);
    vlSelf->col_req_bank = VL_RAND_RESET_I(2);
    vlSelf->col_req_wdb_ptr = VL_RAND_RESET_I(4);
    vlSelf->col_req_axi_id = VL_RAND_RESET_I(8);
    vlSelf->ch_arb_col_grant = VL_RAND_RESET_I(1);
    vlSelf->err_cmdq_overflow = VL_RAND_RESET_I(1);
    vlSelf->err_wdb_overflow = VL_RAND_RESET_I(1);
    vlSelf->err_ref_deadline_miss = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__slot_data[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__slot_legal = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cmdq_grant = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cmdq_grant_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cmdq_grant_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cmdq_arb_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bank_is_open = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__open_row[__Vi0] = VL_RAND_RESET_I(14);
    }
    vlSelf->__PVT__legal_act = VL_RAND_RESET_I(16);
    vlSelf->__PVT__legal_pre = VL_RAND_RESET_I(16);
    vlSelf->__PVT__legal_rd = VL_RAND_RESET_I(16);
    vlSelf->__PVT__legal_wr = VL_RAND_RESET_I(16);
    vlSelf->__PVT__legal_ref = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ref_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ref_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_act = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_pre = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_rd = VL_RAND_RESET_I(1);
    vlSelf->__PVT__issue_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__active_bank_idx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__refresh_pre_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__refresh_pre_bank_idx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__any_bank_open = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__u_cmdq__pop_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__winner = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__b_idx = VL_RAND_RESET_I(4);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__data_buf_ok = VL_RAND_RESET_I(1);
    vlSelf->__PVT__unnamedblk1__DOT__unnamedblk2__DOT__slot_entry = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_cmdq__DOT__entries[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__u_cmdq__DOT__valid_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_cmdq__DOT__free_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_cmdq__DOT__free_found = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_cmdq__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__u_wdb__DOT__data_mem[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_wdb__DOT__mask_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_wdb__DOT__valid_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_wdb__DOT__free_found = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_wdb__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_rdb__DOT__id_fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_rdb__DOT__id_wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_rdb__DOT__id_rd_ptr = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->__PVT__u_rdb__DOT__data_fifo[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_rdb__DOT__ret_id_fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_rdb__DOT__data_wr_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_rdb__DOT__data_rd_ptr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_rdb__DOT__rbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_rdb__DOT__outstanding_cnt = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_rdb__DOT__id_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_rdb__DOT__data_empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_ref_eng__DOT__refi_counter = VL_RAND_RESET_I(13);
    vlSelf->__PVT__u_bank_state__DOT__flat_update_bank = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_bank_state__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rcd[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_ras[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rp[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rc[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_wr[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_timing_check__DOT__cnt_rtp[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_timing_check__DOT__cnt_rrd = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_timing_check__DOT__cnt_ccd = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_timing_check__DOT__cnt_wtr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_timing_check__DOT__cnt_rfc = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_timing_check__DOT__faw_timer[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_timing_check__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->__PVT__u_timing_check__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->__PVT__u_timing_check__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->__PVT__u_timing_check__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__u_timing_check__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_cmdq_arbiter__DOT__wait_ctr[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_cmdq_arbiter__DOT__eligible = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__max_ctr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk1__DOT__priority_seen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_cmdq_arbiter__DOT__unnamedblk3__DOT__i = 0;
}
