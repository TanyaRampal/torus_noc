// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop_credit_bp_rx__pi34.h"

VL_ATTR_COLD void Vtop_credit_bp_rx__pi34___stl_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0(Vtop_credit_bp_rx__pi34* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi34___stl_sequent__TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head)));
    vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail)));
    vlSelfRef.__PVT__req = ((4U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                                   << 2U)) | ((2U & 
                                               ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)))));
    vlSelfRef.o_v = ((4U & (IData)(vlSelfRef.o_v)) 
                     | ((2U & (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__empty)) 
                                << 1U) & (IData)(vlSelfRef.__PVT__grant))) 
                        | (1U & ((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__empty)) 
                                 & (IData)(vlSelfRef.__PVT__grant)))));
    vlSelfRef.o_v = ((3U & (IData)(vlSelfRef.o_v)) 
                     | (((~ (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__empty)) 
                         & ((IData)(vlSelfRef.__PVT__grant) 
                            >> 2U)) << 2U));
    vlSelfRef.__PVT__rdata_e[0U] = (IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
                                           [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail]);
    vlSelfRef.__PVT__rdata_e[1U] = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
                                             [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail]) 
                                     << 4U) | (IData)(
                                                      (vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data
                                                       [vlSelfRef.__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail] 
                                                       >> 0x20U)));
    vlSelfRef.__PVT__rdata_e[2U] = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
                                             [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail]) 
                                     << 8U) | (((IData)(
                                                        vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
                                                        [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail]) 
                                                >> 0x1cU) 
                                               | ((IData)(
                                                          (vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data
                                                           [vlSelfRef.__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail] 
                                                           >> 0x20U)) 
                                                  << 4U)));
    vlSelfRef.__PVT__rdata_e[3U] = (((IData)(vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
                                             [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail]) 
                                     >> 0x18U) | ((IData)(
                                                          (vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data
                                                           [vlSelfRef.__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail] 
                                                           >> 0x20U)) 
                                                  << 8U));
    vlSelfRef.__PVT__genblk2__DOT__double_grant = (0x3fU 
                                                   & ((~ 
                                                       ((((IData)(vlSelfRef.__PVT__req) 
                                                          << 3U) 
                                                         | (IData)(vlSelfRef.__PVT__req)) 
                                                        - (IData)(vlSelfRef.__PVT__grant_base))) 
                                                      & (((IData)(vlSelfRef.__PVT__req) 
                                                          << 3U) 
                                                         | (IData)(vlSelfRef.__PVT__req))));
    vlSelfRef.o_d = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = vlSelfRef.__PVT__rdata_e[0U];
        vlSelfRef.o_x = 0U;
        vlSelfRef.o_x = (3U & (vlSelfRef.__PVT__rdata_e[1U] 
                               >> 2U));
    } else {
        vlSelfRef.o_x = 0U;
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = ((vlSelfRef.__PVT__rdata_e[2U] 
                          << 0x1cU) | (vlSelfRef.__PVT__rdata_e[1U] 
                                       >> 4U));
        vlSelfRef.o_x = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 6U));
    }
    vlSelfRef.o_y = 0U;
    if ((1U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & vlSelfRef.__PVT__rdata_e[1U]);
    }
    if ((2U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[2U] 
                               >> 4U));
    }
    if ((4U & (IData)(vlSelfRef.__PVT__grant))) {
        vlSelfRef.o_d = ((vlSelfRef.__PVT__rdata_e[3U] 
                          << 0x18U) | (vlSelfRef.__PVT__rdata_e[2U] 
                                       >> 8U));
        vlSelfRef.o_x = (3U & (vlSelfRef.__PVT__rdata_e[3U] 
                               >> 0xaU));
        vlSelfRef.o_y = (3U & (vlSelfRef.__PVT__rdata_e[3U] 
                               >> 8U));
    }
    vlSelfRef.__PVT__genblk2__DOT__next_grant = (7U 
                                                 & ((IData)(vlSelfRef.__PVT__genblk2__DOT__double_grant) 
                                                    | ((IData)(vlSelfRef.__PVT__genblk2__DOT__double_grant) 
                                                       >> 3U)));
}

VL_ATTR_COLD void Vtop_credit_bp_rx__pi34___ctor_var_reset(Vtop_credit_bp_rx__pi34* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_credit_bp_rx__pi34___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->o_v = VL_RAND_RESET_I(3);
    vlSelf->o_x = VL_RAND_RESET_I(2);
    vlSelf->o_y = VL_RAND_RESET_I(2);
    vlSelf->o_d = VL_RAND_RESET_I(32);
    vlSelf->i_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(108, vlSelf->__PVT__rdata_e);
    vlSelf->__PVT__grant = VL_RAND_RESET_I(3);
    vlSelf->__PVT__grant_base = VL_RAND_RESET_I(6);
    vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk2__DOT__next_grant = VL_RAND_RESET_I(3);
    vlSelf->__PVT__genblk2__DOT__double_grant = VL_RAND_RESET_I(6);
    vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__o_full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_data[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_head = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__fifo_tail = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_head = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__0__KET____DOT__vc_fifo__DOT__next_fifo_tail = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__o_full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_data[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_head = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__fifo_tail = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_head = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__1__KET____DOT__vc_fifo__DOT__next_fifo_tail = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__o_full = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_data[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_head = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__fifo_tail = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_head = VL_RAND_RESET_I(5);
    vlSelf->__PVT__gen_vc_logic__BRA__2__KET____DOT__vc_fifo__DOT__next_fifo_tail = VL_RAND_RESET_I(5);
}
