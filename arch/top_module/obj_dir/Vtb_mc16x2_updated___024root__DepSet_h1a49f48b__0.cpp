// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated__Syms.h"
#include "Vtb_mc16x2_updated___024root.h"

extern const VlWide<8>/*255:0*/ Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0;
extern const VlWide<32>/*1023:0*/ Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<8>/*255:0*/ Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0;
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__2(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1(Vtb_mc16x2_updated___024root* vlSelf);
VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__2(Vtb_mc16x2_updated___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    std::string __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_name;
    CData/*4:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__target;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__target = 0;
    QData/*39:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__Vfuncout;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__channel;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__channel = 0;
    CData/*0:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__pc;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__pc = 0;
    SData/*13:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__row;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__row = 0;
    CData/*1:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bg;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bg = 0;
    CData/*1:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bank;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bank = 0;
    CData/*4:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__col;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__col = 0;
    std::string __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_name;
    SData/*13:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__row;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__row = 0;
    CData/*4:0*/ __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__target;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__target = 0;
    QData/*39:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__Vfuncout;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__channel;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__channel = 0;
    CData/*0:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__pc;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__pc = 0;
    SData/*13:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__row;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__row = 0;
    CData/*1:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bg;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bg = 0;
    CData/*1:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bank;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bank = 0;
    CData/*4:0*/ __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__col;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__col = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    VL_WRITEF("\n================================================================================\n   STARTING MC16X2 UPDATED TOP MODULE VERIFICATION SUITE\n   Verifying 256-bit AXI to 8-Beat DFI Streaming Architecture\n================================================================================\n\n");
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x61746564U;
    __Vtemp_1[2U] = 0x5f757064U;
    __Vtemp_1[3U] = 0x31367832U;
    __Vtemp_1[4U] = 0x6d63U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    VL_WRITEF("[%0t] [RESET] Asserting AXI and Controller resets...\n",
              64,VL_TIME_UNITED_Q(1000),-9);
    vlSelf->tb_mc16x2_updated__DOT__aresetn = 0U;
    vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awid = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awaddr = 0ULL;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awlen = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awsize = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awburst = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awlock = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awqos = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awcache = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awprot = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[0U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[1U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[2U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[3U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[4U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[5U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[6U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wdata[7U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wstrb = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wlast = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_bready = 1U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arid = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_araddr = 0ULL;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arlen = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arsize = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arburst = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arlock = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arqos = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arcache = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arprot = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_arvalid = 0U;
    vlSelf->tb_mc16x2_updated__DOT__s_axi_rready = 1U;
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[1U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[1U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[2U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[2U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[3U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[3U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[4U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[4U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[5U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[5U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[6U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[6U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[7U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[7U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[8U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[8U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[9U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[9U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xaU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xaU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xbU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xbU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xcU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xcU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xdU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xdU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xeU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xeU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xfU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0xfU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x10U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x10U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x11U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x11U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x12U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x12U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x13U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x13U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x14U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x14U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x15U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x15U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x16U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x16U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x17U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x17U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x18U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x18U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x19U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x19U];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1aU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1aU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1bU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1bU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1cU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1cU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1dU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1dU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1eU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1eU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1fU] 
        = Vtb_mc16x2_updated__ConstPool__CONST_hd6b7ba52_0[0x1fU];
    vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid = 0U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fdf__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       263);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n = 1U;
    VL_WRITEF("[%0t] [RESET] ctl_reset_n released synchronously to dfi_clk.\n",
              64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       267);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       267);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74abff52__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       267);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h74ac015f__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_mc16x2_updated.aclk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       269);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_mc16x2_updated__DOT__aresetn = 1U;
    VL_WRITEF("[%0t] [RESET] aresetn released synchronously to aclk.\n",
              64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       274);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("[%0t] [RESET] Initialization and CDC stabilization complete.\n\n",
              64,VL_TIME_UNITED_Q(1000),-9);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wstrb_32 = 0xffffffffU;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[0U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[0U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[1U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[1U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[2U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[2U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[3U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[3U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[4U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[4U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[5U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[5U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[6U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[6U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256[7U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[7U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__col = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bank = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bg = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__row = 1U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__id = 0xa1U;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_name = 
        std::string{"CH0_PC0 Full 256-bit Write (WSTRB=0xFFFFFFFF)"};
    vlSelf->tb_mc16x2_updated__DOT__test_count = ((IData)(1U) 
                                                  + vlSelf->tb_mc16x2_updated__DOT__test_count);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 1U;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__target 
        = (((IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel) 
            << 1U) | (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc));
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__col 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__col;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bank 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bank;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bg 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bg;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__row 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__row;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__pc 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__channel 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__Vfuncout 
        = (((QData)((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__channel)) 
            << 0x1dU) | (QData)((IData)((((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__pc) 
                                          << 0x1cU) 
                                         | (((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__row) 
                                             << 0xeU) 
                                            | (((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bg) 
                                                << 0xcU) 
                                               | (((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__bank) 
                                                   << 0xaU) 
                                                  | ((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__col) 
                                                     << 5U))))))));
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__addr 
        = __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__2__Vfuncout;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_seen = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wr_col_seen = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__act_cycles = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__streamed_beats = 0U;
    VL_WRITEF("==========================================================================================\n[%0t] START TEST %0d: %@\n==========================================================================================\n  TARGET: Channel=%0#, Pseudo-Channel=%0# (Target Core %0#)\n  ADDRESS: 0x%010x (Row=0x%04x, BG=%0#, Bank=%0#, Col=0x%02x)\n  256-bit WDATA : 0x%064x\n  32-bit  WSTRB : 0x%08x\n------------------------------------------------------------------------------------------\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__test_count,
              -1,&(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_name),
              4,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__channel),
              1,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__pc,
              5,(IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__target),
              40,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__addr,
              14,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__row),
              2,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bg,
              2,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__bank),
              5,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__col,
              256,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wdata_256.data(),
              32,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__wstrb_32);
    vlSelf->__Vfork_1__sync.init(3U, nullptr);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__1(vlSelf);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_1__2(vlSelf);
    co_await vlSelf->__Vfork_1__sync.join(nullptr, 
                                          "tb_mc16x2_updated.sv", 
                                          325);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((0U != ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                 >> 0x1fU) & (0xffffffffU 
                                              == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                               << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                               >> 0x1eU) 
                                              & (0xffffffffU 
                                                 == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                             << 0x1eU) 
                                            | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                  >> 0x1dU) 
                                                 & (0xffffffffU 
                                                    == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                << 0x1dU) 
                                               | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                     >> 0x1cU) 
                                                    & (0xffffffffU 
                                                       == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                   << 0x1cU) 
                                                  | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                        >> 0x1bU) 
                                                       & (0xffffffffU 
                                                          == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                      << 0x1bU) 
                                                     | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                           >> 0x1aU) 
                                                          & (0xffffffffU 
                                                             == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                         << 0x1aU) 
                                                        | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                              >> 0x19U) 
                                                             & (0xffffffffU 
                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                            << 0x19U) 
                                                           | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                 >> 0x18U) 
                                                                & (0xffffffffU 
                                                                   == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                               << 0x18U) 
                                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                    >> 0x17U) 
                                                                   & (0xffffffffU 
                                                                      == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                  << 0x17U) 
                                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                       >> 0x16U) 
                                                                      & (0xffffffffU 
                                                                         == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                     << 0x16U) 
                                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                          >> 0x15U) 
                                                                         & (0xffffffffU 
                                                                            == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                        << 0x15U) 
                                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                             >> 0x14U) 
                                                                            & (0xffffffffU 
                                                                               == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                           << 0x14U) 
                                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x13U) 
                                                                               & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                              << 0x13U) 
                                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)))))))))))))))))))))))))))))))))) 
                      | (0U != ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                   >> 0x1fU) & (0xffffU 
                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                 << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                 >> 0x1eU) 
                                                & (0xffffU 
                                                   == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                               << 0x1eU) 
                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                    >> 0x1dU) 
                                                   & (0xffffU 
                                                      == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                  << 0x1dU) 
                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                       >> 0x1cU) 
                                                      & (0xffffU 
                                                         == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                     << 0x1cU) 
                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                          >> 0x1bU) 
                                                         & (0xffffU 
                                                            == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                        << 0x1bU) 
                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                             >> 0x1aU) 
                                                            & (0xffffU 
                                                               == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                           << 0x1aU) 
                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                >> 0x19U) 
                                                               & (0xffffU 
                                                                  == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                              << 0x19U) 
                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                   >> 0x18U) 
                                                                  & (0xffffU 
                                                                     == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                 << 0x18U) 
                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                      >> 0x17U) 
                                                                     & (0xffffU 
                                                                        == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                    << 0x17U) 
                                                                   | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                         >> 0x16U) 
                                                                        & (0xffffU 
                                                                           == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                       << 0x16U) 
                                                                      | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                            >> 0x15U) 
                                                                           & (0xffffU 
                                                                              == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                          << 0x15U) 
                                                                         | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                               >> 0x14U) 
                                                                              & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                             << 0x14U) 
                                                                            | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x13U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x13U) 
                                                                               | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg)))))))))))))))))))))))))))))))))))) 
                     | (0U != (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                << 0x1fU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                              << 0x1eU) 
                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss)))))))))))))))))))))))))))))))))))) {
        VL_WRITEF("  [ERROR] Unexpected Error Flag Asserted: CMDQ_OFL=0x%x, WDB_OFL=0x%x, REF_MISS=0x%x\n",
                  32,((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                         >> 0x1fU) & (0xffffffffU == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                       << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                       >> 0x1eU) & 
                                      (0xffffffffU 
                                       == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                     << 0x1eU) | ((
                                                   ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                     >> 0x1dU) 
                                                    & (0xffffffffU 
                                                       == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                   << 0x1dU) 
                                                  | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                        >> 0x1cU) 
                                                       & (0xffffffffU 
                                                          == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                      << 0x1cU) 
                                                     | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                           >> 0x1bU) 
                                                          & (0xffffffffU 
                                                             == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                         << 0x1bU) 
                                                        | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                              >> 0x1aU) 
                                                             & (0xffffffffU 
                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                            << 0x1aU) 
                                                           | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                 >> 0x19U) 
                                                                & (0xffffffffU 
                                                                   == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                               << 0x19U) 
                                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                    >> 0x18U) 
                                                                   & (0xffffffffU 
                                                                      == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                  << 0x18U) 
                                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                       >> 0x17U) 
                                                                      & (0xffffffffU 
                                                                         == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                     << 0x17U) 
                                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                          >> 0x16U) 
                                                                         & (0xffffffffU 
                                                                            == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                        << 0x16U) 
                                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                             >> 0x15U) 
                                                                            & (0xffffffffU 
                                                                               == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                           << 0x15U) 
                                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x14U) 
                                                                               & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                              << 0x14U) 
                                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x13U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x13U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg))))))))))))))))))))))))))))))))),
                  32,((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                         >> 0x1fU) & (0xffffU == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                       << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                       >> 0x1eU) & 
                                      (0xffffU == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                     << 0x1eU) | ((
                                                   ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                     >> 0x1dU) 
                                                    & (0xffffU 
                                                       == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                   << 0x1dU) 
                                                  | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                        >> 0x1cU) 
                                                       & (0xffffU 
                                                          == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                      << 0x1cU) 
                                                     | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                           >> 0x1bU) 
                                                          & (0xffffU 
                                                             == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                         << 0x1bU) 
                                                        | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                              >> 0x1aU) 
                                                             & (0xffffU 
                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                            << 0x1aU) 
                                                           | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                 >> 0x19U) 
                                                                & (0xffffU 
                                                                   == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                               << 0x19U) 
                                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                    >> 0x18U) 
                                                                   & (0xffffU 
                                                                      == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                  << 0x18U) 
                                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                       >> 0x17U) 
                                                                      & (0xffffU 
                                                                         == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                     << 0x17U) 
                                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                          >> 0x16U) 
                                                                         & (0xffffU 
                                                                            == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                        << 0x16U) 
                                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                             >> 0x15U) 
                                                                            & (0xffffU 
                                                                               == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                           << 0x15U) 
                                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x14U) 
                                                                               & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                              << 0x14U) 
                                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x13U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x13U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg)))))))))))))))))))))))))))))))))),
                  32,(((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                       << 0x1fU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                     << 0x1eU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss)))))))))))))))))))))))))))))))));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed = 0U;
    }
    if (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_write__1__test_passed) {
        vlSelf->tb_mc16x2_updated__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_mc16x2_updated__DOT__pass_count);
        VL_WRITEF(">>> TEST %0d PASSED: All 256 bits correctly verified across 8 DFI cycles! <<<\n\n",
                  32,vlSelf->tb_mc16x2_updated__DOT__test_count);
    } else {
        vlSelf->tb_mc16x2_updated__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_mc16x2_updated__DOT__fail_count);
        VL_WRITEF(">>> TEST %0d FAILED! <<<\n\n",32,
                  vlSelf->tb_mc16x2_updated__DOT__test_count);
    }
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       496);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[0U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[0U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[1U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[1U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[2U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[2U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[3U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[3U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[4U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[4U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[5U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[5U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[6U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[6U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256[7U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h4f59db5c_0[7U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__col = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bank = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bg = 0U;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__row = 1U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__id = 0xb1U;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_name = 
        std::string{"CH0_PC0 Full 256-bit Read (8-Cycle DFI Stream to 1 AXI Cycle)"};
    vlSelf->tb_mc16x2_updated__DOT__test_count = ((IData)(1U) 
                                                  + vlSelf->tb_mc16x2_updated__DOT__test_count);
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 1U;
    __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__target 
        = (((IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel) 
            << 1U) | (IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc));
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__col 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__col;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bank 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bank;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bg 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bg;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__row 
        = __Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__row;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__pc 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__channel 
        = vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel;
    __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__Vfuncout 
        = (((QData)((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__channel)) 
            << 0x1dU) | (QData)((IData)((((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__pc) 
                                          << 0x1cU) 
                                         | (((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__row) 
                                             << 0xeU) 
                                            | (((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bg) 
                                                << 0xcU) 
                                               | (((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__bank) 
                                                   << 0xaU) 
                                                  | ((IData)(__Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__col) 
                                                     << 5U))))))));
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__addr 
        = __Vfunc_tb_mc16x2_updated__DOT__make_axi_addr__4__Vfuncout;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__rd_col_seen = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__act_cycles = 0U;
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[0U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[1U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[2U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[3U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[4U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[5U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[6U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
    vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__captured_rdata[7U] 
        = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
    VL_WRITEF("==========================================================================================\n[%0t] START TEST %0d: %@\n==========================================================================================\n  TARGET: Channel=%0#, Pseudo-Channel=%0# (Target Core %0#)\n  ADDRESS: 0x%010x (Row=0x%04x, BG=%0#, Bank=%0#, Col=0x%02x)\n  EXPECTED 256-bit RDATA: 0x%064x\n------------------------------------------------------------------------------------------\n",
              64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->tb_mc16x2_updated__DOT__test_count,
              -1,&(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_name),
              4,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__channel),
              1,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__pc,
              5,(IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__target),
              40,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__addr,
              14,(IData)(__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__row),
              2,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bg,
              2,(IData)(vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__bank),
              5,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__col,
              256,vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__expected_rdata_256.data());
    vlSelf->__Vfork_2__sync.init(3U, nullptr);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__0(vlSelf);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__1(vlSelf);
    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__2____Vfork_2__2(vlSelf);
    co_await vlSelf->__Vfork_2__sync.join(nullptr, 
                                          "tb_mc16x2_updated.sv", 
                                          542);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((((0U != ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                 >> 0x1fU) & (0xffffffffU 
                                              == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                               << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                               >> 0x1eU) 
                                              & (0xffffffffU 
                                                 == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                             << 0x1eU) 
                                            | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                  >> 0x1dU) 
                                                 & (0xffffffffU 
                                                    == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                << 0x1dU) 
                                               | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                     >> 0x1cU) 
                                                    & (0xffffffffU 
                                                       == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                   << 0x1cU) 
                                                  | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                        >> 0x1bU) 
                                                       & (0xffffffffU 
                                                          == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                      << 0x1bU) 
                                                     | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                           >> 0x1aU) 
                                                          & (0xffffffffU 
                                                             == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                         << 0x1aU) 
                                                        | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                              >> 0x19U) 
                                                             & (0xffffffffU 
                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                            << 0x19U) 
                                                           | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                 >> 0x18U) 
                                                                & (0xffffffffU 
                                                                   == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                               << 0x18U) 
                                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                    >> 0x17U) 
                                                                   & (0xffffffffU 
                                                                      == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                  << 0x17U) 
                                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                       >> 0x16U) 
                                                                      & (0xffffffffU 
                                                                         == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                     << 0x16U) 
                                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                          >> 0x15U) 
                                                                         & (0xffffffffU 
                                                                            == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                        << 0x15U) 
                                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                             >> 0x14U) 
                                                                            & (0xffffffffU 
                                                                               == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                           << 0x14U) 
                                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x13U) 
                                                                               & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                              << 0x13U) 
                                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)))))))))))))))))))))))))))))))))) 
                      | (0U != ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                   >> 0x1fU) & (0xffffU 
                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                 << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                 >> 0x1eU) 
                                                & (0xffffU 
                                                   == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                               << 0x1eU) 
                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                    >> 0x1dU) 
                                                   & (0xffffU 
                                                      == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                  << 0x1dU) 
                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                       >> 0x1cU) 
                                                      & (0xffffU 
                                                         == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                     << 0x1cU) 
                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                          >> 0x1bU) 
                                                         & (0xffffU 
                                                            == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                        << 0x1bU) 
                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                             >> 0x1aU) 
                                                            & (0xffffU 
                                                               == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                           << 0x1aU) 
                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                >> 0x19U) 
                                                               & (0xffffU 
                                                                  == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                              << 0x19U) 
                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                   >> 0x18U) 
                                                                  & (0xffffU 
                                                                     == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                 << 0x18U) 
                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                      >> 0x17U) 
                                                                     & (0xffffU 
                                                                        == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                    << 0x17U) 
                                                                   | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                         >> 0x16U) 
                                                                        & (0xffffU 
                                                                           == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                       << 0x16U) 
                                                                      | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                            >> 0x15U) 
                                                                           & (0xffffU 
                                                                              == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                          << 0x15U) 
                                                                         | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                               >> 0x14U) 
                                                                              & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                             << 0x14U) 
                                                                            | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x13U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x13U) 
                                                                               | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg)))))))))))))))))))))))))))))))))))) 
                     | (0U != (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                << 0x1fU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                              << 0x1eU) 
                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss)))))))))))))))))))))))))))))))))))) {
        VL_WRITEF("  [ERROR] Unexpected Error Flag Asserted: CMDQ_OFL=0x%x, WDB_OFL=0x%x, REF_MISS=0x%x\n",
                  32,((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                         >> 0x1fU) & (0xffffffffU == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                       << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                       >> 0x1eU) & 
                                      (0xffffffffU 
                                       == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                     << 0x1eU) | ((
                                                   ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                     >> 0x1dU) 
                                                    & (0xffffffffU 
                                                       == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                   << 0x1dU) 
                                                  | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                        >> 0x1cU) 
                                                       & (0xffffffffU 
                                                          == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                      << 0x1cU) 
                                                     | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                           >> 0x1bU) 
                                                          & (0xffffffffU 
                                                             == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                         << 0x1bU) 
                                                        | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                              >> 0x1aU) 
                                                             & (0xffffffffU 
                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                            << 0x1aU) 
                                                           | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                 >> 0x19U) 
                                                                & (0xffffffffU 
                                                                   == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                               << 0x19U) 
                                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                    >> 0x18U) 
                                                                   & (0xffffffffU 
                                                                      == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                  << 0x18U) 
                                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                       >> 0x17U) 
                                                                      & (0xffffffffU 
                                                                         == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                     << 0x17U) 
                                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                          >> 0x16U) 
                                                                         & (0xffffffffU 
                                                                            == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                        << 0x16U) 
                                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                             >> 0x15U) 
                                                                            & (0xffffffffU 
                                                                               == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                           << 0x15U) 
                                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x14U) 
                                                                               & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                              << 0x14U) 
                                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x13U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x13U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg)) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
                                                                                & (0xffffffffU 
                                                                                == vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_cmdq__DOT__valid_reg))))))))))))))))))))))))))))))))),
                  32,((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                         >> 0x1fU) & (0xffffU == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                       << 0x1fU) | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                       >> 0x1eU) & 
                                      (0xffffU == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                     << 0x1eU) | ((
                                                   ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                     >> 0x1dU) 
                                                    & (0xffffU 
                                                       == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                   << 0x1dU) 
                                                  | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                        >> 0x1cU) 
                                                       & (0xffffU 
                                                          == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                      << 0x1cU) 
                                                     | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                           >> 0x1bU) 
                                                          & (0xffffU 
                                                             == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                         << 0x1bU) 
                                                        | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                              >> 0x1aU) 
                                                             & (0xffffU 
                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                            << 0x1aU) 
                                                           | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                 >> 0x19U) 
                                                                & (0xffffU 
                                                                   == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                               << 0x19U) 
                                                              | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                    >> 0x18U) 
                                                                   & (0xffffU 
                                                                      == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                  << 0x18U) 
                                                                 | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                       >> 0x17U) 
                                                                      & (0xffffU 
                                                                         == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                     << 0x17U) 
                                                                    | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                          >> 0x16U) 
                                                                         & (0xffffU 
                                                                            == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                        << 0x16U) 
                                                                       | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                             >> 0x15U) 
                                                                            & (0xffffU 
                                                                               == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                           << 0x15U) 
                                                                          | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x14U) 
                                                                               & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                              << 0x14U) 
                                                                             | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x13U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x13U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x12U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x12U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x11U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x11U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0x10U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0x10U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xfU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xfU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xeU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xeU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xdU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xdU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xcU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xcU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xbU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xbU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 0xaU) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 0xaU) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 9U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 9U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 8U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 8U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 7U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 7U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 6U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 6U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 5U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 5U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 4U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 4U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 3U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 3U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 2U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 2U) 
                                                                                | ((((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                >> 1U) 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg))) 
                                                                                << 1U) 
                                                                                | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val 
                                                                                & (0xffffU 
                                                                                == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_wdb__DOT__valid_reg)))))))))))))))))))))))))))))))))),
                  32,(((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                       << 0x1fU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                     << 0x1eU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                   << 0x1dU) 
                                                  | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                      << 0x1cU) 
                                                     | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                         << 0x1bU) 
                                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                            << 0x1aU) 
                                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                               << 0x19U) 
                                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                     << 0x17U) 
                                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                           << 0x15U) 
                                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                              << 0x14U) 
                                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.err_ref_deadline_miss) 
                                                                                << 1U) 
                                                                                | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.err_ref_deadline_miss)))))))))))))))))))))))))))))))));
        vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed = 0U;
    }
    if (vlSelf->__Vtask_tb_mc16x2_updated__DOT__verify_256bit_read__3__test_passed) {
        vlSelf->tb_mc16x2_updated__DOT__pass_count 
            = ((IData)(1U) + vlSelf->tb_mc16x2_updated__DOT__pass_count);
        VL_WRITEF(">>> TEST %0d PASSED: 256-bit Read correctly verified across 8 DFI cycles to 1 AXI cycle! <<<\n\n",
                  32,vlSelf->tb_mc16x2_updated__DOT__test_count);
    } else {
        vlSelf->tb_mc16x2_updated__DOT__fail_count 
            = ((IData)(1U) + vlSelf->tb_mc16x2_updated__DOT__fail_count);
        VL_WRITEF(">>> TEST %0d FAILED! <<<\n\n",32,
                  vlSelf->tb_mc16x2_updated__DOT__test_count);
    }
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_hc10c6fd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_mc16x2_updated.dfi_clk)", 
                                                       "tb_mc16x2_updated.sv", 
                                                       695);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n================================================================================\n   VERIFICATION SUMMARY\n================================================================================\n   TOTAL TESTS RUN  : %0d\n   TOTAL PASSED     : %0d\n   TOTAL FAILED     : %0d\n================================================================================\n\n",
              32,vlSelf->tb_mc16x2_updated__DOT__test_count,
              32,vlSelf->tb_mc16x2_updated__DOT__pass_count,
              32,vlSelf->tb_mc16x2_updated__DOT__fail_count);
    if (VL_LIKELY((0U == vlSelf->tb_mc16x2_updated__DOT__fail_count))) {
        VL_WRITEF("################################################################################\n                ALL TESTS PASSED SUCCESSFULLY! (100%% Coverage)\n################################################################################\n\n");
    } else {
        VL_WRITEF("********************************************************************************\n                TEST SUITE FAILED WITH %0d FAILURES\n********************************************************************************\n\n[%0t] %%Fatal: tb_mc16x2_updated.sv:759: Assertion failed in %Ntb_mc16x2_updated: Testbench failure detected.\n",
                  32,vlSelf->tb_mc16x2_updated__DOT__fail_count,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_mc16x2_updated.sv", 759, "");
    }
    co_await vlSelf->__VdlySched.delay(0xc350ULL, nullptr, 
                                       "tb_mc16x2_updated.sv", 
                                       762);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_mc16x2_updated.sv", 763, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__3(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_initial__TOP__Vtiming__3\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x2faf080ULL, 
                                       nullptr, "tb_mc16x2_updated.sv", 
                                       768);
    VL_WRITEF("[%0t] %%Fatal: tb_mc16x2_updated.sv:769: Assertion failed in %Ntb_mc16x2_updated: [TIMEOUT] Global Simulation Watchdog Timeout reached! Simulation aborted.\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tb_mc16x2_updated.sv", 769, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mc16x2_updated___024root___dump_triggers__act(Vtb_mc16x2_updated___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mc16x2_updated___024root___eval_triggers__act(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_mc16x2_updated__DOT__dfi_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__dfi_clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb_mc16x2_updated__DOT__aclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__aclk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dfi_clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__dfi_clk__0)));
    vlSelf->__VactTriggered.set(4U, ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__aclk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__aclk__0)));
    vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__dfi_clk__0 
        = vlSelf->tb_mc16x2_updated__DOT__dfi_clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mc16x2_updated__DOT__aclk__0 
        = vlSelf->tb_mc16x2_updated__DOT__aclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mc16x2_updated___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlWide<256>/*8191:0*/ Vtb_mc16x2_updated__ConstPool__CONST_h4ae14f6a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mc16x2_updated__ConstPool__TABLE_ha44c4cb2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_mc16x2_updated__ConstPool__TABLE_h28328ece_0;
extern const VlWide<36>/*1151:0*/ Vtb_mc16x2_updated__ConstPool__CONST_hb029ca01_0;

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___act_comb__TOP__0(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wdb_push_val = 0U;
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
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
            = (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                              >> 0x1cU))))));
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h2a5fa10f__0) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hb97afee7__0) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__1__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__2__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__3__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__4__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__5__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__6__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__7__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__8__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__9__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__10__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__11__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__12__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__13__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__14__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
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
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___act_comb__TOP__1(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___act_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0 = 0;
    // Body
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
            << 0x1eU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
                          << 0x1cU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
                                        << 0x1aU) | 
                                       (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
                                         << 0x18U) 
                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
                                            << 0x16U) 
                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
                                               << 0x14U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
                                                                 << 8U) 
                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                                                          << 2U) 
                                                                         | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant))))))))))))))));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wr_done 
        = ((0x80000000U & (((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                            << 0x1fU) & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                         << 0x1eU))) 
           | ((((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
               << 0x1eU) | ((0xe0000000U & (((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                             << 0x1dU) 
                                            & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                               << 0x1cU))) 
                            | ((((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                 & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                << 0x1cU) | ((0xf8000000U 
                                              & (((7U 
                                                   == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                    << 0x1aU))) 
                                             | ((((7U 
                                                   == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                  & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                 << 0x1aU) 
                                                | ((0xfe000000U 
                                                    & (((7U 
                                                         == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                        << 0x19U) 
                                                       & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                          << 0x18U))) 
                                                   | ((((7U 
                                                         == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                        & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                       << 0x18U) 
                                                      | ((0xff800000U 
                                                          & (((7U 
                                                               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                              << 0x17U) 
                                                             & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                << 0x16U))) 
                                                         | ((((7U 
                                                               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                              & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                             << 0x16U) 
                                                            | ((0xffe00000U 
                                                                & (((7U 
                                                                     == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                    << 0x15U) 
                                                                   & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                      << 0x14U))) 
                                                               | ((((7U 
                                                                     == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                    & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                   << 0x14U) 
                                                                  | ((0xfff80000U 
                                                                      & (((7U 
                                                                           == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                          << 0x13U) 
                                                                         & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                            << 0x12U))) 
                                                                     | ((((7U 
                                                                           == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                          & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                         << 0x12U) 
                                                                        | ((0xfffe0000U 
                                                                            & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0x11U) 
                                                                               & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0x10U))) 
                                                                           | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                               << 0x10U) 
                                                                              | ((0xffff8000U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0xfU) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0xeU))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 0xeU) 
                                                                                | ((0xffffe000U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0xdU) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0xcU))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 0xcU) 
                                                                                | ((0xfffff800U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0xbU) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0xaU))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 0xaU) 
                                                                                | ((0xfffffe00U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 9U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 8U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 8U) 
                                                                                | ((0xffffff80U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 7U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 6U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 6U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 4U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 4U) 
                                                                                | ((0xfffffff8U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 2U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 2U) 
                                                                                | ((0xfffffffeU 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 1U) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en))) 
                                                                                | ((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en)))))))))))))))))))))))))))))))));
}

void Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);
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
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
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
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__1(Vtb_mc16x2_updated_mc_pc_core* vlSelf);
void Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__1(Vtb_mc16x2_updated_mc_pc_core* vlSelf);

void Vtb_mc16x2_updated___024root___eval_act(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___eval_act\n"); );
    // Body
    if ((0x1fULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mc16x2_updated___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Vtb_mc16x2_updated_mc_ch_arb___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb));
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
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated___024root___act_comb__TOP__1(vlSelf);
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__0((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
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
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core__1((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core));
        Vtb_mc16x2_updated_mc_pc_core___act_comb__TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core__1((&vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core));
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_sequent__TOP__1(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0;
    CData/*0:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0;
    CData/*2:0*/ __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0;
    __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0;
    __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0;
    __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0 = 0;
    VlWide<9>/*266:0*/ __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0;
    VL_ZERO_W(267, __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0 = 0;
    CData/*2:0*/ __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 0;
    // Body
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state 
        = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0 = 0U;
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col_val 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_valid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rempty 
        = ((1U & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))) 
           || ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rgray_next) 
               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r2)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rempty 
        = ((1U & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))) 
           || ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rgray_next) 
               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r2)));
    if (vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) {
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x1fU) & (0x8000000000000000ULL == 
                           (0xc000000000000000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x1eU) & (0x2000000000000000ULL == 
                           (0x3000000000000000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x1dU) & (0x800000000000000ULL == 
                           (0xc00000000000000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x1cU) & (0x200000000000000ULL == 
                           (0x300000000000000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x1bU) & (0x80000000000000ULL == (0xc0000000000000ULL 
                                                   & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x1aU) & (0x20000000000000ULL == (0x30000000000000ULL 
                                                   & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x19U) & (0x8000000000000ULL == (0xc000000000000ULL 
                                                  & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x18U) & (0x2000000000000ULL == (0x3000000000000ULL 
                                                  & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x17U) & (0x800000000000ULL == (0xc00000000000ULL 
                                                 & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x16U) & (0x200000000000ULL == (0x300000000000ULL 
                                                 & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x15U) & (0x80000000000ULL == (0xc0000000000ULL 
                                                & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x14U) & (0x20000000000ULL == (0x30000000000ULL 
                                                & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x13U) & (0x8000000000ULL == (0xc000000000ULL 
                                               & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x12U) & (0x2000000000ULL == (0x3000000000ULL 
                                               & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x11U) & (0x800000000ULL == (0xc00000000ULL 
                                              & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0x10U) & (0x200000000ULL == (0x300000000ULL 
                                              & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0xfU) & (0x80000000ULL == (0xc0000000ULL 
                                            & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0xeU) & (0x20000000ULL == (0x30000000ULL 
                                            & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0xdU) & (0x8000000ULL == (0xc000000ULL 
                                           & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0xcU) & (0x2000000ULL == (0x3000000ULL 
                                           & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0xbU) & (0x800000ULL == (0xc00000ULL 
                                          & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 0xaU) & (0x200000ULL == (0x300000ULL 
                                          & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 9U) & (0x80000ULL == (0xc0000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 8U) & (0x20000ULL == (0x30000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 7U) & (0x8000ULL == (0xc000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 6U) & (0x2000ULL == (0x3000ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 5U) & (0x800ULL == (0xc00ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 4U) & (0x200ULL == (0x300ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 3U) & (0x80ULL == (0xc0ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 2U) & (0x20ULL == (0x30ULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
              >> 1U) & (8ULL == (0xcULL & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd)))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        if ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
             & (2U == (3U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_cmd))))) {
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active) {
            if ((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
            } else {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt)));
            }
        }
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__w_do) {
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0 
                = ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id) 
                   << 2U);
            __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0 
                = (7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_bin));
        }
    } else {
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt 
            = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt;
    }
    if (__Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__mem__v0;
    }
    if (vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) {
        if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__w_do) {
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[0U] 
                = (1U | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[0U] 
                         << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[1U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[0U] 
                    >> 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[1U] 
                                 << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[2U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[1U] 
                    >> 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[2U] 
                                 << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[3U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[2U] 
                    >> 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[3U] 
                                 << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[4U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[3U] 
                    >> 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[4U] 
                                 << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[5U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[4U] 
                    >> 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[5U] 
                                 << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[6U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[5U] 
                    >> 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[6U] 
                                 << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[7U] 
                = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[6U] 
                    >> 0x1dU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[7U] 
                                 << 3U));
            __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[8U] 
                = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id) 
                    << 3U) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[7U] 
                              >> 0x1dU));
            __Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0 = 1U;
            __Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0 
                = (0xfU & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_bin));
        }
    }
    if (__Vdlyvset__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][0U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[0U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][1U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[1U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][2U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[2U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][3U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[3U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][4U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[4U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][5U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[5U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][6U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[6U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][7U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[7U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem[__Vdlyvdim0__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0][8U] 
            = __Vdlyvval__tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__mem__v0[8U];
    }
    if (vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_pc_sel) 
                << 0xbU) | (0x7ffU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_cmd_out)));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row 
            = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.row_pc_sel) 
                << 0x15U) | (0x1fffffU & vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.row_cmd_out));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_mask 
            = ((((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                  ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rmask)
                  : 0U) << 4U) | ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rmask)
                                   : 0U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata 
            = (((QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active)
                                  ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.wdb_rdata
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active)
                                   ? vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.wdb_rdata
                                   : 0U))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en 
            = (((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active) 
                << 1U) | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_rddata_en 
            = ((0xfffffffeU & ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
                               & ((1U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)) 
                                  << 1U))) | ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
                                              & (1U 
                                                 == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd))));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rgray_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_bin 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next;
        if ((4U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))) {
                if ((1U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wfull)))) {
                        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 0U;
                    }
                } else if ((1U & (((((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                     << 0x1fU) | ((0x40000000U 
                                                   & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                      << 0x1eU)) 
                                                  | ((0x20000000U 
                                                      & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                         << 0x1dU)) 
                                                     | ((0x10000000U 
                                                         & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                            << 0x1cU)) 
                                                        | ((0x8000000U 
                                                            & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                               << 0x1bU)) 
                                                           | ((0x4000000U 
                                                               & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                  << 0x1aU)) 
                                                              | ((0x2000000U 
                                                                  & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                     << 0x19U)) 
                                                                 | ((0x1000000U 
                                                                     & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                        << 0x18U)) 
                                                                    | ((0x800000U 
                                                                        & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                           << 0x17U)) 
                                                                       | ((0x400000U 
                                                                           & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                              << 0x16U)) 
                                                                          | ((0x200000U 
                                                                              & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0x15U)) 
                                                                             | ((0x100000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_empty)))))))))))))))))))))))))))))))))) 
                                   & vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_ready) 
                                  >> (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target)))) {
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[0U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(1U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                        >> 5U))] >> 
                              (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[1U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(2U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              ((IData)(1U) + (0xffU 
                                              & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                 >> 5U)))] 
                              >> (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[2U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(3U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              ((IData)(2U) + (0xffU 
                                              & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                 >> 5U)))] 
                              >> (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[3U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(4U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              ((IData)(3U) + (0xffU 
                                              & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                 >> 5U)))] 
                              >> (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[4U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(5U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              ((IData)(4U) + (0xffU 
                                              & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                 >> 5U)))] 
                              >> (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[5U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(6U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              ((IData)(5U) + (0xffU 
                                              & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                 >> 5U)))] 
                              >> (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[6U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(7U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              ((IData)(6U) + (0xffU 
                                              & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                 >> 5U)))] 
                              >> (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[7U] 
                        = (((0U == (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U)))
                             ? 0U : (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                                     ((IData)(8U) + 
                                      (0xffU & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))))) 
                           | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data[
                              ((IData)(7U) + (0xffU 
                                              & (VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U) 
                                                 >> 5U)))] 
                              >> (0x1fU & VL_SHIFTL_III(13,32,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target), 8U))));
                    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))) {
                if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_dispatch) {
                    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 6U;
                }
            } else if ((1U & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wfull)))) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 0U;
            }
        } else if ((2U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))) {
                if ((1U & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wr_done 
                           >> (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target)))) {
                    __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 4U;
                }
            } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_dispatch) {
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))) {
            if (((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rempty)) 
                 & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_wready))) {
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[0U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[2U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[1U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[1U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[3U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[2U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[2U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[4U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[3U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[3U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[5U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[4U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[4U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[6U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[5U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[5U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[7U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[6U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[6U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[8U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[7U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[7U] 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[9U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[8U] 
                                     >> 1U));
                vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_strobes 
                    = ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[1U] 
                        << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[0U] 
                                     >> 1U));
                __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state 
                    = ((0U == ((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[1U] 
                                << 0x1fU) | (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__w_rdata[0U] 
                                             >> 1U)))
                        ? 4U : 2U);
            }
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_write) {
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id 
                = (0xffU & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[2U] 
                            >> 1U));
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                = (0xffffffffffULL & (((QData)((IData)(
                                                       vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[1U])) 
                                       << 0x15U) | 
                                      ((QData)((IData)(
                                                       vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__aw_rdata[0U])) 
                                       >> 0xbU)));
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[0U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[1U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[2U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[3U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[4U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[5U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[6U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[7U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__prefer_read = 1U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 1U;
        } else if (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_read) {
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id 
                = (0xffU & (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[2U] 
                            >> 1U));
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                = (0xffffffffffULL & (((QData)((IData)(
                                                       vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[1U])) 
                                       << 0x15U) | 
                                      ((QData)((IData)(
                                                       vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__ar_rdata[0U])) 
                                       >> 0xbU)));
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[0U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[1U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[2U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[3U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[4U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[5U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[6U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[7U] 
                = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
            vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__prefer_read = 0U;
            __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 5U;
        }
    } else {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_col = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_row = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_mask = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_rddata_en = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_gray = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_bin = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_bin = 0U;
        __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_id = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr = 0ULL;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_payload[7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__write_strobes = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[0U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[0U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[1U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[1U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[2U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[2U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[3U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[3U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[4U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[4U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[5U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[5U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[6U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[6U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_payload[7U] 
            = Vtb_mc16x2_updated__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__prefer_read = 0U;
    }
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state 
        = __Vdly__tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state;
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__target 
        = (0x1fU & (IData)((vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                            >> 0x1cU)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rempty 
        = ((1U & (~ (IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))) 
           || ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rgray_next) 
               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r2)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wfull 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wgray_next) 
               == ((0x18U & ((~ ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w2) 
                                 >> 3U)) << 3U)) | 
                   (7U & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w2)))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wfull 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           && ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wgray_next) 
               == ((0xcU & ((~ ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w2) 
                                >> 2U)) << 2U)) | (3U 
                                                   & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w2)))));
    if (vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w2 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w1;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w1 
            = vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray;
    } else {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wptr_gray_r1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wptr_gray_r1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w2 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wptr_gray_r1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__rptr_gray_w1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__rptr_gray_w1 = 0U;
    }
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_sequent__TOP__2(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____VdfgTmp_hf8ca76d6__0;
    tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT____VdfgTmp_hf8ca76d6__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<64>/*2047:0*/ __Vtemp_30;
    VlWide<72>/*2303:0*/ __Vtemp_31;
    VlWide<80>/*2559:0*/ __Vtemp_32;
    VlWide<88>/*2815:0*/ __Vtemp_33;
    VlWide<96>/*3071:0*/ __Vtemp_34;
    VlWide<104>/*3327:0*/ __Vtemp_35;
    VlWide<112>/*3583:0*/ __Vtemp_36;
    VlWide<120>/*3839:0*/ __Vtemp_37;
    VlWide<128>/*4095:0*/ __Vtemp_38;
    VlWide<136>/*4351:0*/ __Vtemp_39;
    VlWide<144>/*4607:0*/ __Vtemp_40;
    VlWide<152>/*4863:0*/ __Vtemp_41;
    VlWide<160>/*5119:0*/ __Vtemp_42;
    VlWide<168>/*5375:0*/ __Vtemp_43;
    VlWide<176>/*5631:0*/ __Vtemp_44;
    VlWide<184>/*5887:0*/ __Vtemp_45;
    VlWide<192>/*6143:0*/ __Vtemp_46;
    VlWide<200>/*6399:0*/ __Vtemp_47;
    VlWide<208>/*6655:0*/ __Vtemp_48;
    VlWide<216>/*6911:0*/ __Vtemp_49;
    VlWide<224>/*7167:0*/ __Vtemp_50;
    VlWide<232>/*7423:0*/ __Vtemp_51;
    VlWide<240>/*7679:0*/ __Vtemp_52;
    VlWide<248>/*7935:0*/ __Vtemp_53;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
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
    __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__ret_id_fifo
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
        = __Vtemp_1[0U];
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_axi_id[1U] 
        = __Vtemp_1[1U];
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
    __Vtemp_30[0U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[1U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[2U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[3U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[4U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[5U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[6U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[7U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_30[8U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[9U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[0xaU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[0xbU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[0xcU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[0xdU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[0xeU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[0xfU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_30[0x10U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[0x11U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[0x12U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[0x13U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[0x14U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[0x15U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[0x16U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[0x17U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_30[0x18U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[0x19U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[0x1aU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[0x1bU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[0x1cU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[0x1dU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[0x1eU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[0x1fU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_30[0x20U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[0x21U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[0x22U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[0x23U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[0x24U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[0x25U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[0x26U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[0x27U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_30[0x28U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[0x29U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[0x2aU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[0x2bU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[0x2cU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[0x2dU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[0x2eU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[0x2fU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_30[0x30U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[0x31U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[0x32U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[0x33U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[0x34U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[0x35U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[0x36U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[0x37U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    __Vtemp_30[0x38U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][0U];
    __Vtemp_30[0x39U] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][1U];
    __Vtemp_30[0x3aU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][2U];
    __Vtemp_30[0x3bU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][3U];
    __Vtemp_30[0x3cU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][4U];
    __Vtemp_30[0x3dU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][5U];
    __Vtemp_30[0x3eU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][6U];
    __Vtemp_30[0x3fU] = vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
        [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))][7U];
    VL_CONCAT_WWW(2304,2048,256, __Vtemp_31, __Vtemp_30, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(2560,2304,256, __Vtemp_32, __Vtemp_31, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(2816,2560,256, __Vtemp_33, __Vtemp_32, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3072,2816,256, __Vtemp_34, __Vtemp_33, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3328,3072,256, __Vtemp_35, __Vtemp_34, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3584,3328,256, __Vtemp_36, __Vtemp_35, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(3840,3584,256, __Vtemp_37, __Vtemp_36, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4096,3840,256, __Vtemp_38, __Vtemp_37, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4352,4096,256, __Vtemp_39, __Vtemp_38, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4608,4352,256, __Vtemp_40, __Vtemp_39, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(4864,4608,256, __Vtemp_41, __Vtemp_40, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5120,4864,256, __Vtemp_42, __Vtemp_41, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5376,5120,256, __Vtemp_43, __Vtemp_42, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5632,5376,256, __Vtemp_44, __Vtemp_43, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(5888,5632,256, __Vtemp_45, __Vtemp_44, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6144,5888,256, __Vtemp_46, __Vtemp_45, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6400,6144,256, __Vtemp_47, __Vtemp_46, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6656,6400,256, __Vtemp_48, __Vtemp_47, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(6912,6656,256, __Vtemp_49, __Vtemp_48, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7168,6912,256, __Vtemp_50, __Vtemp_49, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7424,7168,256, __Vtemp_51, __Vtemp_50, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7680,7424,256, __Vtemp_52, __Vtemp_51, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(7936,7680,256, __Vtemp_53, __Vtemp_52, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
    VL_CONCAT_WWW(8192,7936,256, vlSelf->tb_mc16x2_updated__DOT__dut__DOT__rdb_data, __Vtemp_53, 
                  vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_fifo
                  [(0xfU & (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__PVT__u_rdb__DOT__data_rd_ptr))]);
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_refresh 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_is_ref) 
            << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_is_ref));
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h2a5fa10f__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
            << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hb97afee7__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
            << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val));
    if (vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[2U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 2U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[3U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[4U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 4U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[5U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[6U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 6U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[7U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[8U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 8U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[9U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xaU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0xaU));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xbU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xcU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0xcU));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xdU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xeU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0xeU));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0xfU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x10U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0x10U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x11U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x12U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0x12U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x13U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x14U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0x14U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x15U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x16U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0x16U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x17U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x18U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0x18U));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x19U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1aU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0x1aU));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1bU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1cU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
                     >> 0x1cU));
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1dU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1eU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_valid 
            = (vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid 
               >> 0x1eU);
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0x1fU];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_pc0 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[0U];
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_valid 
            = (3U & vlSelf->tb_mc16x2_updated__DOT__dfi_rddata_valid);
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_pc1 
            = vlSelf->tb_mc16x2_updated__DOT__dfi_rddata[1U];
    } else {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_pc0 = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_valid = 0U;
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__rddata_pc1 = 0U;
    }
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
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_comb__TOP__0(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_16;
    // Body
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__wfull)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_arvalid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__wfull)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_awvalid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__wfull)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__s_axi_wvalid));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_wready 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
           & (1U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state)));
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wfull)) 
           & ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
              & (7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__w_do 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wfull)) 
           & ((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
              & (4U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__state))));
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__row_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.row_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.row_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__15__KET____DOT__u_ch_arb__col_req_valid 
        = ((((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_val) 
             << 1U) | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_val)) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__row_req_valid 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h2a5fa10f__0) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellinp__g_channel__BRA__0__KET____DOT__u_ch_arb__col_req_valid 
        = ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hb97afee7__0) 
           & (- (IData)((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n))));
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
    } else {
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
    }
    if (((IData)(vlSelf->tb_mc16x2_updated__DOT__ctl_reset_n) 
         & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__read_dispatch))) {
        vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
            = (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__cmd_push_val 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__txn_addr 
                                                              >> 0x1cU))))));
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
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next 
        = (0x1fU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rptr_bin) 
                    + ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rempty)) 
                       & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_wready))));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rgray_next 
        = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next), 1U) 
                    ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_w_fifo__DOT__rbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_write 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_aw_fifo__DOT__rempty)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_awready));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_addr_decode__DOT__accept_read 
        = ((~ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_ar_fifo__DOT__rempty)) 
           & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__m_arready));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next 
        = (0x1fU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wptr_bin) 
                    + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wgray_next 
        = (0x1fU & (VL_SHIFTR_III(5,5,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next), 1U) 
                    ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_r_fifo__DOT__wbin_next)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next 
        = (0xfU & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wptr_bin) 
                   + (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__w_do)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wgray_next 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next), 1U) 
                   ^ (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__u_axi_cdc__DOT__u_b_fifo__DOT__wbin_next)));
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
}

VL_INLINE_OPT void Vtb_mc16x2_updated___024root___nba_comb__TOP__1(Vtb_mc16x2_updated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mc16x2_updated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mc16x2_updated___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0 = 0;
    CData/*0:0*/ tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0;
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0 = 0;
    // Body
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__col_grant 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.col_grant) 
            << 0x1eU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.col_grant) 
                          << 0x1cU) | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.col_grant) 
                                        << 0x1aU) | 
                                       (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.col_grant) 
                                         << 0x18U) 
                                        | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.col_grant) 
                                            << 0x16U) 
                                           | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.col_grant) 
                                               << 0x14U) 
                                              | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.col_grant) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.col_grant) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.col_grant) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.col_grant) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.col_grant) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.col_grant) 
                                                                 << 8U) 
                                                                | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.col_grant) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.col_grant) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.col_grant) 
                                                                          << 2U) 
                                                                         | (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant))))))))))))))));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0 
        = ((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
           & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.col_req_cmd)));
    tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0 
        = (((IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.col_grant) 
            >> 1U) & (2U == (IData)(vlSymsp->TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.col_req_cmd)));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h96bb89bb__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h189f71ca__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h67a08bd7__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcc87b187__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hcb11f565__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hc8c893fb__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h04489cc0__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_ha382a0c7__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he6aa050d__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h60102b7a__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0e9292e9__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h475b18bf__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h9eea552d__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h25b7a060__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h30ce7983__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h7f8843cf__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hbe0ddb89__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he5030f9d__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hccd4b7c0__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h900d4028__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hf3bd2324__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h0a0ac9a5__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hee2f96ea__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd8e0df54__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h592bdb9b__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hd2d1e397__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_he23ef16c__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_hdb80641c__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h097710e4__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h3b4cd341__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_h08dfe3b7__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wr_active 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0) 
           | (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wr_burst_active));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat 
        = ((IData)(tb_mc16x2_updated__DOT__dut__DOT____VdfgTmp_heb244803__0)
            ? 0U : (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__wbeat_cnt));
    vlSelf->tb_mc16x2_updated__DOT__dut__DOT__wr_done 
        = ((0x80000000U & (((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                            << 0x1fU) & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                         << 0x1eU))) 
           | ((((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__15__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
               << 0x1eU) | ((0xe0000000U & (((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                             << 0x1dU) 
                                            & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                               << 0x1cU))) 
                            | ((((7U == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                 & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__14__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                << 0x1cU) | ((0xf8000000U 
                                              & (((7U 
                                                   == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                  << 0x1bU) 
                                                 & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                    << 0x1aU))) 
                                             | ((((7U 
                                                   == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                  & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__13__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                 << 0x1aU) 
                                                | ((0xfe000000U 
                                                    & (((7U 
                                                         == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                        << 0x19U) 
                                                       & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                          << 0x18U))) 
                                                   | ((((7U 
                                                         == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                        & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__12__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                       << 0x18U) 
                                                      | ((0xff800000U 
                                                          & (((7U 
                                                               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                              << 0x17U) 
                                                             & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                << 0x16U))) 
                                                         | ((((7U 
                                                               == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                              & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__11__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                             << 0x16U) 
                                                            | ((0xffe00000U 
                                                                & (((7U 
                                                                     == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                    << 0x15U) 
                                                                   & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                      << 0x14U))) 
                                                               | ((((7U 
                                                                     == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                    & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__10__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                   << 0x14U) 
                                                                  | ((0xfff80000U 
                                                                      & (((7U 
                                                                           == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                          << 0x13U) 
                                                                         & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                            << 0x12U))) 
                                                                     | ((((7U 
                                                                           == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                          & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__9__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                         << 0x12U) 
                                                                        | ((0xfffe0000U 
                                                                            & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0x11U) 
                                                                               & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0x10U))) 
                                                                           | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__8__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                               << 0x10U) 
                                                                              | ((0xffff8000U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0xfU) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0xeU))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__7__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 0xeU) 
                                                                                | ((0xffffe000U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0xdU) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0xcU))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__6__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 0xcU) 
                                                                                | ((0xfffff800U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 0xbU) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 0xaU))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__5__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 0xaU) 
                                                                                | ((0xfffffe00U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 9U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 8U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__4__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 8U) 
                                                                                | ((0xffffff80U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 7U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 6U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__3__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 6U) 
                                                                                | ((0xffffffe0U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 5U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 4U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__2__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 4U) 
                                                                                | ((0xfffffff8U 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 3U) 
                                                                                & ((IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en) 
                                                                                << 2U))) 
                                                                                | ((((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__1__KET____DOT__u_dfi_fmt__dfi_wrdata_en)) 
                                                                                << 2U) 
                                                                                | ((0xfffffffeU 
                                                                                & (((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__pc_wbeat)) 
                                                                                << 1U) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en))) 
                                                                                | ((7U 
                                                                                == (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__pc_wbeat)) 
                                                                                & (IData)(vlSelf->tb_mc16x2_updated__DOT__dut__DOT____Vcellout__g_channel__BRA__0__KET____DOT__u_dfi_fmt__dfi_wrdata_en)))))))))))))))))))))))))))))))));
}
