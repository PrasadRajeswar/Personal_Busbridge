// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mc16x2_updated.h for the primary calling header

#include "Vtb_mc16x2_updated__pch.h"
#include "Vtb_mc16x2_updated__Syms.h"
#include "Vtb_mc16x2_updated_mc_ch_arb.h"

void Vtb_mc16x2_updated_mc_ch_arb___ctor_var_reset(Vtb_mc16x2_updated_mc_ch_arb* vlSelf);

Vtb_mc16x2_updated_mc_ch_arb::Vtb_mc16x2_updated_mc_ch_arb(Vtb_mc16x2_updated__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mc16x2_updated_mc_ch_arb___ctor_var_reset(this);
}

void Vtb_mc16x2_updated_mc_ch_arb::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mc16x2_updated_mc_ch_arb::~Vtb_mc16x2_updated_mc_ch_arb() {
}
