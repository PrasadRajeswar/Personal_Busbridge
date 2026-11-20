// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated___024root.h"

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_static__TOP(Vtb_mc16x2_updated___024root* vlSelf);

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_static(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_static\n"); );
    // Body
    Vtb_mc16x2_updated___024root___eval_static__TOP(vlSelf);
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
}

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_static__TOP(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_mc16x2_updated__DOT__test_count = 0U;
    vlSelf->tb_mc16x2_updated__DOT__pass_count = 0U;
    vlSelf->tb_mc16x2_updated__DOT__fail_count = 0U;
}

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_final(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__stl(Vtb_mc16x2_updated___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_mc16x2_updated___024root___eval_phase__stl(Vtb_mc16x2_updated___024root* vlSelf);

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_settle(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_mc16x2_updated___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_mc16x2_updated.sv", 18, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_mc16x2_updated___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__stl(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_triggers__stl(Vtb_mc16x2_updated___024root* vlSelf);
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___eval_stl(Vtb_mc16x2_updated___024root* vlSelf);

VL_ATTR_COLD bool Vtb_mc16x2_updated___024root___eval_phase__stl(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_mc16x2_updated___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_mc16x2_updated___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__act(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_mc16x2_updated.dfi_clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_mc16x2_updated.aclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge tb_mc16x2_updated.dfi_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge tb_mc16x2_updated.aclk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__nba(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_mc16x2_updated.dfi_clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_mc16x2_updated.aclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge tb_mc16x2_updated.dfi_clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge tb_mc16x2_updated.aclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mc16x2_updated___024root___ctor_var_reset(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_mc16x2_updated__DOT__aclk = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dfi_clk = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__aresetn = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awid = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awaddr = VL_RAND_RESET_Q(40);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awqos = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wstrb = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arid = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_araddr = VL_RAND_RESET_Q(40);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arqos = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_rready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1024, vlSelf->tb_mc16x2_updated__DOT__dfi_rddata);
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__test_count = 0;
    vlSelf->tb_mc16x2_updated__DOT__pass_count = 0;
    vlSelf->tb_mc16x2_updated__DOT__fail_count = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 8; ++__Vi2) {
                vlSelf->tb_mc16x2_updated__DOT__hbm_mem[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_awready = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_wready = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_arready = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wr_done = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_ready = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(1152, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_entry);
    VL_RAND_RESET_W(8192, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_data);
    VL_RAND_RESET_W(8192, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data);
    VL_RAND_RESET_W(1024, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_mask);
    VL_RAND_RESET_W(256, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_refresh = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_valid = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_pc1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_pc0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_rddata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en = VL_RAND_RESET_I(2);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata = VL_RAND_RESET_Q(64);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col = VL_RAND_RESET_I(12);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row = VL_RAND_RESET_I(22);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row_val = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hb97afee7__0 = 0;
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h2a5fa10f__0 = 0;
    VL_RAND_RESET_W(73, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata);
    VL_RAND_RESET_W(289, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata);
    VL_RAND_RESET_W(73, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(73, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem[__Vi0]);
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w1 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w2 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r1 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r2 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wfull = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rempty = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wbin_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wgray_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rbin_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rgray_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__w_do = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(289, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vi0]);
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_bin = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wfull = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rempty = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wbin_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wgray_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rgray_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__w_do = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(73, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem[__Vi0]);
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w1 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w2 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r1 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r2 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wfull = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rempty = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wgray_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rbin_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rgray_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__w_do = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem[__Vi0] = VL_RAND_RESET_I(10);
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_bin = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w1 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w2 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r1 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r2 = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wfull = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rempty = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wgray_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rgray_next = VL_RAND_RESET_I(4);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__w_do = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(267, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vi0]);
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_bin = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r1 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r2 = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wfull = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rempty = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wgray_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rgray_next = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__w_do = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id = VL_RAND_RESET_I(8);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr = VL_RAND_RESET_Q(40);
    VL_RAND_RESET_W(256, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_strobes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target = VL_RAND_RESET_I(5);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__prefer_read = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_write = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_read = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_dispatch = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_dispatch = VL_RAND_RESET_I(1);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____Vlvbound_h15b92df8__0 = VL_RAND_RESET_Q(36);
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____Vlvbound_h15b92df8__1 = VL_RAND_RESET_Q(36);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__id = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__row = VL_RAND_RESET_I(14);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bg = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bank = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__col = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(256, vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wstrb_32 = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__addr = VL_RAND_RESET_Q(40);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_seen = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wr_col_seen = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_cycles = 0;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats = 0;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__id = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bg = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bank = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__col = VL_RAND_RESET_I(5);
    VL_RAND_RESET_W(256, vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__addr = VL_RAND_RESET_Q(40);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__rd_col_seen = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__act_cycles = 0;
    VL_RAND_RESET_W(256, vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata);
    vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__dfi_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__aclk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 14; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
