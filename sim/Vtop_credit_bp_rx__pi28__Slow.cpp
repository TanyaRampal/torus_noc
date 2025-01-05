// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_credit_bp_rx__pi28.h"

void Vtop_credit_bp_rx__pi28___ctor_var_reset(Vtop_credit_bp_rx__pi28* vlSelf);

Vtop_credit_bp_rx__pi28::Vtop_credit_bp_rx__pi28(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_credit_bp_rx__pi28___ctor_var_reset(this);
}

void Vtop_credit_bp_rx__pi28::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop_credit_bp_rx__pi28::~Vtop_credit_bp_rx__pi28() {
}
