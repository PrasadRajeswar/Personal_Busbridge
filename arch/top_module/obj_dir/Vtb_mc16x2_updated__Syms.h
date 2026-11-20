// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MC16X2_UPDATED__SYMS_H_
#define VERILATED_VTB_MC16X2_UPDATED__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_mc16x2_updated.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mc16x2_updated___024root.h"
#include "Vtb_mc16x2_updated_mc_ch_arb.h"
#include "Vtb_mc16x2_updated_mc_pc_core.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_mc16x2_updated__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mc16x2_updated* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mc16x2_updated___024root   TOP;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__0__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__10__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__11__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__12__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__13__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__14__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__15__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__1__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__2__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__3__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__4__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__5__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__6__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__7__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__8__KET____DOT__u_ch_arb;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__0__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_pc_core  TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__g_pc__BRA__1__KET____DOT__u_pc_core;
    Vtb_mc16x2_updated_mc_ch_arb   TOP__tb_mc16x2_updated__DOT__dut__DOT__g_channel__BRA__9__KET____DOT__u_ch_arb;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_mc16x2_updated;

    // CONSTRUCTORS
    Vtb_mc16x2_updated__Syms(VerilatedContext* contextp, const char* namep, Vtb_mc16x2_updated* modelp);
    ~Vtb_mc16x2_updated__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
