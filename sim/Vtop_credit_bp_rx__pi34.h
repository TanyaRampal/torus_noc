// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_CREDIT_BP_RX__PI34_H_
#define VERILATED_VTOP_CREDIT_BP_RX__PI34_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_credit_bp_rx__pi34 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(o_v,2,0);
    VL_OUT8(o_x,1,0);
    VL_OUT8(o_y,1,0);
    VL_IN8(i_b,0,0);
    CData/*2:0*/ __PVT__req;
    CData/*2:0*/ __PVT__grant;
    CData/*5:0*/ __PVT__grant_base;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__0__KET____DOT__pop;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__0__KET____DOT__empty;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__1__KET____DOT__pop;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__1__KET____DOT__empty;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__2__KET____DOT__pop;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__2__KET____DOT__empty;
    CData/*2:0*/ __PVT__genblk2__DOT__next_grant;
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__o_full;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__o_full;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
    CData/*0:0*/ __PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__o_full;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
    CData/*4:0*/ __PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
    VL_OUT(o_d,31,0);
    VlWide<4>/*107:0*/ __PVT__rdata_e;
    VlUnpacked<QData/*35:0*/, 32> __PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data;
    VlUnpacked<QData/*35:0*/, 32> __PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data;
    VlUnpacked<QData/*35:0*/, 32> __PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_credit_bp_rx__pi34(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_credit_bp_rx__pi34();
    VL_UNCOPYABLE(Vtop_credit_bp_rx__pi34);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
