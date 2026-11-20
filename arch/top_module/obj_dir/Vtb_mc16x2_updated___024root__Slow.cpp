// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated__Syms.h"
#include "Vtb_mc16x2_updated___024root.h"

void Vtb_mc16x2_updated___024root___ctor_var_reset(Vtb_mc16x2_updated___024root* vlSelf);

Vtb_mc16x2_updated___024root::Vtb_mc16x2_updated___024root(Vtb_mc16x2_updated__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mc16x2_updated___024root___ctor_var_reset(this);
}

void Vtb_mc16x2_updated___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mc16x2_updated___024root::~Vtb_mc16x2_updated___024root() {
}
