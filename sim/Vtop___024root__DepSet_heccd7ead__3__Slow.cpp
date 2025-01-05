// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__dut__DOT__done_switch[1U][2U] 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg) 
                    | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_v_reg) 
                       | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg) 
                          | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v) 
                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v) 
                                | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                   | ((IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [1U]
                                               [2U] 
                                               >> 0x24U)) 
                                      | ((IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [2U] 
                                                  >> 0x24U)) 
                                         | ((IData)(
                                                    (vlSelfRef.top__DOT__dut__DOT__w
                                                     [1U]
                                                     [2U] 
                                                     >> 0x24U)) 
                                            | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_v_c)))))))))))));
    vlSelfRef.top__DOT__dut__DOT__i_ack[1U][2U] = vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                    ? (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                               >> 0x23U))
                                    : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [2U] 
                                               >> 0x23U)))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x22U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [2U] 
                                                             >> 0x22U)))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                             ? (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                        >> 0x21U))
                                                             : (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                                        [2U]
                                                                        [2U] 
                                                                        >> 0x21U)))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [2U]
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [2U]
                                                                         [2U] 
                                                                         >> 0x1fU))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                    ? (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                               >> 0x1eU))
                                                                    : (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__i
                                                                               [2U]
                                                                               [2U] 
                                                                               >> 0x1eU))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                       ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                       : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1dU))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                          ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                          : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1cU))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                             ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                             : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1bU))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1aU))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x18U))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x17U))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U]))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                    ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U) : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x23U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [2U] 
                                                             >> 0x23U))))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                   ? (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                              >> 0x22U))
                                                   : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [2U] 
                                                              >> 0x22U))))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                             ? 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                                             >> 1U)
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x21U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [2U]
                                                                         [2U] 
                                                                         >> 0x21U))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x20U))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [2U]
                                                                          [2U] 
                                                                          >> 0x20U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? 
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                              >> 0x1fU)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x1fU))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [2U]
                                                                          [2U] 
                                                                          >> 0x1fU)))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                    ? 
                                                                   (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                    >> 0x1eU)
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                     ? (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1eU))
                                                                     : (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1eU)))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                       ? 
                                                                      (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                       >> 0x1dU)
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                        ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                        : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1dU)))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                          ? 
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                          >> 0x1cU)
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                           ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                           : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1cU)))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                             ? 
                                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                             >> 0x1bU)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                              ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                              : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1bU)))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                ? 
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x1aU)
                                                                                : 
                                                                               ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x1aU)))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 9U)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 8U)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 7U)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 6U)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 5U)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 4U)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 3U)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 2U)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U] 
                                                                                >> 1U)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [2U])))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__done_switch[2U][2U] 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg) 
                    | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_v_reg) 
                       | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg) 
                          | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v) 
                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v) 
                                | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                   | ((IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [2U]
                                               [2U] 
                                               >> 0x24U)) 
                                      | ((IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [2U]
                                                  [2U] 
                                                  >> 0x24U)) 
                                         | ((IData)(
                                                    (vlSelfRef.top__DOT__dut__DOT__w
                                                     [2U]
                                                     [2U] 
                                                     >> 0x24U)) 
                                            | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_v_c)))))))))))));
    vlSelfRef.top__DOT__dut__DOT__i_ack[2U][2U] = vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__i_ack;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                    ? (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                               >> 0x23U))
                                    : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [2U] 
                                               >> 0x23U)))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x22U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [2U] 
                                                             >> 0x22U)))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                             ? (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                        >> 0x21U))
                                                             : (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                                        [3U]
                                                                        [2U] 
                                                                        >> 0x21U)))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [3U]
                                                                         [2U] 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [3U]
                                                                         [2U] 
                                                                         >> 0x1fU))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                    ? (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                               >> 0x1eU))
                                                                    : (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__i
                                                                               [3U]
                                                                               [2U] 
                                                                               >> 0x1eU))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                       ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                       : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1dU))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                          ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                          : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1cU))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                             ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                             : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1bU))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1aU))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x18U))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x17U))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U]))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                    ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U) : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x23U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [2U] 
                                                             >> 0x23U))))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                   ? (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                              >> 0x22U))
                                                   : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [2U] 
                                                              >> 0x22U))))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                             ? 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                                             >> 1U)
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x21U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [3U]
                                                                         [2U] 
                                                                         >> 0x21U))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x20U))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [3U]
                                                                          [2U] 
                                                                          >> 0x20U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? 
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                              >> 0x1fU)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x1fU))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [3U]
                                                                          [2U] 
                                                                          >> 0x1fU)))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                    ? 
                                                                   (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                    >> 0x1eU)
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                     ? (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1eU))
                                                                     : (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1eU)))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                       ? 
                                                                      (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                       >> 0x1dU)
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                        ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                        : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1dU)))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                          ? 
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                          >> 0x1cU)
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                           ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                           : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1cU)))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                             ? 
                                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                             >> 0x1bU)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                              ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                              : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1bU)))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                ? 
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x1aU)
                                                                                : 
                                                                               ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x1aU)))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 9U)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 8U)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 7U)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 6U)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 5U)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 4U)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 3U)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 2U)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U] 
                                                                                >> 1U)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [2U])))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__done_switch[3U][2U] 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg) 
                    | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_v_reg) 
                       | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg) 
                          | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v) 
                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v) 
                                | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                   | ((IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [3U]
                                               [2U] 
                                               >> 0x24U)) 
                                      | ((IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [3U]
                                                  [2U] 
                                                  >> 0x24U)) 
                                         | ((IData)(
                                                    (vlSelfRef.top__DOT__dut__DOT__w
                                                     [3U]
                                                     [2U] 
                                                     >> 0x24U)) 
                                            | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_v_c)))))))))))));
    vlSelfRef.top__DOT__dut__DOT__i_ack[3U][2U] = vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__i_ack;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                    ? (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                               >> 0x23U))
                                    : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [3U] 
                                               >> 0x23U)))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x22U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [3U] 
                                                             >> 0x22U)))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                             ? (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                        >> 0x21U))
                                                             : (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                                        [0U]
                                                                        [3U] 
                                                                        >> 0x21U)))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [0U]
                                                                         [3U] 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [0U]
                                                                         [3U] 
                                                                         >> 0x1fU))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                    ? (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                               >> 0x1eU))
                                                                    : (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__i
                                                                               [0U]
                                                                               [3U] 
                                                                               >> 0x1eU))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                       ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                       : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                          ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                          : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1cU))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                             ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                             : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1bU))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1aU))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x18U))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U]))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                    ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U) : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x23U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [3U] 
                                                             >> 0x23U))))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                   ? (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                              >> 0x22U))
                                                   : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [3U] 
                                                              >> 0x22U))))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                             ? 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                                             >> 1U)
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x21U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [0U]
                                                                         [3U] 
                                                                         >> 0x21U))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x20U))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [0U]
                                                                          [3U] 
                                                                          >> 0x20U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? 
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                              >> 0x1fU)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x1fU))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [0U]
                                                                          [3U] 
                                                                          >> 0x1fU)))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                    ? 
                                                                   (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                    >> 0x1eU)
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                     ? (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1eU))
                                                                     : (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                       ? 
                                                                      (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                       >> 0x1dU)
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                        ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                        : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU)))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                          ? 
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                          >> 0x1cU)
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                           ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                           : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1cU)))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                             ? 
                                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                             >> 0x1bU)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                              ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                              : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1bU)))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                ? 
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x1aU)
                                                                                : 
                                                                               ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1aU)))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 9U)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 8U)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 7U)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 6U)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 5U)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 4U)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 3U)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 2U)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 1U)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [0U]
                                                                                [3U])))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__done_switch[0U][3U] 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg) 
                    | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_v_reg) 
                       | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg) 
                          | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v) 
                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v) 
                                | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                   | ((IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [0U]
                                               [3U] 
                                               >> 0x24U)) 
                                      | ((IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [3U] 
                                                  >> 0x24U)) 
                                         | ((IData)(
                                                    (vlSelfRef.top__DOT__dut__DOT__w
                                                     [0U]
                                                     [3U] 
                                                     >> 0x24U)) 
                                            | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_v_c)))))))))))));
    vlSelfRef.top__DOT__dut__DOT__i_ack[0U][3U] = vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__i_ack;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                    ? (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                               >> 0x23U))
                                    : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [3U] 
                                               >> 0x23U)))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x22U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [3U] 
                                                             >> 0x22U)))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                             ? (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                        >> 0x21U))
                                                             : (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                                        [1U]
                                                                        [3U] 
                                                                        >> 0x21U)))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [1U]
                                                                         [3U] 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [1U]
                                                                         [3U] 
                                                                         >> 0x1fU))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                    ? (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                               >> 0x1eU))
                                                                    : (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__i
                                                                               [1U]
                                                                               [3U] 
                                                                               >> 0x1eU))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                       ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                       : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1dU))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                          ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                          : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1cU))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                             ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                             : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1bU))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1aU))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x18U))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x17U))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U]))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                    ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U) : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x23U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [3U] 
                                                             >> 0x23U))))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                   ? (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                              >> 0x22U))
                                                   : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [3U] 
                                                              >> 0x22U))))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                             ? 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                                             >> 1U)
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x21U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [1U]
                                                                         [3U] 
                                                                         >> 0x21U))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x20U))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [1U]
                                                                          [3U] 
                                                                          >> 0x20U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? 
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                              >> 0x1fU)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x1fU))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [1U]
                                                                          [3U] 
                                                                          >> 0x1fU)))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                    ? 
                                                                   (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                    >> 0x1eU)
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                     ? (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1eU))
                                                                     : (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                       ? 
                                                                      (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                       >> 0x1dU)
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                        ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                        : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1dU)))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                          ? 
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                          >> 0x1cU)
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                           ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                           : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1cU)))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                             ? 
                                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                             >> 0x1bU)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                              ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                              : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1bU)))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                ? 
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x1aU)
                                                                                : 
                                                                               ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1aU)))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 9U)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 8U)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 7U)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 6U)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 5U)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 4U)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 3U)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 2U)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 1U)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [1U]
                                                                                [3U])))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__done_switch[1U][3U] 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg) 
                    | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_v_reg) 
                       | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg) 
                          | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v) 
                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v) 
                                | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                   | ((IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [1U]
                                               [3U] 
                                               >> 0x24U)) 
                                      | ((IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [3U] 
                                                  >> 0x24U)) 
                                         | ((IData)(
                                                    (vlSelfRef.top__DOT__dut__DOT__w
                                                     [1U]
                                                     [3U] 
                                                     >> 0x24U)) 
                                            | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_v_c)))))))))))));
    vlSelfRef.top__DOT__dut__DOT__i_ack[1U][3U] = vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                    ? (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                               >> 0x23U))
                                    : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [3U] 
                                               >> 0x23U)))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x22U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [3U] 
                                                             >> 0x22U)))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                             ? (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                        >> 0x21U))
                                                             : (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                                        [2U]
                                                                        [3U] 
                                                                        >> 0x21U)))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [2U]
                                                                         [3U] 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [2U]
                                                                         [3U] 
                                                                         >> 0x1fU))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                    ? (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                               >> 0x1eU))
                                                                    : (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__i
                                                                               [2U]
                                                                               [3U] 
                                                                               >> 0x1eU))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                       ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                       : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1dU))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                          ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                          : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1cU))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                             ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                             : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1bU))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1aU))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x18U))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x17U))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U]))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                    ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U) : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x23U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [3U] 
                                                             >> 0x23U))))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                   ? (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                              >> 0x22U))
                                                   : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [3U] 
                                                              >> 0x22U))))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                             ? 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                                             >> 1U)
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x21U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [2U]
                                                                         [3U] 
                                                                         >> 0x21U))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x20U))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [2U]
                                                                          [3U] 
                                                                          >> 0x20U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? 
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                              >> 0x1fU)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x1fU))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [2U]
                                                                          [3U] 
                                                                          >> 0x1fU)))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                    ? 
                                                                   (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                    >> 0x1eU)
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                     ? (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1eU))
                                                                     : (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                       ? 
                                                                      (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                       >> 0x1dU)
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                        ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                        : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1dU)))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                          ? 
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                          >> 0x1cU)
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                           ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                           : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1cU)))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                             ? 
                                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                             >> 0x1bU)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                              ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                              : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1bU)))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                ? 
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x1aU)
                                                                                : 
                                                                               ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1aU)))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 9U)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 8U)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 7U)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 6U)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 5U)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 4U)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 3U)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 2U)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 1U)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [2U]
                                                                                [3U])))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__done_switch[2U][3U] 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg) 
                    | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_v_reg) 
                       | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg) 
                          | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v) 
                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v) 
                                | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                   | ((IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [2U]
                                               [3U] 
                                               >> 0x24U)) 
                                      | ((IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [2U]
                                                  [3U] 
                                                  >> 0x24U)) 
                                         | ((IData)(
                                                    (vlSelfRef.top__DOT__dut__DOT__w
                                                     [2U]
                                                     [3U] 
                                                     >> 0x24U)) 
                                            | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_v_c)))))))))))));
    vlSelfRef.top__DOT__dut__DOT__i_ack[2U][3U] = vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__i_ack;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                    ? (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                               >> 0x23U))
                                    : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [3U] 
                                               >> 0x23U)))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x22U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [3U] 
                                                             >> 0x22U)))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                             ? (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                        >> 0x21U))
                                                             : (IData)(
                                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                                        [3U]
                                                                        [3U] 
                                                                        >> 0x21U)))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x20U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [3U]
                                                                         [3U] 
                                                                         >> 0x20U)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x1fU))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [3U]
                                                                         [3U] 
                                                                         >> 0x1fU))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                    ? (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                               >> 0x1eU))
                                                                    : (IData)(
                                                                              (vlSelfRef.top__DOT__dut__DOT__i
                                                                               [3U]
                                                                               [3U] 
                                                                               >> 0x1eU))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                       ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                       : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1dU))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                          ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                          : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1cU))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                             ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                             : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1bU))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1aU))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x19U))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x18U))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x17U))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x16U))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x15U))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x14U))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x13U))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x12U))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x11U))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x10U))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xfU))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xeU))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xdU))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xcU))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xbU))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xaU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 9U))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 8U))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 7U))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 6U))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 5U))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 4U))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 3U))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 2U))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 1U))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U]))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg 
        = (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                    ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U) : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                  ? (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                             >> 0x23U))
                                                  : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [3U] 
                                                             >> 0x23U))))))) 
            << 0x23U) | (((QData)((IData)((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                  ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                   ? (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                              >> 0x22U))
                                                   : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [3U] 
                                                              >> 0x22U))))))) 
                          << 0x22U) | (((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                             ? 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                                             >> 1U)
                                                             : 
                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                              ? (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                         >> 0x21U))
                                                              : (IData)(
                                                                        (vlSelfRef.top__DOT__dut__DOT__i
                                                                         [3U]
                                                                         [3U] 
                                                                         >> 0x21U))))))) 
                                        << 0x21U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x20U))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [3U]
                                                                          [3U] 
                                                                          >> 0x20U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                              ? 
                                                             (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                              >> 0x1fU)
                                                              : 
                                                             ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                               ? (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                          >> 0x1fU))
                                                               : (IData)(
                                                                         (vlSelfRef.top__DOT__dut__DOT__i
                                                                          [3U]
                                                                          [3U] 
                                                                          >> 0x1fU)))) 
                                                            << 0x1fU) 
                                                           | ((0x40000000U 
                                                               & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                    ? 
                                                                   (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                    >> 0x1eU)
                                                                    : 
                                                                   ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                     ? (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1eU))
                                                                     : (IData)(
                                                                               (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1eU)))) 
                                                                  << 0x1eU)) 
                                                              | ((0x20000000U 
                                                                  & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                       ? 
                                                                      (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                       >> 0x1dU)
                                                                       : 
                                                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                        ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1dU))
                                                                        : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1dU)))) 
                                                                     << 0x1dU)) 
                                                                 | ((0x10000000U 
                                                                     & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                          ? 
                                                                         (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                          >> 0x1cU)
                                                                          : 
                                                                         ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                           ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1cU))
                                                                           : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1cU)))) 
                                                                        << 0x1cU)) 
                                                                    | ((0x8000000U 
                                                                        & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                             ? 
                                                                            (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                             >> 0x1bU)
                                                                             : 
                                                                            ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                              ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1bU))
                                                                              : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1bU)))) 
                                                                           << 0x1bU)) 
                                                                       | ((0x4000000U 
                                                                           & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                ? 
                                                                               (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x1aU)
                                                                                : 
                                                                               ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x1aU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1aU)))) 
                                                                              << 0x1aU)) 
                                                                          | ((0x2000000U 
                                                                              & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x19U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x19U)))) 
                                                                                << 0x19U)) 
                                                                             | ((0x1000000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x18U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x18U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x17U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x17U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x16U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x16U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x15U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x15U)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x14U)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x13U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x13U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x12U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x12U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x11U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x11U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0x10U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x10U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xfU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xfU)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xeU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xeU)))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xdU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xdU)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xcU)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xbU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xbU)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 0xaU))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xaU)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 9U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 9U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 9U)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 8U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 8U)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 7U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 7U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 7U)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 6U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 6U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 6U)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 5U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 5U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 5U)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 4U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 4U)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 3U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 3U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 3U)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 2U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 2U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 2U)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? 
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 1U)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                                                                 ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                                                                 : 
                                                                                ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                                                                 ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c)
                                                                                 : (IData)(
                                                                                vlSelfRef.top__DOT__dut__DOT__i
                                                                                [3U]
                                                                                [3U])))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.top__DOT__dut__DOT__done_switch[3U][3U] 
        = (1U & (~ ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg) 
                    | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_v_reg) 
                       | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg) 
                          | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v) 
                             | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v) 
                                | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                   | ((IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [3U]
                                               [3U] 
                                               >> 0x24U)) 
                                      | ((IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [3U]
                                                  [3U] 
                                                  >> 0x24U)) 
                                         | ((IData)(
                                                    (vlSelfRef.top__DOT__dut__DOT__w
                                                     [3U]
                                                     [3U] 
                                                     >> 0x24U)) 
                                            | ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_v_c)))))))))))));
    vlSelfRef.top__DOT__dut__DOT__i_ack[3U][3U] = vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__i_ack;
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        vlSelfRef.top__DOT__dut__DOT__done_switch[0U]
        [0U];
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [0U][1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [0U][2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [0U][3U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [1U][0U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [1U][1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [1U][2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [1U][3U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [2U][0U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [2U][1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [2U][2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [2U][3U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [3U][0U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [3U][1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [3U][2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_switch = 
        ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch) 
         & vlSelfRef.top__DOT__dut__DOT__done_switch
         [3U][3U]);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [0U][0U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [1U][0U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [2U][0U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [3U][0U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [0U][1U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [1U][1U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [2U][1U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [3U][1U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [0U][2U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [1U][2U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [2U][2U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [3U][2U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [0U][3U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [1U][3U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [2U][3U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume 
        = ((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens)) 
           & (((~ (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack)) 
               | (vlSelfRef.top__DOT__dut__DOT__i_ack
                  [3U][3U] & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack))) 
              & VL_GTS_III(32, 0xcU, vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num)));
    vlSelfRef.top__DOT__done = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                & (IData)(vlSelfRef.top__DOT__dut__DOT__done_all_switch));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vm_traceActivitySetAll\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__i[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__e[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__s[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__w[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__n[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__e_tx[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__s_tx[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__e_b[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__w_b[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__w_b_tx[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__o_v[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__i_ack[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__i_vc[__Vi0][__Vi1] = VL_RAND_RESET_I(3);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__done_pe[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__done_switch[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->top__DOT__dut__DOT__done_all_pe = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__done_all_switch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT____Vcellout__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__i_ack = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    for (int __Vi0 = 0; __Vi0 < 192; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_vc_r = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_x_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_y_r = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_d_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__done_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_v_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b_c = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_d_c = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_v_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__o_b_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s0__DOT__s_d_r = VL_RAND_RESET_Q(36);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
