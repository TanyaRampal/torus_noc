// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_noc_if__V3_X2_Y2_D1c.h"

void Vtop_noc_if__V3_X2_Y2_D1c___ctor_var_reset(Vtop_noc_if__V3_X2_Y2_D1c* vlSelf);

Vtop_noc_if__V3_X2_Y2_D1c::Vtop_noc_if__V3_X2_Y2_D1c(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_noc_if__V3_X2_Y2_D1c___ctor_var_reset(this);
}

void Vtop_noc_if__V3_X2_Y2_D1c::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_noc_if__V3_X2_Y2_D1c::~Vtop_noc_if__V3_X2_Y2_D1c() {
}
