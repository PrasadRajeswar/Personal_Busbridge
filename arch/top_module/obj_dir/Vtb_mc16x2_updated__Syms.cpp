// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated.h"
#include "Vtb_mc16x2_updated___024root.h"
#include "Vtb_mc16x2_updated_mc_ch_arb.h"
#include "Vtb_mc16x2_updated_mc_pc_core.h"

// FUNCTIONS
Vtb_mc16x2_updated__Syms::~Vtb_mc16x2_updated__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_mc16x2_updated__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_mc16x2_updated__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_mc16x2_updated__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_mc16x2_updated__Syms::Vtb_mc16x2_updated__Syms(VerilatedContext* contextp, const char* namep, Vtb_mc16x2_updated* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[0].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[0].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[0].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[10].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[10].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[10].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[11].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[11].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[11].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[12].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[12].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[12].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[13].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[13].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[13].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[14].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[14].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[14].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[15].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[15].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[15].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[1].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[1].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[1].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[2].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[2].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[2].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[3].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[3].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[3].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[4].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[4].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[4].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[5].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[5].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[5].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[6].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[6].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[6].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[7].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[7].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[7].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[8].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[8].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[8].u_ch_arb")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[9].g_pc[0].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[9].g_pc[1].u_pc_core")}
    , TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb{this, Verilated::catName(namep, "tb_mc16x2_updated.dut.g_channel[9].u_ch_arb")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    TOP.__PVT__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb = &TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(true);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb.__Vconfigure(true);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core.__Vconfigure(false);
    TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb.__Vconfigure(false);
    // Setup scopes
    __Vscope_tb_mc16x2_updated.configure(this, name(), "tb_mc16x2_updated", "tb_mc16x2_updated", -9, VerilatedScope::SCOPE_OTHER);
}
