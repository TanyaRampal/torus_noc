// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_noc_if__D1c_X2_Y2_V3.h"

void Vtop_noc_if__D1c_X2_Y2_V3___ctor_var_reset(Vtop_noc_if__D1c_X2_Y2_V3* vlSelf);

Vtop_noc_if__D1c_X2_Y2_V3::Vtop_noc_if__D1c_X2_Y2_V3(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_noc_if__D1c_X2_Y2_V3___ctor_var_reset(this);
}

void Vtop_noc_if__D1c_X2_Y2_V3::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_noc_if__D1c_X2_Y2_V3::~Vtop_noc_if__D1c_X2_Y2_V3() {
}
