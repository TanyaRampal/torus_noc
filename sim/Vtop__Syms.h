// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"
#include "Vtop_credit_bp_rx__pi34.h"
#include "Vtop_noc_if__D20_X2_Y2_V3.h"
#include "Vtop_noc_if__V3_X2_Y2_D20.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    Vtop_noc_if__V3_X2_Y2_D20      TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    Vtop_credit_bp_rx__pi34        TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    Vtop_noc_if__D20_X2_Y2_V3      TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;

    // SCOPE NAMES
    VerilatedScope __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__0__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__1__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__2__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__3__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__0__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__1__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__2__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__3__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__0__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__1__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__2__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__3__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__0__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__1__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__2__KET____client_xy__regulator;
    VerilatedScope __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__3__KET____client_xy__regulator;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
