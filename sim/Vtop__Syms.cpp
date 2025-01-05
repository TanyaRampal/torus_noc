// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "Vtop_credit_bp_rx__pi34.h"
#include "Vtop_noc_if__D20_X2_Y2_V3.h"
#include "Vtop_noc_if__V3_X2_Y2_D20.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{
}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[0].xs[0].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[0].xs[0].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[0].xs[0].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[0].xs[1].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[0].xs[1].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[0].xs[1].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[0].xs[2].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[0].xs[2].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[0].xs[2].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[0].xs[3].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[0].xs[3].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[0].xs[3].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[1].xs[0].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[1].xs[0].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[1].xs[0].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[1].xs[1].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[1].xs[1].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[1].xs[1].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[1].xs[2].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[1].xs[2].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[1].xs[2].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[1].xs[3].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[1].xs[3].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[1].xs[3].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[2].xs[0].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[2].xs[0].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[2].xs[0].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[2].xs[1].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[2].xs[1].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[2].xs[1].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[2].xs[2].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[2].xs[2].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[2].xs[2].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[2].xs[3].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[2].xs[3].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[2].xs[3].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[3].xs[0].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[3].xs[0].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[3].xs[0].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[3].xs[1].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[3].xs[1].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[3].xs[1].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[3].xs[2].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[3].xs[2].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[3].xs[2].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east{this, Verilated::catName(namep, "top.dut.ys[3].xs[3].noc_if_inst_east")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west{this, Verilated::catName(namep, "top.dut.ys[3].xs[3].noc_if_inst_west")}
    , TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx{this, Verilated::catName(namep, "top.dut.ys[3].xs[3].torus_switch_xy.west_conn_rx")}
    , TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[0].xss[0].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[0].xss[1].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[0].xss[2].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[0].xss[3].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[1].xss[0].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[1].xss[1].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[1].xss[2].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[1].xss[3].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[2].xss[0].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[2].xss[1].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[2].xss[2].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[2].xss[3].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[3].xss[0].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[3].xss[1].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[3].xss[2].noc_if_inst_conn")}
    , TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn{this, Verilated::catName(namep, "top.dut.yss[3].xss[3].noc_if_inst_conn")}
{
        // Check resources
        Verilated::stackCheck(1596);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west;
    TOP.__PVT__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx = &TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn;
    TOP.__PVT__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn = &TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.__Vconfigure(true);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(true);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.__Vconfigure(true);
    TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__2__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    TOP__top__DOT__dut__DOT__yss__BRA__3__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.__Vconfigure(false);
    // Setup scopes
    __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__0__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[0].xs[0].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__1__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[0].xs[1].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__2__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[0].xs[2].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__0__KET____xs__BRA__3__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[0].xs[3].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__0__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[1].xs[0].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__1__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[1].xs[1].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__2__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[1].xs[2].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__1__KET____xs__BRA__3__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[1].xs[3].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__0__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[2].xs[0].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__1__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[2].xs[1].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__2__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[2].xs[2].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__2__KET____xs__BRA__3__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[2].xs[3].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__0__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[3].xs[0].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__1__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[3].xs[1].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__2__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[3].xs[2].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__dut__ys__BRA__3__KET____xs__BRA__3__KET____client_xy__regulator.configure(this, name(), "top.dut.ys[3].xs[3].client_xy.regulator", "regulator", -9, VerilatedScope::SCOPE_OTHER);
}
