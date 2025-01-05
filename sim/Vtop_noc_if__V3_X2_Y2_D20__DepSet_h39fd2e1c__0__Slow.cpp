// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_noc_if__V3_X2_Y2_D20.h"

VL_ATTR_COLD void Vtop_noc_if__V3_X2_Y2_D20___ctor_var_reset(Vtop_noc_if__V3_X2_Y2_D20* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_noc_if__V3_X2_Y2_D20___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->vc_target = VL_RAND_RESET_I(3);
    vlSelf->packet = VL_RAND_RESET_Q(36);
    vlSelf->vc_credit_gnt = VL_RAND_RESET_I(3);
}
