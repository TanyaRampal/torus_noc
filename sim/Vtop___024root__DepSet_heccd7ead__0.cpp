// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffffffbffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffffff7ffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fffffefffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fffffdfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fffffbfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fffff7fffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffffeffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffffdffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffffbffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffff7ffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fffefffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fffdfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fffbfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fff7fffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffeffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffdffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ffbffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1ff7ffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fefffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fdfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1fbfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1f7fffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1effffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1dffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x1bffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0x17ffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[0U][3U] = ((0xfffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [0U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [0U]
                                                                                [3U] 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffffffeULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               vlSelfRef.top__DOT__dut__DOT__s
                                                                               [1U]
                                                                               [3U])))));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffffffdULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 1U))))) 
                                                     << 1U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffffffbULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 2U))))) 
                                                     << 2U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffffff7ULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 3U))))) 
                                                     << 3U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffffffefULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 4U))))) 
                                                     << 4U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffffffdfULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 5U))))) 
                                                     << 5U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffffffbfULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 6U))))) 
                                                     << 6U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffffff7fULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 7U))))) 
                                                     << 7U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffffeffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 8U))))) 
                                                     << 8U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffffdffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 9U))))) 
                                                     << 9U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffffbffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffff7ffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffffefffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffffdfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffffbfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffff7fffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffeffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffdffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffffbffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffff7ffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffefffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffdfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fffbfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fff7fffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffeffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffdffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ffbffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1ff7ffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fefffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fdfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1fbfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1f7fffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1effffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1dffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x1bffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0x17ffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[1U][3U] = ((0xfffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [1U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [1U]
                                                                                [3U] 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffffffeULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               vlSelfRef.top__DOT__dut__DOT__s
                                                                               [2U]
                                                                               [3U])))));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffffffdULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 1U))))) 
                                                     << 1U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffffffbULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 2U))))) 
                                                     << 2U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffffff7ULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 3U))))) 
                                                     << 3U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffffffefULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 4U))))) 
                                                     << 4U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffffffdfULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 5U))))) 
                                                     << 5U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffffffbfULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 6U))))) 
                                                     << 6U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffffff7fULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 7U))))) 
                                                     << 7U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffffeffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 8U))))) 
                                                     << 8U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffffdffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 9U))))) 
                                                     << 9U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffffbffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffff7ffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffffefffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffffdfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffffbfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffff7fffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffeffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffdffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffffbffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffff7ffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffefffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffdfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fffbfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fff7fffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffeffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffdffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ffbffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1ff7ffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fefffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fdfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1fbfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1f7fffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1effffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1dffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x1bffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0x17ffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[2U][3U] = ((0xfffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [2U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [2U]
                                                                                [3U] 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffffffeULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               vlSelfRef.top__DOT__dut__DOT__s
                                                                               [3U]
                                                                               [3U])))));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffffffdULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 1U))))) 
                                                     << 1U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffffffbULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 2U))))) 
                                                     << 2U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffffff7ULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 3U))))) 
                                                     << 3U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffffffefULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 4U))))) 
                                                     << 4U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffffffdfULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 5U))))) 
                                                     << 5U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffffffbfULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 6U))))) 
                                                     << 6U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffffff7fULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 7U))))) 
                                                     << 7U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffffeffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 8U))))) 
                                                     << 8U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffffdffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 9U))))) 
                                                     << 9U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffffbffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xaU))))) 
                                                     << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffff7ffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xbU))))) 
                                                     << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffffefffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xcU))))) 
                                                     << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffffdfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xdU))))) 
                                                     << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffffbfffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xeU))))) 
                                                     << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffff7fffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0xfU))))) 
                                                     << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffeffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x10U))))) 
                                                     << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffdffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x11U))))) 
                                                     << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffffbffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x12U))))) 
                                                     << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffff7ffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x13U))))) 
                                                     << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffefffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x14U))))) 
                                                     << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffdfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x15U))))) 
                                                     << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fffbfffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x16U))))) 
                                                     << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fff7fffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x17U))))) 
                                                     << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffeffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x18U))))) 
                                                     << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffdffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x19U))))) 
                                                     << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ffbffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1aU))))) 
                                                     << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1ff7ffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1bU))))) 
                                                     << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fefffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1cU))))) 
                                                     << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fdfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1dU))))) 
                                                     << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1fbfffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1eU))))) 
                                                     << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1f7fffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x1fU))))) 
                                                     << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1effffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x20U))))) 
                                                     << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1dffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x21U))))) 
                                                     << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x1bffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x22U))))) 
                                                     << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0x17ffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x23U))))) 
                                                     << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__s_tx[3U][3U] = ((0xfffffffffULL 
                                                   & vlSelfRef.top__DOT__dut__DOT__s_tx
                                                   [3U]
                                                   [3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelfRef.top__DOT__dut__DOT__s
                                                                                [3U]
                                                                                [3U] 
                                                                                >> 0x24U))))) 
                                                     << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = vlSelfRef.top__DOT__dut__DOT__done_pe
        [0U][0U];
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [0U]
                                                 [1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [0U]
                                                 [2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [0U]
                                                 [3U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [1U]
                                                 [0U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [1U]
                                                 [1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [1U]
                                                 [2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [1U]
                                                 [3U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [2U]
                                                 [0U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [2U]
                                                 [1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [2U]
                                                 [2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [2U]
                                                 [3U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [3U]
                                                 [0U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [3U]
                                                 [1U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [3U]
                                                 [2U]);
    vlSelfRef.top__DOT__dut__DOT__done_all_pe = ((IData)(vlSelfRef.top__DOT__dut__DOT__done_all_pe) 
                                                 & vlSelfRef.top__DOT__dut__DOT__done_pe
                                                 [3U]
                                                 [3U]);
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [0U]
                                                                            [3U])))));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][0U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [3U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [1U]
                                                                            [3U])))));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][0U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [3U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [2U]
                                                                            [3U])))));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][0U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [3U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [3U]
                                                                            [3U])))));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][0U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [0U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [3U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [0U]
                                                                            [0U])))));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][1U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [0U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [1U]
                                                                            [0U])))));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][1U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [0U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [2U]
                                                                            [0U])))));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][1U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [0U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [3U]
                                                                            [0U])))));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][1U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [1U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [0U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [0U]
                                                                            [1U])))));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][2U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [1U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [1U]
                                                                            [1U])))));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][2U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [1U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [2U]
                                                                            [1U])))));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][2U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [1U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [3U]
                                                                            [1U])))));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][2U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [2U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [1U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [0U]
                                                                            [2U])))));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[0U][3U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [0U]
                                                                              [2U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [1U]
                                                                            [2U])))));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[1U][3U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [1U]
                                                                              [2U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [2U]
                                                                            [2U])))));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[2U][3U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [2U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [2U]
                                                                              [2U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffffffeULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | (IData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                            [3U]
                                                                            [2U])))));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffffffdULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 1U))))) 
                                                  << 1U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffffffbULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 2U))))) 
                                                  << 2U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffffff7ULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 3U))))) 
                                                  << 3U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffffffefULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 4U))))) 
                                                  << 4U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffffffdfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 5U))))) 
                                                  << 5U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffffffbfULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 6U))))) 
                                                  << 6U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffffff7fULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 7U))))) 
                                                  << 7U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffffeffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 8U))))) 
                                                  << 8U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffffdffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 9U))))) 
                                                  << 9U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffffbffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0xaU))))) 
                                                  << 0xaU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffff7ffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0xbU))))) 
                                                  << 0xbU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffffefffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0xcU))))) 
                                                  << 0xcU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffffdfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0xdU))))) 
                                                  << 0xdU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffffbfffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0xeU))))) 
                                                  << 0xeU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffff7fffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0xfU))))) 
                                                  << 0xfU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffeffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x10U))))) 
                                                  << 0x10U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffdffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x11U))))) 
                                                  << 0x11U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffffbffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x12U))))) 
                                                  << 0x12U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffff7ffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x13U))))) 
                                                  << 0x13U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffefffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x14U))))) 
                                                  << 0x14U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffdfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x15U))))) 
                                                  << 0x15U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fffbfffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x16U))))) 
                                                  << 0x16U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fff7fffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x17U))))) 
                                                  << 0x17U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffeffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x18U))))) 
                                                  << 0x18U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffdffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x19U))))) 
                                                  << 0x19U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ffbffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x1aU))))) 
                                                  << 0x1aU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1ff7ffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x1bU))))) 
                                                  << 0x1bU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fefffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x1cU))))) 
                                                  << 0x1cU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fdfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x1dU))))) 
                                                  << 0x1dU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1fbfffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x1eU))))) 
                                                  << 0x1eU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1f7fffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x1fU));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1effffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x20U))))) 
                                                  << 0x20U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1dffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x21U))))) 
                                                  << 0x21U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x1bffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x22U))))) 
                                                  << 0x22U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0x17ffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x23U))))) 
                                                  << 0x23U));
    vlSelfRef.top__DOT__dut__DOT__n[3U][3U] = ((0xfffffffffULL 
                                                & vlSelfRef.top__DOT__dut__DOT__n
                                                [3U]
                                                [3U]) 
                                               | ((QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.top__DOT__dut__DOT__s_tx
                                                                              [3U]
                                                                              [2U] 
                                                                              >> 0x24U))))) 
                                                  << 0x24U));
}
