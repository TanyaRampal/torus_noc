// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop_credit_bp_rx__pi28.h"

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __PVT__genblk2__DOT__double_grant;
    __PVT__genblk2__DOT__double_grant = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*4:0*/ __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    CData/*0:0*/ __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0;
    // Body
    __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
        __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = ((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                << 0x1cU) | (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.packet 
                             >> 4U));
        __VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 
            = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head;
        __VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0 = 1U;
    }
    if (vlSymsp->TOP.rst) {
        vlSelfRef.__PVT__grant_base = 1U;
        vlSelfRef.__PVT__grant = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = 1U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = 0U;
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = 0U;
    } else {
        vlSelfRef.__PVT__grant_base = ((IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)
                                        ? (IData)(vlSelfRef.__PVT__grant_base)
                                        : ((0U != (IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant))
                                            ? ((6U 
                                                & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__PVT__genblk2__DOT__next_grant) 
                                                     >> 2U)))
                                            : 1U));
        vlSelfRef.__PVT__grant = vlSelfRef.__PVT__genblk2__DOT__next_grant;
        if (((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
             & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 1U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target) 
              >> 2U) & (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        } else if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head))) 
                   == (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail));
        } else if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty 
                = ((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head) 
                   == (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail))));
        }
        if ((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((2U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
        if ((4U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target))) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head;
        }
        if (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) {
            vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail 
                = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail;
        }
    }
    if (__VdlySet__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    if (__VdlySet__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0) {
        vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__VdlyDim0__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0] 
            = __VdlyVal__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data__v0;
    }
    vlSelfRef.__PVT__req = ((6U & (IData)(vlSelfRef.__PVT__req)) 
                            | (1U & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))));
    vlSelfRef.o_v = ((6U & (IData)(vlSelfRef.o_v)) 
                     | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                              & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((5U & (IData)(vlSelfRef.__PVT__req)) 
                            | (2U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                     << 1U)));
    vlSelfRef.o_v = ((5U & (IData)(vlSelfRef.o_v)) 
                     | (2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                               << 1U) & (IData)(vlSelfRef.__PVT__grant))));
    vlSelfRef.__PVT__req = ((3U & (IData)(vlSelfRef.__PVT__req)) 
                            | (4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                     << 2U)));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    __PVT__genblk2__DOT__double_grant = (0x3fU & ((~ 
                                                   ((((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req)) 
                                                    - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                  & (((IData)(vlSelfRef.__PVT__req) 
                                                      << 3U) 
                                                     | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[0U] = vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[1U] = vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__rdata_e[2U] = vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
        [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail];
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[0U]);
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[0U] 
                         >> 0x1eU);
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[1U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[1U] 
                         >> 0x1eU);
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[0U] 
                               >> 0x1cU));
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 0x1cU));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = (0xfffffffU & vlSelfRef.__PVT__rdata_e[2U]);
        vlSelfRef.o_x = (vlSelfRef.__PVT__rdata_e[2U] 
                         >> 0x1eU);
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 0x1cU));
    }
}

VL_INLINE_OPT void Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1(Vtop_credit_bp_rx__pi28* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi28___nba_sequent__TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty))) 
                 & (IData)(vlSelfRef.__PVT__grant)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop 
        = (1U & (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
                  & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty))) 
                 & ((IData)(vlSelfRef.__PVT__grant) 
                    >> 1U)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop 
        = (((~ (IData)(vlSymsp->TOP.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b)) 
            & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty))) 
           & ((IData)(vlSelfRef.__PVT__grant) >> 2U));
    vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_credit_gnt 
        = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__pop) 
            << 2U) | (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__pop) 
                       << 1U) | (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__pop)));
}
