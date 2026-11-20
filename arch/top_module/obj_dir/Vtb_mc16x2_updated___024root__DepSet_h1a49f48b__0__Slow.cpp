// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated__Syms.h"
#include "Vtb_mc16x2_updated___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__stl(Vtb_mc16x2_updated___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_triggers__stl(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mc16x2_updated___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mc16x2_updated__ConstPool__TABLE_ha44c4cb2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mc16x2_updated__ConstPool__TABLE_h28328ece_0;
extern const VlWide<256>/*8191:0*/ Vtb_mc16x2_updated__ConstPool__CONST_h4ae14f6a_0;
extern const VlWide<32>/*1023:0*/ Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0;

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___stl_sequent__TOP__0(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____VdfgTmp_hf8ca76d6__0;
    tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____VdfgTmp_hf8ca76d6__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<64>/*2047:0*/ __Vtemp_7;
    VlWide<72>/*2303:0*/ __Vtemp_8;
    VlWide<80>/*2559:0*/ __Vtemp_9;
    VlWide<88>/*2815:0*/ __Vtemp_10;
    VlWide<96>/*3071:0*/ __Vtemp_11;
    VlWide<104>/*3327:0*/ __Vtemp_12;
    VlWide<112>/*3583:0*/ __Vtemp_13;
    VlWide<120>/*3839:0*/ __Vtemp_14;
    VlWide<128>/*4095:0*/ __Vtemp_15;
    VlWide<136>/*4351:0*/ __Vtemp_16;
    VlWide<144>/*4607:0*/ __Vtemp_17;
    VlWide<152>/*4863:0*/ __Vtemp_18;
    VlWide<160>/*5119:0*/ __Vtemp_19;
    VlWide<168>/*5375:0*/ __Vtemp_20;
    VlWide<176>/*5631:0*/ __Vtemp_21;
    VlWide<184>/*5887:0*/ __Vtemp_22;
    VlWide<192>/*6143:0*/ __Vtemp_23;
    VlWide<200>/*6399:0*/ __Vtemp_24;
    VlWide<208>/*6655:0*/ __Vtemp_25;
    VlWide<216>/*6911:0*/ __Vtemp_26;
    VlWide<224>/*7167:0*/ __Vtemp_27;
    VlWide<232>/*7423:0*/ __Vtemp_28;
    VlWide<240>/*7679:0*/ __Vtemp_29;
    VlWide<248>/*7935:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    // Body
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target 
        = (0x1fU & (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                            >> 0x1cU)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[0U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin))][0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[1U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin))][1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[2U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin))][2U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[0U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[1U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[2U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][2U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[3U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][3U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[4U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][4U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[5U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][5U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[6U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][6U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[7U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][7U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[8U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][8U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[9U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem
        [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin))][9U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[0U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin))][0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[1U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin))][1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[2U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin))][2U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_ready = 0U;
    if (((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
         & (6U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state)))) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_ready 
            = (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_ready 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                              >> 0x1cU))))));
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin) 
                   + ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rempty)) 
                      & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_bready))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next 
        = (0x1fU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin) 
                    + ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rempty)) 
                       & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_rready))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rgray_next 
        = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next), 1U) 
                    ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wfull)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awvalid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wfull)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_wvalid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wfull)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arvalid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_wready 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           & (1U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wfull)) 
           & ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
              & (4U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wfull)) 
           & ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
              & (7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))));
    __Vtableidx1 = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__prefer_read) 
                     << 6U) | ((0x20U & ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rempty)) 
                                         << 5U)) | 
                               ((0x10U & ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rempty)) 
                                          << 4U)) | 
                                (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state) 
                                  << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n)))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_awready 
        = Vtb_mc16x2_updated__ConstPool__TABLE_ha44c4cb2_0
        [__Vtableidx1];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_arready 
        = Vtb_mc16x2_updated__ConstPool__TABLE_h28328ece_0
        [__Vtableidx1];
    __Vtemp_7[0U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[1U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[2U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[3U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[4U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[5U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[6U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[7U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_7[8U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[9U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[0xaU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[0xbU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[0xcU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[0xdU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[0xeU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[0xfU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_7[0x10U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[0x11U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[0x12U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[0x13U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[0x14U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[0x15U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[0x16U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[0x17U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_7[0x18U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[0x19U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[0x1aU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[0x1bU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[0x1cU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[0x1dU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[0x1eU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[0x1fU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_7[0x20U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[0x21U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[0x22U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[0x23U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[0x24U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[0x25U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[0x26U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[0x27U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_7[0x28U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[0x29U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[0x2aU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[0x2bU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[0x2cU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[0x2dU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[0x2eU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[0x2fU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_7[0x30U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[0x31U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[0x32U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[0x33U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[0x34U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[0x35U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[0x36U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[0x37U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_7[0x38U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_7[0x39U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_7[0x3aU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_7[0x3bU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_7[0x3cU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_7[0x3dU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_7[0x3eU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_7[0x3fU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    VL_CONCAT_WWW(2304,2048,256, __Vtemp_8, __Vtemp_7, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(2560,2304,256, __Vtemp_9, __Vtemp_8, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(2816,2560,256, __Vtemp_10, __Vtemp_9, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3072,2816,256, __Vtemp_11, __Vtemp_10, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3328,3072,256, __Vtemp_12, __Vtemp_11, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3584,3328,256, __Vtemp_13, __Vtemp_12, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3840,3584,256, __Vtemp_14, __Vtemp_13, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4096,3840,256, __Vtemp_15, __Vtemp_14, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4352,4096,256, __Vtemp_16, __Vtemp_15, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4608,4352,256, __Vtemp_17, __Vtemp_16, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4864,4608,256, __Vtemp_18, __Vtemp_17, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5120,4864,256, __Vtemp_19, __Vtemp_18, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5376,5120,256, __Vtemp_20, __Vtemp_19, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5632,5376,256, __Vtemp_21, __Vtemp_20, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5888,5632,256, __Vtemp_22, __Vtemp_21, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6144,5888,256, __Vtemp_23, __Vtemp_22, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6400,6144,256, __Vtemp_24, __Vtemp_23, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6656,6400,256, __Vtemp_25, __Vtemp_24, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6912,6656,256, __Vtemp_26, __Vtemp_25, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7168,6912,256, __Vtemp_27, __Vtemp_26, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7424,7168,256, __Vtemp_28, __Vtemp_27, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7680,7424,256, __Vtemp_29, __Vtemp_28, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7936,7680,256, __Vtemp_30, __Vtemp_29, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(8192,7936,256, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data, __Vtemp_30, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    __Vtemp_31[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                               [(0xfU 
                                                 & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                               << 0x38U) | (((QData)((IData)(
                                                             vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                             [
                                                             (0xfU 
                                                              & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                [
                                                                (0xfU 
                                                                 & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                   [
                                                                   (0xfU 
                                                                    & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                      [
                                                                      (0xfU 
                                                                       & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                                                      << 0x18U) 
                                                                     | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                         [
                                                                         (0xfU 
                                                                          & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                                                         << 0x10U) 
                                                                        | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                            [
                                                                            (0xfU 
                                                                             & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                                                            << 8U) 
                                                                           | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                           [
                                                                           (0xfU 
                                                                            & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]))))))))));
    __Vtemp_31[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                [(0xfU 
                                                  & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                                << 0x38U) | (((QData)((IData)(
                                                              vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                              [
                                                              (0xfU 
                                                               & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                 [
                                                                 (0xfU 
                                                                  & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                    [
                                                                    (0xfU 
                                                                     & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                       [
                                                                       (0xfU 
                                                                        & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                                                       << 0x18U) 
                                                                      | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                          [
                                                                          (0xfU 
                                                                           & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                                                          << 0x10U) 
                                                                         | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                             [
                                                                             (0xfU 
                                                                              & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                                                             << 8U) 
                                                                            | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                                                            [
                                                                            (0xfU 
                                                                             & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]))))))))) 
                              >> 0x20U));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[0U] 
        = __Vtemp_31[0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[1U] 
        = __Vtemp_31[1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[2U] 
        = ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
            [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
            << 0x18U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                          [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                          << 0x10U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                        << 8U) | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                       [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[3U] 
        = ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
            [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
            << 0x18U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                          [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                          << 0x10U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                        << 8U) | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                       [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[4U] 
        = ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
            [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
            << 0x18U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                          [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                          << 0x10U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                        << 8U) | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                       [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[5U] 
        = ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
            [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
            << 0x18U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                          [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                          << 0x10U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                        << 8U) | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                       [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[6U] 
        = ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
            [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
            << 0x18U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                          [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                          << 0x10U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                        << 8U) | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                       [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[7U] 
        = ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
            [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
            << 0x18U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                          [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                          << 0x10U) | ((vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))] 
                                        << 8U) | vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
                                       [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))])));
    tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____VdfgTmp_hf8ca76d6__0 
        = (1U & (~ ((((IData)((0xffffffffU == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                      << 0x1fU) | (((IData)((0xffffffffU 
                                             == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                    << 0x1eU) | (((IData)(
                                                          (0xffffffffU 
                                                           == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                  << 0x1dU) 
                                                 | (((IData)(
                                                             (0xffffffffU 
                                                              == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                     << 0x1cU) 
                                                    | (((IData)(
                                                                (0xffffffffU 
                                                                 == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                        << 0x1bU) 
                                                       | (((IData)(
                                                                   (0xffffffffU 
                                                                    == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                           << 0x1aU) 
                                                          | (((IData)(
                                                                      (0xffffffffU 
                                                                       == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                              << 0x19U) 
                                                             | (((IData)(
                                                                         (0xffffffffU 
                                                                          == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                 << 0x18U) 
                                                                | (((IData)(
                                                                            (0xffffffffU 
                                                                             == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                    << 0x17U) 
                                                                   | (((IData)(
                                                                               (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                       << 0x16U) 
                                                                      | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                          << 0x15U) 
                                                                         | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                             << 0x14U) 
                                                                            | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x13U) 
                                                                               | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 1U) 
                                                                                | (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)))))))))))))))))))))))))))))))) 
                    >> (0x1fU & (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                         >> 0x1cU))))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_bin) 
                   + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wbin_next 
        = (0x1fU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_bin) 
                    + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wgray_next 
        = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wbin_next), 1U) 
                    ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_bin) 
                   + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next 
        = (0x1fU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin) 
                    + ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rempty)) 
                       & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_wready))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rgray_next 
        = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next), 1U) 
                    ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_bin) 
                   + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next 
        = (0x1fU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_bin) 
                    + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wgray_next 
        = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next), 1U) 
                    ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_write 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rempty)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_awready));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_read 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rempty)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_arready));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_dispatch 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____VdfgTmp_hf8ca76d6__0) 
           & (5U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_dispatch 
        = ((2U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state)) 
           & ((IData)(tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____VdfgTmp_hf8ca76d6__0) 
              & ((~ ((((IData)((0xffffU == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                       << 0x1fU) | (((IData)((0xffffU 
                                              == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                     << 0x1eU) | (((IData)(
                                                           (0xffffU 
                                                            == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                   << 0x1dU) 
                                                  | (((IData)(
                                                              (0xffffU 
                                                               == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                      << 0x1cU) 
                                                     | (((IData)(
                                                                 (0xffffU 
                                                                  == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                         << 0x1bU) 
                                                        | (((IData)(
                                                                    (0xffffU 
                                                                     == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                            << 0x1aU) 
                                                           | (((IData)(
                                                                       (0xffffU 
                                                                        == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                               << 0x19U) 
                                                              | (((IData)(
                                                                          (0xffffU 
                                                                           == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                  << 0x18U) 
                                                                 | (((IData)(
                                                                             (0xffffU 
                                                                              == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                     << 0x17U) 
                                                                    | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                        << 0x16U) 
                                                                       | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                           << 0x15U) 
                                                                          | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                              << 0x14U) 
                                                                             | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 1U) 
                                                                                | (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))))))))))))))))))))))))))))))))) 
                     >> (0x1fU & (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                          >> 0x1cU))))) 
                 & (0U != vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_strobes))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin) 
                   + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_write)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin) 
                   + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_read)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val = 0U;
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val = 0U;
    if (((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
         & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_dispatch))) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
            = (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                              >> 0x1cU))))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
            = (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                              >> 0x1cU))))));
    }
    if (((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
         & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_dispatch))) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
            = (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                              >> 0x1cU))))));
    }
    VL_ASSIGN_W(8192,vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data, Vtb_mc16x2_updated__ConstPool__CONST_h4ae14f6a_0);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[1U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[2U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[3U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[4U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[5U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[6U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[7U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[8U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[9U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0xaU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0xbU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0xcU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0xdU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0xeU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0xfU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x10U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x11U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x12U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x13U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x14U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x15U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x16U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x17U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x18U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x19U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x1aU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x1bU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x1cU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x1dU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x1eU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask[0x1fU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    if (((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
         & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_dispatch))) {
        VL_ASSIGNSEL_WW(8192,256,(0x1fffU & VL_SHIFTL_III(13,32,32, 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                                      >> 0x1cU))), 8U)), vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload);
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                                    >> 0x1cU))), 5U)), vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask, 
                        (~ vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_strobes));
    }
}

extern const VlWide<36>/*1151:0*/ Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0;

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___stl_sequent__TOP__1(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___stl_sequent__TOP__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_refresh 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
            << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h2a5fa10f__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
            << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hb97afee7__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
            << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[1U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[2U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[2U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[3U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[3U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[4U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[4U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[5U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[5U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[6U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[6U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[7U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[7U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[8U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[8U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[9U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[9U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0xaU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0xaU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0xbU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0xbU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0xcU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0xcU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0xdU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0xdU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0xeU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0xeU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0xfU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0xfU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x10U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x10U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x11U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x11U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x12U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x12U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x13U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x13U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x14U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x14U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x15U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x15U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x16U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x16U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x17U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x17U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x18U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x18U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x19U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x19U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x1aU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x1aU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x1bU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x1bU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x1cU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x1cU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x1dU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x1dU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x1eU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x1eU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x1fU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x1fU];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x20U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x20U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x21U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x21U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x22U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x22U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry[0x23U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0[0x23U];
    if (((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
         & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_dispatch))) {
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                  << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                << 0x38U) 
                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                         << 0x2cU) 
                                                        | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                               << 0x24U) 
                                                              | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 4U) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)))))))))))))))))));
        __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                   << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                 << 0x38U) 
                                                | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                    << 0x34U) 
                                                   | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                       << 0x30U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                          << 0x2cU) 
                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                                << 0x24U) 
                                                               | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                                                << 4U) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr)))))))))))))))))) 
                                 >> 0x20U));
        __Vtemp_16[0U] = __Vtemp_1[0U];
        __Vtemp_16[1U] = __Vtemp_1[1U];
        __Vtemp_16[2U] = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                           << 0x1cU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                         << 0x18U) 
                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                            << 0x14U) 
                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                               << 0x10U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                     << 8U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                        << 4U) 
                                                       | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr))))))));
        __Vtemp_16[3U] = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                           << 0x1cU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                         << 0x18U) 
                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                            << 0x14U) 
                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                               << 0x10U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                     << 8U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_alloc_ptr) 
                                                        << 4U) 
                                                       | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_alloc_ptr))))))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____Vlvbound_h15b92df8__0 
            = (((QData)((IData)((0x800000U | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id) 
                                               << 0x18U) 
                                              | (0x7fffffU 
                                                 & (IData)(
                                                           (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                            >> 5U))))))) 
                << 4U) | (QData)((IData)((0xfU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(7,32,32, 
                                                                     (0x1fU 
                                                                      & (IData)(
                                                                                (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                                                >> 0x1cU))), 2U)))
                                                    ? 0U
                                                    : 
                                                   (__Vtemp_16[
                                                    (((IData)(3U) 
                                                      + 
                                                      (0x7fU 
                                                       & VL_SHIFTL_III(7,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                                                >> 0x1cU))), 2U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                                                >> 0x1cU))), 2U))))) 
                                                  | (__Vtemp_16[
                                                     (3U 
                                                      & (VL_SHIFTL_III(7,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                                                >> 0x1cU))), 2U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(7,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(
                                                                                (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                                                >> 0x1cU))), 2U))))))));
        if ((0x47fU >= (0x7ffU & ((IData)(0x24U) * 
                                  (0x1fU & (IData)(
                                                   (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                    >> 0x1cU))))))) {
            VL_ASSIGNSEL_WQ(1152,36,(0x7ffU & ((IData)(0x24U) 
                                               * (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                             >> 0x1cU))))), vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____Vlvbound_h15b92df8__0);
        }
    }
    if (((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
         & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_dispatch))) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____Vlvbound_h15b92df8__1 
            = ((QData)((IData)((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id) 
                                 << 0x18U) | (0x7fffffU 
                                              & (IData)(
                                                        (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                         >> 5U)))))) 
               << 4U);
        if ((0x47fU >= (0x7ffU & ((IData)(0x24U) * 
                                  (0x1fU & (IData)(
                                                   (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                    >> 0x1cU))))))) {
            VL_ASSIGNSEL_WQ(1152,36,(0x7ffU & ((IData)(0x24U) 
                                               * (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                             >> 0x1cU))))), vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____Vlvbound_h15b92df8__1);
        }
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd 
        = (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
            << 0x3eU) | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                          << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                                         << 0x38U) 
                                        | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                            << 0x36U) 
                                           | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                                               << 0x34U) 
                                              | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                                        << 0x2eU) 
                                                       | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                                                    << 0x26U) 
                                                                   | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                                                                       << 0x24U) 
                                                                      | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                                                          << 0x22U) 
                                                                         | (((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd) 
                                                                                << 2U) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))))))))))))))))))))))))))))))))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h2a5fa10f__0) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hb97afee7__0) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
}

VL_ATTR_COLD void Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated___024root___nba_comb__TOP__1(Vtb_mc16x2_updated___024root* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__1(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__1(Vtb_mc16x2_updated_mc_pc_core* vlSelf);

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_stl(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mc16x2_updated___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
        vlSelf->__Vm_traceActivity[9U] = 1U;
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___stl_sequent__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated___024root___stl_sequent__TOP__1(vlSelf);
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb));
        Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated___024root___nba_comb__TOP__1(vlSelf);
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__1((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___nba_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__1((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
    }
}
