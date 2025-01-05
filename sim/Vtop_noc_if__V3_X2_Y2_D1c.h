// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_NOC_IF__V3_X2_Y2_D1C_H_
#define VERILATED_VTOP_NOC_IF__V3_X2_Y2_D1C_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_noc_if__V3_X2_Y2_D1c final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*2:0*/ vc_target;
    CData/*2:0*/ vc_credit_gnt;
    IData/*31:0*/ packet;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_noc_if__V3_X2_Y2_D1c(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_noc_if__V3_X2_Y2_D1c();
    VL_UNCOPYABLE(Vtop_noc_if__V3_X2_Y2_D1c);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_noc_if__V3_X2_Y2_D1c* obj);

#endif  // guard
