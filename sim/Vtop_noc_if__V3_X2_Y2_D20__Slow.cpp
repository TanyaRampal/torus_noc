// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_noc_if__V3_X2_Y2_D20.h"

void Vtop_noc_if__V3_X2_Y2_D20___ctor_var_reset(Vtop_noc_if__V3_X2_Y2_D20* vlSelf);

Vtop_noc_if__V3_X2_Y2_D20::Vtop_noc_if__V3_X2_Y2_D20(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_noc_if__V3_X2_Y2_D20___ctor_var_reset(this);
}

void Vtop_noc_if__V3_X2_Y2_D20::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_noc_if__V3_X2_Y2_D20::~Vtop_noc_if__V3_X2_Y2_D20() {
}
