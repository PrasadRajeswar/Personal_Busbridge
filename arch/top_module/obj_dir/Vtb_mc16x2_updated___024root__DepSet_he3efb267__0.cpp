// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated___024root.h"

VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__0(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__1(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__3(Vtb_mc16x2_updated___024root* vlSelf);

void Vtb_mc16x2_updated___024root___eval_initial(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__dfi_clk__0 
        = vlSelf->tb_mc16x2_updated__DOT__dfi_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__aclk__0 
        = vlSelf->tb_mc16x2_updated__DOT__aclk;
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__0(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb_mc16x2_updated__DOT__aclk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           112);
        vlSelf->tb_mc16x2_updated__DOT__aclk = (1U 
                                                & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__aclk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__1(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->tb_mc16x2_updated__DOT__dfi_clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           118);
        vlSelf->tb_mc16x2_updated__DOT__dfi_clk = (1U 
                                                   & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dfi_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__2(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk10__DOT__r_timeout;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk10__DOT__r_timeout = 0;
    // Body
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk10__DOT__r_timeout = 0U;
    while (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rempty) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk10__DOT__r_timeout))) {
        co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.aclk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           641);
        __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk10__DOT__r_timeout 
            = ((IData)(1U) + __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk10__DOT__r_timeout);
    }
    if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rempty) {
        VL_WRITEF("  [FATAL] TIMEOUT: No AXI RVALID response received!\n");
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
    } else {
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[0U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][1U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][0U] 
                             >> 3U));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[1U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][2U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][1U] 
                             >> 3U));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[2U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][3U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][2U] 
                             >> 3U));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[3U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][4U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][3U] 
                             >> 3U));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[4U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][5U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][4U] 
                             >> 3U));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[5U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][6U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][5U] 
                             >> 3U));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[6U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][7U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][6U] 
                             >> 3U));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[7U] 
            = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][8U] 
                << 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                             [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][7U] 
                             >> 3U));
        VL_WRITEF("[%0t] [AXI_R  ] R Read Data Handshake: RID=0x%02x, RRESP=0b%02b, RLAST=%0#\n  Captured 256-bit RDATA: 0x%064x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,8,(0xffU 
                                                  & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                                                     [
                                                     (0xfU 
                                                      & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][8U] 
                                                     >> 3U)),
                  2,(3U & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                           [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][0U] 
                           >> 1U)),1,(1U & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                                      [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][0U]),
                  256,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata.data());
        if (VL_UNLIKELY(((0xffU & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                                   [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][8U] 
                                   >> 3U)) != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__id)))) {
            VL_WRITEF("  [ERROR] Response RID mismatch: Expected 0x%02x, Got 0x%02x\n",
                      8,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__id,
                      8,(0xffU & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                                  [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][8U] 
                                  >> 3U)));
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
        }
        if (VL_UNLIKELY((0U != (3U & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                                      [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][0U] 
                                      >> 1U))))) {
            VL_WRITEF("  [ERROR] Response RRESP error: Expected OKAY (00), Got %02b\n",
                      2,(3U & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                               [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][0U] 
                               >> 1U)));
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
        }
        if (VL_UNLIKELY((1U & (~ vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                               [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][0U])))) {
            VL_WRITEF("  [ERROR] Response RLAST mismatch: Expected 1, Got %0b\n",
                      1,(1U & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem
                         [(0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin))][0U]));
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
        }
        if ((0U != ((((((((vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[0U] 
                           ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[0U]) 
                          | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[1U] 
                             ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[1U])) 
                         | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[2U] 
                            ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[2U])) 
                        | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[3U] 
                           ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[3U])) 
                       | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[4U] 
                          ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[4U])) 
                      | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[5U] 
                         ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[5U])) 
                     | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[6U] 
                        ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[6U])) 
                    | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[7U] 
                       ^ vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[7U])))) {
            VL_WRITEF("  [ERROR] 256-bit RDATA MISMATCH!\n    Expected: 0x%064x\n    Got:      0x%064x\n",
                      256,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256.data(),
                      256,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata.data());
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
        } else {
            VL_WRITEF("  [SUCCESS] All 256 bits matched perfectly in a single AXI clock cycle!\n");
        }
    }
    vlSelf->__Vfork_2__sync.done("tb_mc16x2_updated.sv", 
                                 638);
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__timeout;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__timeout = 0;
    CData/*0:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__act_started;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__act_started = 0;
    IData/*21:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r = 0;
    SData/*11:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c = 0;
    VlWide<11>/*351:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_27;
    // Body
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__timeout = 0U;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__act_started = 0U;
    while (((~ (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__rd_col_seen)) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__timeout))) {
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           577);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__timeout 
            = ((IData)(1U) + __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__timeout);
        if (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__act_started) {
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__act_cycles 
                = ((IData)(1U) + vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__act_cycles);
        }
        if ((1U & ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row_val) 
                     << 0xfU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                  << 0xeU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                              << 8U) 
                                                             | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row_val)))))))))))))))) 
                   >> (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)))) {
            __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row)) 
                                       << 0x16U) | (QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row))));
            __Vtemp_16[1U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0xcU) | (IData)((
                                                   (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row)) 
                                                     << 0x16U) 
                                                    | (QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row))) 
                                                   >> 0x20U)));
            __Vtemp_16[2U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x18U) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 2U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0x14U)));
            __Vtemp_16[3U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0xeU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row 
                                           >> 8U));
            __Vtemp_16[4U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x1aU) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 4U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0x12U)));
            __Vtemp_16[5U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x10U) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row 
                                            >> 6U));
            __Vtemp_16[6U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x1cU) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 6U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0x10U)));
            __Vtemp_16[7U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x12U) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row 
                                            >> 4U));
            __Vtemp_16[8U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x1eU) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 8U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0xeU)));
            __Vtemp_16[9U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x14U) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row 
                                            >> 2U));
            __Vtemp_16[0xaU] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row 
                                 << 0xaU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row 
                                             >> 0xcU));
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r 
                = ((0x15fU >= (0x1ffU & ((IData)(0x16U) 
                                         * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel))))
                    ? (0x3fffffU & (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel))))
                                      ? 0U : (__Vtemp_16[
                                              (((IData)(0x15U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)))))) 
                                    | (__Vtemp_16[(0xfU 
                                                   & (((IData)(0x16U) 
                                                       * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)) 
                                                      >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel))))))
                    : 0U);
            if (VL_UNLIKELY((1U == (7U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r 
                                          >> 0x12U))))) {
                __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__act_started = 1U;
                VL_WRITEF("[%0t] [DFI_ROW] ACTIVATE on Ch %0#: PC_SEL=%0#, BG=%0#, BA=%0#, ROW=0x%04x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,4,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel),
                          1,(1U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r 
                                   >> 0x15U)),2,(3U 
                                                 & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r 
                                                    >> 0x10U)),
                          2,(3U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r 
                                   >> 0xeU)),14,(0x3fffU 
                                                 & __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk7__DOT__r));
            }
        }
        if ((1U & ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col_val) 
                     << 0xfU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                  << 0xeU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                              << 8U) 
                                                             | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col_val)))))))))))))))) 
                   >> (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)))) {
            __Vtemp_27[0U] = (IData)((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col)) 
                                       << 0x30U) | 
                                      (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col)) 
                                        << 0x24U) | 
                                       (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col)) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col) 
                                                            << 0xcU) 
                                                           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col))))))));
            __Vtemp_27[1U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x1cU) | (IData)(
                                                   ((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col)) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col)) 
                                                            << 0x18U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col) 
                                                                               << 0xcU) 
                                                                              | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col))))))) 
                                                    >> 0x20U)));
            __Vtemp_27[2U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x14U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 8U) 
                                            | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col) 
                                               >> 4U)));
            __Vtemp_27[3U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x18U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 0xcU) 
                                            | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col)));
            __Vtemp_27[4U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x1cU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col) 
                                                << 4U) 
                                               | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col) 
                                                  >> 8U))));
            __Vtemp_27[5U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x14U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 8U) 
                                            | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col) 
                                               >> 4U)));
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c 
                = ((0xbfU >= (0xffU & ((IData)(0xcU) 
                                       * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel))))
                    ? (0xfffU & (((0U == (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel))))
                                   ? 0U : (__Vtemp_27[
                                           (((IData)(0xbU) 
                                             + (0xffU 
                                                & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)))))) 
                                 | (__Vtemp_27[(7U 
                                                & (((IData)(0xcU) 
                                                    * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel)) 
                                                   >> 5U))] 
                                    >> (0x1fU & ((IData)(0xcU) 
                                                 * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel))))))
                    : 0U);
            if (VL_UNLIKELY((1U == (3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c) 
                                          >> 9U))))) {
                vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__rd_col_seen = 1U;
                VL_WRITEF("[%0t] [DFI_COL] READ Command on Ch %0#: PC_SEL=%0#, BG=%0#, BA=%0#, COL=0x%02x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,4,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel),
                          1,(1U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c) 
                                   >> 0xbU)),2,(3U 
                                                & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c) 
                                                   >> 7U)),
                          2,(3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c)));
                if (VL_UNLIKELY((((((1U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c) 
                                           >> 0xbU)) 
                                    != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc)) 
                                   | ((3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c) 
                                             >> 7U)) 
                                      != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bg))) 
                                  | ((3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c) 
                                            >> 5U)) 
                                     != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bank))) 
                                 | ((0x1fU & (IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__unnamedblk6__DOT__unnamedblk8__DOT__c)) 
                                    != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__col))))) {
                    VL_WRITEF("  [ERROR] DFI Column parameters mismatch!\n");
                    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
                }
            }
        }
    }
    if (VL_UNLIKELY(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__rd_col_seen)) {
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           612);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           612);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           612);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           612);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VL_WRITEF("[%0t] [PHY_MODEL] Starting 8-cycle BL8 DFI Read Data Return...\n",
                  64,VL_TIME_UNITED_Q(1000),-9);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [0U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 0/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [0U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [1U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 1/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [1U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [2U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 2/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [2U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [3U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 3/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [3U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [4U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 4/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [4U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [5U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 5/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [5U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [6U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 6/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [6U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           618);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           619);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                                      + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))));
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 
                        vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                        [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                        [7U]);
        VL_WRITEF("[%0t] [DFI_RD_STREAM] Beat 7/7: RdData=0x%08x, Valid=1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__hbm_mem
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel]
                  [vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc]
                  [7U]);
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           627);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        co_await vlSelf->__VdlySched.delay(0x32ULL, 
                                           nullptr, 
                                           "tb_mc16x2_updated.sv", 
                                           628);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
            = ((~ ((IData)(1U) << (0x1fU & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 1U) 
                                            + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc))))) 
               & vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid);
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel), 6U) 
                                           + (0x3fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc), 5U)))), vlSelf->tb_mc16x2_updated__DOT__dfi_rddata, 0U);
        VL_WRITEF("[%0t] [PHY_MODEL] 8-cycle BL8 DFI Read Data Return Complete.\n",
                  64,VL_TIME_UNITED_Q(1000),-9);
    } else {
        VL_WRITEF("  [FATAL] TIMEOUT: No Column READ command seen on DFI!\n");
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
    }
    vlSelf->__Vfork_2__sync.done("tb_mc16x2_updated.sv", 
                                 572);
    vlSelf->__Vm_traceActivity[4U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0\n"); );
    // Body
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       548);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_mc16x2_updated.sv", 
                                       549);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arid = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__id;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_araddr = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__addr;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arlen = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arsize = 5U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arburst = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arlock = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arqos = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arcache = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arprot = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arvalid = 1U;
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       561);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    while (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wfull) {
        co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.aclk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           561);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_mc16x2_updated.sv", 
                                       564);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arvalid = 0U;
    VL_WRITEF("[%0t] [AXI_AR] AR Handshake Complete: ID=0x%02x, Addr=0x%010x\n",
              64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__id),
              40,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__addr);
    vlSelf->__Vfork_2__sync.done("tb_mc16x2_updated.sv", 
                                 547);
    vlSelf->__Vm_traceActivity[5U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__2(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__2\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk5__DOT__b_timeout;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk5__DOT__b_timeout = 0;
    // Body
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk5__DOT__b_timeout = 0U;
    while (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rempty) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk5__DOT__b_timeout))) {
        co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.aclk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           458);
        __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk5__DOT__b_timeout 
            = ((IData)(1U) + __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk5__DOT__b_timeout);
    }
    if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rempty) {
        VL_WRITEF("  [FATAL] TIMEOUT: No AXI BVALID response received!\n");
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
    } else {
        VL_WRITEF("[%0t] [AXI_B  ] B Response Received: BID=0x%02x, BRESP=0b%02b\n",
                  64,VL_TIME_UNITED_Q(1000),-9,8,(0xffU 
                                                  & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem
                                                     [
                                                     (7U 
                                                      & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin))] 
                                                     >> 2U)),
                  2,(3U & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem
                     [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin))]));
        if (VL_UNLIKELY(((0xffU & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem
                                   [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin))] 
                                   >> 2U)) != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__id)))) {
            VL_WRITEF("  [ERROR] Response BID mismatch: Expected 0x%02x, Got 0x%02x\n",
                      8,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__id,
                      8,(0xffU & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem
                                  [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin))] 
                                  >> 2U)));
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
        }
        if (VL_UNLIKELY((0U != (3U & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem
                                [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin))])))) {
            VL_WRITEF("  [ERROR] Response BRESP error: Expected OKAY (00), Got %02b\n",
                      2,(3U & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem
                         [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin))]));
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
        }
    }
    vlSelf->__Vfork_1__sync.done("tb_mc16x2_updated.sv", 
                                 455);
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__timeout;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__timeout = 0;
    CData/*0:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__act_started;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__act_started = 0;
    IData/*21:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r = 0;
    SData/*11:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c = 0;
    IData/*31:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data = 0;
    CData/*3:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_mask;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_mask = 0;
    VlUnpacked<IData/*31:0*/, 8> __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__captured_words;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__captured_words[__Vi0] = 0;
    }
    VlUnpacked<CData/*3:0*/, 8> __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__captured_masks;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__captured_masks[__Vi0] = 0;
    }
    VlWide<11>/*351:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_27;
    VlWide<32>/*1023:0*/ __Vtemp_42;
    VlWide<4>/*127:0*/ __Vtemp_50;
    // Body
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__timeout = 0U;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__act_started = 0U;
    while ((VL_GTS_III(32, 8U, vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats) 
            & VL_GTS_III(32, 0xbb8U, __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__timeout))) {
        co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           375);
        __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__timeout 
            = ((IData)(1U) + __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__timeout);
        if (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__act_started) {
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_cycles 
                = ((IData)(1U) + vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_cycles);
        }
        if ((1U & ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row_val) 
                     << 0xfU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                  << 0xeU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                              << 8U) 
                                                             | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row_val) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row_val)))))))))))))))) 
                   >> (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)))) {
            __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row)) 
                                       << 0x16U) | (QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row))));
            __Vtemp_16[1U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0xcU) | (IData)((
                                                   (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row)) 
                                                     << 0x16U) 
                                                    | (QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row))) 
                                                   >> 0x20U)));
            __Vtemp_16[2U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x18U) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 2U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0x14U)));
            __Vtemp_16[3U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0xeU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row 
                                           >> 8U));
            __Vtemp_16[4U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x1aU) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 4U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0x12U)));
            __Vtemp_16[5U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x10U) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row 
                                            >> 6U));
            __Vtemp_16[6U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x1cU) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 6U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0x10U)));
            __Vtemp_16[7U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x12U) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row 
                                            >> 4U));
            __Vtemp_16[8U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x1eU) | ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row 
                                             << 8U) 
                                            | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row 
                                               >> 0xeU)));
            __Vtemp_16[9U] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row 
                               << 0x14U) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row 
                                            >> 2U));
            __Vtemp_16[0xaU] = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row 
                                 << 0xaU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row 
                                             >> 0xcU));
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                = ((0x15fU >= (0x1ffU & ((IData)(0x16U) 
                                         * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel))))
                    ? (0x3fffffU & (((0U == (0x1fU 
                                             & ((IData)(0x16U) 
                                                * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel))))
                                      ? 0U : (__Vtemp_16[
                                              (((IData)(0x15U) 
                                                + (0x1ffU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)))))) 
                                    | (__Vtemp_16[(0xfU 
                                                   & (((IData)(0x16U) 
                                                       * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)) 
                                                      >> 5U))] 
                                       >> (0x1fU & 
                                           ((IData)(0x16U) 
                                            * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel))))))
                    : 0U);
            if (VL_UNLIKELY((1U == (7U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                                          >> 0x12U))))) {
                vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_seen = 1U;
                __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__act_started = 1U;
                VL_WRITEF("[%0t] [DFI_ROW] ACTIVATE on Ch %0#: PC_SEL=%0#, BG=%0#, BA=%0#, ROW=0x%04x\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,4,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel),
                          1,(1U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                                   >> 0x15U)),2,(3U 
                                                 & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                                                    >> 0x10U)),
                          2,(3U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                                   >> 0xeU)),14,(0x3fffU 
                                                 & __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r));
                if (VL_UNLIKELY((((((1U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                                           >> 0x15U)) 
                                    != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc)) 
                                   | ((3U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                                             >> 0x10U)) 
                                      != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bg))) 
                                  | ((3U & (__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r 
                                            >> 0xeU)) 
                                     != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bank))) 
                                 | ((0x3fffU & __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk2__DOT__r) 
                                    != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__row))))) {
                    VL_WRITEF("  [ERROR] DFI Row parameters mismatch!\n");
                    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
                }
            }
        }
        if ((1U & ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col_val) 
                     << 0xfU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                  << 0xeU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                              << 8U) 
                                                             | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col_val) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col_val)))))))))))))))) 
                   >> (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)))) {
            __Vtemp_27[0U] = (IData)((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col)) 
                                       << 0x30U) | 
                                      (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col)) 
                                        << 0x24U) | 
                                       (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col)) 
                                         << 0x18U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col) 
                                                            << 0xcU) 
                                                           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col))))))));
            __Vtemp_27[1U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x1cU) | (IData)(
                                                   ((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col)) 
                                                      << 0x30U) 
                                                     | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col)) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col)) 
                                                            << 0x18U) 
                                                           | (QData)((IData)(
                                                                             (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col) 
                                                                               << 0xcU) 
                                                                              | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col))))))) 
                                                    >> 0x20U)));
            __Vtemp_27[2U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x14U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 8U) 
                                            | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col) 
                                               >> 4U)));
            __Vtemp_27[3U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x18U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 0xcU) 
                                            | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col)));
            __Vtemp_27[4U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x1cU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col) 
                                                << 4U) 
                                               | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col) 
                                                  >> 8U))));
            __Vtemp_27[5U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col) 
                               << 0x14U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col) 
                                             << 8U) 
                                            | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col) 
                                               >> 4U)));
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c 
                = ((0xbfU >= (0xffU & ((IData)(0xcU) 
                                       * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel))))
                    ? (0xfffU & (((0U == (0x1fU & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel))))
                                   ? 0U : (__Vtemp_27[
                                           (((IData)(0xbU) 
                                             + (0xffU 
                                                & ((IData)(0xcU) 
                                                   * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0xcU) 
                                                     * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)))))) 
                                 | (__Vtemp_27[(7U 
                                                & (((IData)(0xcU) 
                                                    * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel)) 
                                                   >> 5U))] 
                                    >> (0x1fU & ((IData)(0xcU) 
                                                 * (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel))))))
                    : 0U);
            if (VL_UNLIKELY((2U == (3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c) 
                                          >> 9U))))) {
                vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wr_col_seen = 1U;
                VL_WRITEF("[%0t] [DFI_COL] WRITE Command on Ch %0#: PC_SEL=%0#, BG=%0#, BA=%0#, COL=0x%02x (tRCD = %0d cycles)\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,4,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel),
                          1,(1U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c) 
                                   >> 0xbU)),2,(3U 
                                                & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c) 
                                                   >> 7U)),
                          2,(3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c)),
                          32,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_cycles);
                if (VL_UNLIKELY((((((1U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c) 
                                           >> 0xbU)) 
                                    != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc)) 
                                   | ((3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c) 
                                             >> 7U)) 
                                      != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bg))) 
                                  | ((3U & ((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c) 
                                            >> 5U)) 
                                     != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bank))) 
                                 | ((0x1fU & (IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk3__DOT__c)) 
                                    != (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__col))))) {
                    VL_WRITEF("  [ERROR] DFI Column parameters mismatch!\n");
                    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
                }
            }
        }
        if (VL_UNLIKELY((1U & ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                 << 0x1eU) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                               << 0x1cU) 
                                              | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                  << 0x1aU) 
                                                 | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                        << 0x16U) 
                                                       | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                              << 0x12U) 
                                                             | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                 << 0x10U) 
                                                                | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                    << 0xeU) 
                                                                   | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                       << 0xcU) 
                                                                      | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                          << 0xaU) 
                                                                         | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                             << 8U) 
                                                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 6U) 
                                                                               | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en)))))))))))))))) 
                               >> (0x1fU & (VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 1U) 
                                            + (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc))))))) {
            __Vtemp_42[0U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[1U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                      >> 0x20U));
            __Vtemp_42[2U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[3U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                      >> 0x20U));
            __Vtemp_42[4U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[5U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                      >> 0x20U));
            __Vtemp_42[6U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[7U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                      >> 0x20U));
            __Vtemp_42[8U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[9U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                      >> 0x20U));
            __Vtemp_42[0xaU] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0xbU] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                        >> 0x20U));
            __Vtemp_42[0xcU] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0xdU] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                        >> 0x20U));
            __Vtemp_42[0xeU] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0xfU] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                        >> 0x20U));
            __Vtemp_42[0x10U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x11U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtemp_42[0x12U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x13U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtemp_42[0x14U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x15U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtemp_42[0x16U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x17U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtemp_42[0x18U] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x19U] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtemp_42[0x1aU] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x1bU] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtemp_42[0x1cU] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x1dU] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtemp_42[0x1eU] = (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata);
            __Vtemp_42[0x1fU] = (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata 
                                         >> 0x20U));
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data 
                = (((0U == (0x1fU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 6U) 
                                     + (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 5U)))))
                     ? 0U : (__Vtemp_42[(((IData)(0x1fU) 
                                          + (0x3ffU 
                                             & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 6U) 
                                                + (0x3fU 
                                                   & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 5U))))) 
                                         >> 5U)] << 
                             ((IData)(0x20U) - (0x1fU 
                                                & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 6U) 
                                                   + 
                                                   (0x3fU 
                                                    & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 5U))))))) 
                   | (__Vtemp_42[(0x1fU & ((VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 6U) 
                                            + (0x3fU 
                                               & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 5U))) 
                                           >> 5U))] 
                      >> (0x1fU & (VL_SHIFTL_III(10,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 6U) 
                                   + (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 5U))))));
            __Vtemp_50[0U] = (IData)((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                       << 0x38U) | 
                                      (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                        << 0x30U) | 
                                       (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                         << 0x28U) 
                                        | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)))))))))));
            __Vtemp_50[1U] = (IData)(((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                        << 0x38U) | 
                                       (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                         << 0x30U) 
                                        | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_mask)))))))))) 
                                      >> 0x20U));
            __Vtemp_50[2U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                               << 0x18U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                << 8U) 
                                               | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_mask))));
            __Vtemp_50[3U] = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                               << 0x18U) | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_mask) 
                                                << 8U) 
                                               | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_mask))));
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_mask 
                = (0xfU & (((0U == (0x1fU & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 3U) 
                                             + (7U 
                                                & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 2U)))))
                             ? 0U : (__Vtemp_50[(((IData)(3U) 
                                                  + 
                                                  (0x7fU 
                                                   & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 3U) 
                                                      + 
                                                      (7U 
                                                       & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 2U))))) 
                                                 >> 5U)] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 3U) 
                                             + (7U 
                                                & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 2U))))))) 
                           | (__Vtemp_50[(3U & ((VL_SHIFTL_III(7,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 3U) 
                                                 + 
                                                 (7U 
                                                  & VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 2U))) 
                                                >> 5U))] 
                              >> (0x1fU & (VL_SHIFTL_III(7,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel), 3U) 
                                           + (7U & 
                                              VL_SHIFTL_III(3,32,32, (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc), 2U)))))));
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__captured_words[(7U 
                                                                                & vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats)] 
                = __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data;
            __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__captured_masks[(7U 
                                                                                & vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats)] 
                = __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_mask;
            vlSelf->tb_mc16x2_updated__DOT__hbm_mem[vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel][vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc][(7U 
                                                                                & vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats)] 
                = __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data;
            VL_WRITEF("[%0t] [DFI_STREAM] Beat %0d/7: WrData=0x%08x, Mask=0x%01x, WrEn=1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      32,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats,
                      32,__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data,
                      4,(IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_mask));
            if (VL_UNLIKELY((__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data 
                             != (((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats)))
                                   ? 0U : (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[
                                           (((IData)(0x1fU) 
                                             + (0xffU 
                                                & VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats))))) 
                                 | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[
                                    (7U & (VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats) 
                                           >> 5U))] 
                                    >> (0x1fU & VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats))))))) {
                VL_WRITEF("  [ERROR] Beat %0d Data MISMATCH: Expected 0x%08x, Got 0x%08x\n",
                          32,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats,
                          32,(((0U == (0x1fU & VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats)))
                                ? 0U : (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[
                                        (((IData)(0x1fU) 
                                          + (0xffU 
                                             & VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats))))) 
                              | (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[
                                 (7U & (VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats) 
                                        >> 5U))] >> 
                                 (0x1fU & VL_MULS_III(32, (IData)(0x20U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats)))),
                          32,__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_data);
                vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
            }
            if (VL_UNLIKELY(((IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_mask) 
                             != (0xfU & (~ (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wstrb_32 
                                            >> (0x1fU 
                                                & VL_MULS_III(32, (IData)(4U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats)))))))) {
                VL_WRITEF("  [ERROR] Beat %0d Mask MISMATCH: Expected 0x%01x, Got 0x%01x\n",
                          32,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats,
                          4,(0xfU & (~ (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wstrb_32 
                                        >> (0x1fU & 
                                            VL_MULS_III(32, (IData)(4U), vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats))))),
                          4,(IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__unnamedblk1__DOT__unnamedblk4__DOT__beat_mask));
                vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
            }
            vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats 
                = ((IData)(1U) + vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats);
        }
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_seen))))) {
        VL_WRITEF("  [FATAL] TIMEOUT: No ACTIVATE command seen!\n");
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wr_col_seen))))) {
        VL_WRITEF("  [FATAL] TIMEOUT: No Column WRITE command seen!\n");
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
    }
    if (VL_UNLIKELY(VL_GTS_III(32, 8U, vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats))) {
        VL_WRITEF("  [FATAL] INCOMPLETE STREAM: Only %0d of 8 beats received!\n",
                  32,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats);
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
    }
    vlSelf->__Vfork_1__sync.done("tb_mc16x2_updated.sv", 
                                 370);
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0\n"); );
    // Body
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       332);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_mc16x2_updated.sv", 
                                       333);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awid = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__id;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awaddr = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__addr;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awlen = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awsize = 5U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awburst = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awlock = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awqos = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awcache = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awprot = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awvalid = 1U;
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       345);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    while (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wfull) {
        co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.aclk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           345);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_mc16x2_updated.sv", 
                                       348);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awvalid = 0U;
    VL_WRITEF("[%0t] [AXI_AW] AW Handshake Complete: ID=0x%02x, Addr=0x%010x\n",
              64,VL_TIME_UNITED_Q(1000),-9,8,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__id),
              40,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__addr);
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[0U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[0U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[1U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[1U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[2U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[2U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[3U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[3U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[4U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[4U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[5U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[5U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[6U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[6U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[7U] 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[7U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wstrb = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wstrb_32;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wlast = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wvalid = 1U;
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       358);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    while (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wfull) {
        co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_mc16x2_updated.aclk)", 
                                                           "tb_mc16x2_updated.sv", 
                                                           358);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    co_await vlSelf->__VdlySched.delay(0x64ULL, nullptr, 
                                       "tb_mc16x2_updated.sv", 
                                       361);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wlast = 0U;
    VL_WRITEF("[%0t] [AXI_W ] W Handshake Complete: All 256 bits transferred in 1 cycle\n",
              64,VL_TIME_UNITED_Q(1000),-9);
    vlSelf->__Vfork_1__sync.done("tb_mc16x2_updated.sv", 
                                 330);
    vlSelf->__Vm_traceActivity[6U] = 1U;
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_sequent__TOP__0(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0;
    __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0 = 0;
    VlWide<3>/*72:0*/ __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0;
    VL_ZERO_W(73, __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0;
    __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0 = 0;
    VlWide<10>/*288:0*/ __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0;
    VL_ZERO_W(289, __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0;
    __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0 = 0;
    VlWide<3>/*72:0*/ __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0;
    VL_ZERO_W(73, __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0 = 0U;
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rempty 
        = ((1U & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__aresetn))) 
           || ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rgray_next) 
               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r2)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rempty 
        = ((1U & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__aresetn))) 
           || ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rgray_next) 
               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r2)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wfull 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__aresetn) 
           && ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wgray_next) 
               == ((0xcU & ((~ ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w2) 
                                >> 2U)) << 2U)) | (3U 
                                                   & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w2)))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wfull 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__aresetn) 
           && ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wgray_next) 
               == ((0xcU & ((~ ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w2) 
                                >> 2U)) << 2U)) | (3U 
                                                   & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w2)))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wfull 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__aresetn) 
           && ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wgray_next) 
               == ((0x18U & ((~ ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w2) 
                                 >> 3U)) << 3U)) | 
                   (7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w2)))));
    if (vlSelf->tb_mc16x2_updated__DOT__aresetn) {
        if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__w_do) {
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[0U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wstrb 
                    << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_wlast));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[1U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wstrb 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[0U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[2U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[0U] 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[1U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[3U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[1U] 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[2U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[4U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[2U] 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[3U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[5U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[3U] 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[4U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[6U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[4U] 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[5U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[7U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[5U] 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[6U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[8U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[6U] 
                    >> 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[7U] 
                                 << 1U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[9U] 
                = (vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[7U] 
                   >> 0x1fU);
            __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0 
                = (0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_bin));
        }
        if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__w_do) {
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0[0U] 
                = (IData)((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arsize)) 
                            << 0x36U) | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arburst)) 
                                          << 0x34U) 
                                         | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arlock)) 
                                             << 0x33U) 
                                            | ((vlSelf->tb_mc16x2_updated__DOT__s_axi_araddr 
                                                << 0xbU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arqos) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arcache) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arprot))))))))));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0[1U] 
                = (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arlen) 
                    << 0x19U) | (IData)(((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arsize)) 
                                           << 0x36U) 
                                          | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arburst)) 
                                              << 0x34U) 
                                             | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arlock)) 
                                                 << 0x33U) 
                                                | ((vlSelf->tb_mc16x2_updated__DOT__s_axi_araddr 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arqos) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arcache) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arprot))))))))) 
                                         >> 0x20U)));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0[2U] 
                = (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arid) 
                    << 1U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arlen) 
                              >> 7U));
            __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0 
                = (7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_bin));
        }
        if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__w_do) {
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0[0U] 
                = (IData)((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awsize)) 
                            << 0x36U) | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awburst)) 
                                          << 0x34U) 
                                         | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awlock)) 
                                             << 0x33U) 
                                            | ((vlSelf->tb_mc16x2_updated__DOT__s_axi_awaddr 
                                                << 0xbU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awqos) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awcache) 
                                                                      << 3U) 
                                                                     | (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awprot))))))))));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0[1U] 
                = (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awlen) 
                    << 0x19U) | (IData)(((((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awsize)) 
                                           << 0x36U) 
                                          | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awburst)) 
                                              << 0x34U) 
                                             | (((QData)((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awlock)) 
                                                 << 0x33U) 
                                                | ((vlSelf->tb_mc16x2_updated__DOT__s_axi_awaddr 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awqos) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awcache) 
                                                                          << 3U) 
                                                                         | (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awprot))))))))) 
                                         >> 0x20U)));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0[2U] 
                = (((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awid) 
                    << 1U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awlen) 
                              >> 7U));
            __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0 
                = (7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_bin));
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray;
    } else {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray_r1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray_r1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray_w1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray_w1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray_w1 = 0U;
    }
    if (__Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][0U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[0U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][1U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[1U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][2U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[2U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][3U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[3U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][4U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[4U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][5U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[5U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][6U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[6U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][7U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[7U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][8U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[8U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0][9U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__mem__v0[9U];
    }
    if (__Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0][0U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0[0U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0][1U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0[1U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0][2U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem__v0[2U];
    }
    if (__Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0][0U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0[0U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0][1U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0[1U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0][2U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem__v0[2U];
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_comb__TOP__2(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_comb__TOP__2\n"); );
    // Body
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[0U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin))][0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[1U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin))][1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[2U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin))][2U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[0U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin))][0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[1U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin))][1U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[2U] 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__mem
        [(7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin))][2U];
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_sequent__TOP__3(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->tb_mc16x2_updated__DOT__aresetn) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rgray_next;
    } else {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_comb__TOP__3(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_bin) 
                   + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wbin_next)));
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next 
        = (0x1fU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_bin) 
                    + ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rempty)) 
                       & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_rready))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rgray_next 
        = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next), 1U) 
                    ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_bin) 
                   + ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rempty)) 
                      & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_bready))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rbin_next)));
}

void Vtb_mc16x2_updated___024root___timing_resume(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc10c6fd2__0.resume("@(posedge tb_mc16x2_updated.dfi_clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc10c6fdf__0.resume("@(negedge tb_mc16x2_updated.dfi_clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h74abff52__0.resume("@(posedge tb_mc16x2_updated.aclk)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h74ac015f__0.resume("@(negedge tb_mc16x2_updated.aclk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_mc16x2_updated___024root___timing_commit(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc10c6fd2__0.commit("@(posedge tb_mc16x2_updated.dfi_clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc10c6fdf__0.commit("@(negedge tb_mc16x2_updated.dfi_clk)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h74abff52__0.commit("@(posedge tb_mc16x2_updated.aclk)");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h74ac015f__0.commit("@(negedge tb_mc16x2_updated.aclk)");
    }
}

void Vtb_mc16x2_updated___024root___eval_triggers__act(Vtb_mc16x2_updated___024root* vlSelf);
void Vtb_mc16x2_updated___024root___eval_act(Vtb_mc16x2_updated___024root* vlSelf);

bool Vtb_mc16x2_updated___024root___eval_phase__act(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mc16x2_updated___024root___eval_triggers__act(vlSelf);
    Vtb_mc16x2_updated___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_mc16x2_updated___024root___timing_resume(vlSelf);
        Vtb_mc16x2_updated___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_mc16x2_updated___024root___eval_nba(Vtb_mc16x2_updated___024root* vlSelf);

bool Vtb_mc16x2_updated___024root___eval_phase__nba(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_mc16x2_updated___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__nba(Vtb_mc16x2_updated___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__act(Vtb_mc16x2_updated___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mc16x2_updated___024root___eval(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_mc16x2_updated___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_mc16x2_updated.sv", 18, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_mc16x2_updated___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_mc16x2_updated.sv", 18, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_mc16x2_updated___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_mc16x2_updated___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_mc16x2_updated___024root___eval_debug_assertions(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
