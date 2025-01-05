// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0_sub_1(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0_sub_2(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
    Vtop___024root__trace_chg_0_sub_2((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__cycle_num),32);
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__done_r));
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__done));
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__dut__DOT__o_v
                             [0U][0U]));
        bufp->chgIData(oldp+4,((IData)(vlSelfRef.top__DOT__dut__DOT__s
                                       [0U][0U])),32);
        bufp->chgQData(oldp+5,(vlSelfRef.top__DOT__dut__DOT__i
                               [0U][0U]),37);
        bufp->chgQData(oldp+7,(vlSelfRef.top__DOT__dut__DOT__i
                               [0U][1U]),37);
        bufp->chgQData(oldp+9,(vlSelfRef.top__DOT__dut__DOT__i
                               [0U][2U]),37);
        bufp->chgQData(oldp+11,(vlSelfRef.top__DOT__dut__DOT__i
                                [0U][3U]),37);
        bufp->chgQData(oldp+13,(vlSelfRef.top__DOT__dut__DOT__i
                                [1U][0U]),37);
        bufp->chgQData(oldp+15,(vlSelfRef.top__DOT__dut__DOT__i
                                [1U][1U]),37);
        bufp->chgQData(oldp+17,(vlSelfRef.top__DOT__dut__DOT__i
                                [1U][2U]),37);
        bufp->chgQData(oldp+19,(vlSelfRef.top__DOT__dut__DOT__i
                                [1U][3U]),37);
        bufp->chgQData(oldp+21,(vlSelfRef.top__DOT__dut__DOT__i
                                [2U][0U]),37);
        bufp->chgQData(oldp+23,(vlSelfRef.top__DOT__dut__DOT__i
                                [2U][1U]),37);
        bufp->chgQData(oldp+25,(vlSelfRef.top__DOT__dut__DOT__i
                                [2U][2U]),37);
        bufp->chgQData(oldp+27,(vlSelfRef.top__DOT__dut__DOT__i
                                [2U][3U]),37);
        bufp->chgQData(oldp+29,(vlSelfRef.top__DOT__dut__DOT__i
                                [3U][0U]),37);
        bufp->chgQData(oldp+31,(vlSelfRef.top__DOT__dut__DOT__i
                                [3U][1U]),37);
        bufp->chgQData(oldp+33,(vlSelfRef.top__DOT__dut__DOT__i
                                [3U][2U]),37);
        bufp->chgQData(oldp+35,(vlSelfRef.top__DOT__dut__DOT__i
                                [3U][3U]),37);
        bufp->chgQData(oldp+37,(vlSelfRef.top__DOT__dut__DOT__s
                                [0U][0U]),37);
        bufp->chgQData(oldp+39,(vlSelfRef.top__DOT__dut__DOT__s
                                [0U][1U]),37);
        bufp->chgQData(oldp+41,(vlSelfRef.top__DOT__dut__DOT__s
                                [0U][2U]),37);
        bufp->chgQData(oldp+43,(vlSelfRef.top__DOT__dut__DOT__s
                                [0U][3U]),37);
        bufp->chgQData(oldp+45,(vlSelfRef.top__DOT__dut__DOT__s
                                [1U][0U]),37);
        bufp->chgQData(oldp+47,(vlSelfRef.top__DOT__dut__DOT__s
                                [1U][1U]),37);
        bufp->chgQData(oldp+49,(vlSelfRef.top__DOT__dut__DOT__s
                                [1U][2U]),37);
        bufp->chgQData(oldp+51,(vlSelfRef.top__DOT__dut__DOT__s
                                [1U][3U]),37);
        bufp->chgQData(oldp+53,(vlSelfRef.top__DOT__dut__DOT__s
                                [2U][0U]),37);
        bufp->chgQData(oldp+55,(vlSelfRef.top__DOT__dut__DOT__s
                                [2U][1U]),37);
        bufp->chgQData(oldp+57,(vlSelfRef.top__DOT__dut__DOT__s
                                [2U][2U]),37);
        bufp->chgQData(oldp+59,(vlSelfRef.top__DOT__dut__DOT__s
                                [2U][3U]),37);
        bufp->chgQData(oldp+61,(vlSelfRef.top__DOT__dut__DOT__s
                                [3U][0U]),37);
        bufp->chgQData(oldp+63,(vlSelfRef.top__DOT__dut__DOT__s
                                [3U][1U]),37);
        bufp->chgQData(oldp+65,(vlSelfRef.top__DOT__dut__DOT__s
                                [3U][2U]),37);
        bufp->chgQData(oldp+67,(vlSelfRef.top__DOT__dut__DOT__s
                                [3U][3U]),37);
        bufp->chgQData(oldp+69,(vlSelfRef.top__DOT__dut__DOT__n
                                [0U][0U]),37);
        bufp->chgQData(oldp+71,(vlSelfRef.top__DOT__dut__DOT__n
                                [0U][1U]),37);
        bufp->chgQData(oldp+73,(vlSelfRef.top__DOT__dut__DOT__n
                                [0U][2U]),37);
        bufp->chgQData(oldp+75,(vlSelfRef.top__DOT__dut__DOT__n
                                [0U][3U]),37);
        bufp->chgQData(oldp+77,(vlSelfRef.top__DOT__dut__DOT__n
                                [1U][0U]),37);
        bufp->chgQData(oldp+79,(vlSelfRef.top__DOT__dut__DOT__n
                                [1U][1U]),37);
        bufp->chgQData(oldp+81,(vlSelfRef.top__DOT__dut__DOT__n
                                [1U][2U]),37);
        bufp->chgQData(oldp+83,(vlSelfRef.top__DOT__dut__DOT__n
                                [1U][3U]),37);
        bufp->chgQData(oldp+85,(vlSelfRef.top__DOT__dut__DOT__n
                                [2U][0U]),37);
        bufp->chgQData(oldp+87,(vlSelfRef.top__DOT__dut__DOT__n
                                [2U][1U]),37);
        bufp->chgQData(oldp+89,(vlSelfRef.top__DOT__dut__DOT__n
                                [2U][2U]),37);
        bufp->chgQData(oldp+91,(vlSelfRef.top__DOT__dut__DOT__n
                                [2U][3U]),37);
        bufp->chgQData(oldp+93,(vlSelfRef.top__DOT__dut__DOT__n
                                [3U][0U]),37);
        bufp->chgQData(oldp+95,(vlSelfRef.top__DOT__dut__DOT__n
                                [3U][1U]),37);
        bufp->chgQData(oldp+97,(vlSelfRef.top__DOT__dut__DOT__n
                                [3U][2U]),37);
        bufp->chgQData(oldp+99,(vlSelfRef.top__DOT__dut__DOT__n
                                [3U][3U]),37);
        bufp->chgQData(oldp+101,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [0U][0U]),37);
        bufp->chgQData(oldp+103,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [0U][1U]),37);
        bufp->chgQData(oldp+105,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [0U][2U]),37);
        bufp->chgQData(oldp+107,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [0U][3U]),37);
        bufp->chgQData(oldp+109,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [1U][0U]),37);
        bufp->chgQData(oldp+111,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [1U][1U]),37);
        bufp->chgQData(oldp+113,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [1U][2U]),37);
        bufp->chgQData(oldp+115,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [1U][3U]),37);
        bufp->chgQData(oldp+117,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [2U][0U]),37);
        bufp->chgQData(oldp+119,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [2U][1U]),37);
        bufp->chgQData(oldp+121,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [2U][2U]),37);
        bufp->chgQData(oldp+123,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [2U][3U]),37);
        bufp->chgQData(oldp+125,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [3U][0U]),37);
        bufp->chgQData(oldp+127,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [3U][1U]),37);
        bufp->chgQData(oldp+129,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [3U][2U]),37);
        bufp->chgQData(oldp+131,(vlSelfRef.top__DOT__dut__DOT__s_tx
                                 [3U][3U]),37);
        bufp->chgBit(oldp+133,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [0U][0U]));
        bufp->chgBit(oldp+134,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [0U][1U]));
        bufp->chgBit(oldp+135,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [0U][2U]));
        bufp->chgBit(oldp+136,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [0U][3U]));
        bufp->chgBit(oldp+137,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [1U][0U]));
        bufp->chgBit(oldp+138,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [1U][1U]));
        bufp->chgBit(oldp+139,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [1U][2U]));
        bufp->chgBit(oldp+140,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [1U][3U]));
        bufp->chgBit(oldp+141,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [2U][0U]));
        bufp->chgBit(oldp+142,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [2U][1U]));
        bufp->chgBit(oldp+143,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [2U][2U]));
        bufp->chgBit(oldp+144,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [2U][3U]));
        bufp->chgBit(oldp+145,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [3U][0U]));
        bufp->chgBit(oldp+146,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [3U][1U]));
        bufp->chgBit(oldp+147,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [3U][2U]));
        bufp->chgBit(oldp+148,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [3U][3U]));
        bufp->chgBit(oldp+149,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [0U][0U]));
        bufp->chgBit(oldp+150,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [0U][1U]));
        bufp->chgBit(oldp+151,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [0U][2U]));
        bufp->chgBit(oldp+152,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [0U][3U]));
        bufp->chgBit(oldp+153,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [1U][0U]));
        bufp->chgBit(oldp+154,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [1U][1U]));
        bufp->chgBit(oldp+155,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [1U][2U]));
        bufp->chgBit(oldp+156,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [1U][3U]));
        bufp->chgBit(oldp+157,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [2U][0U]));
        bufp->chgBit(oldp+158,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [2U][1U]));
        bufp->chgBit(oldp+159,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [2U][2U]));
        bufp->chgBit(oldp+160,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [2U][3U]));
        bufp->chgBit(oldp+161,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [3U][0U]));
        bufp->chgBit(oldp+162,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [3U][1U]));
        bufp->chgBit(oldp+163,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [3U][2U]));
        bufp->chgBit(oldp+164,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [3U][3U]));
        bufp->chgCData(oldp+165,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [0U][0U]),3);
        bufp->chgCData(oldp+166,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [0U][1U]),3);
        bufp->chgCData(oldp+167,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [0U][2U]),3);
        bufp->chgCData(oldp+168,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [0U][3U]),3);
        bufp->chgCData(oldp+169,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [1U][0U]),3);
        bufp->chgCData(oldp+170,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [1U][1U]),3);
        bufp->chgCData(oldp+171,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [1U][2U]),3);
        bufp->chgCData(oldp+172,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [1U][3U]),3);
        bufp->chgCData(oldp+173,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [2U][0U]),3);
        bufp->chgCData(oldp+174,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [2U][1U]),3);
        bufp->chgCData(oldp+175,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [2U][2U]),3);
        bufp->chgCData(oldp+176,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [2U][3U]),3);
        bufp->chgCData(oldp+177,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [3U][0U]),3);
        bufp->chgCData(oldp+178,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [3U][1U]),3);
        bufp->chgCData(oldp+179,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [3U][2U]),3);
        bufp->chgCData(oldp+180,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [3U][3U]),3);
        bufp->chgBit(oldp+181,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [0U][0U]));
        bufp->chgBit(oldp+182,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [0U][1U]));
        bufp->chgBit(oldp+183,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [0U][2U]));
        bufp->chgBit(oldp+184,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [0U][3U]));
        bufp->chgBit(oldp+185,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [1U][0U]));
        bufp->chgBit(oldp+186,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [1U][1U]));
        bufp->chgBit(oldp+187,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [1U][2U]));
        bufp->chgBit(oldp+188,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [1U][3U]));
        bufp->chgBit(oldp+189,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [2U][0U]));
        bufp->chgBit(oldp+190,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [2U][1U]));
        bufp->chgBit(oldp+191,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [2U][2U]));
        bufp->chgBit(oldp+192,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [2U][3U]));
        bufp->chgBit(oldp+193,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [3U][0U]));
        bufp->chgBit(oldp+194,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [3U][1U]));
        bufp->chgBit(oldp+195,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [3U][2U]));
        bufp->chgBit(oldp+196,(vlSelfRef.top__DOT__dut__DOT__done_pe
                               [3U][3U]));
        bufp->chgBit(oldp+197,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [0U][0U]));
        bufp->chgBit(oldp+198,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [0U][1U]));
        bufp->chgBit(oldp+199,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [0U][2U]));
        bufp->chgBit(oldp+200,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [0U][3U]));
        bufp->chgBit(oldp+201,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [1U][0U]));
        bufp->chgBit(oldp+202,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [1U][1U]));
        bufp->chgBit(oldp+203,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [1U][2U]));
        bufp->chgBit(oldp+204,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [1U][3U]));
        bufp->chgBit(oldp+205,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [2U][0U]));
        bufp->chgBit(oldp+206,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [2U][1U]));
        bufp->chgBit(oldp+207,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [2U][2U]));
        bufp->chgBit(oldp+208,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [2U][3U]));
        bufp->chgBit(oldp+209,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [3U][0U]));
        bufp->chgBit(oldp+210,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [3U][1U]));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [3U][2U]));
        bufp->chgBit(oldp+212,(vlSelfRef.top__DOT__dut__DOT__done_switch
                               [3U][3U]));
        bufp->chgBit(oldp+213,(vlSelfRef.top__DOT__dut__DOT__done_all_pe));
        bufp->chgBit(oldp+214,(vlSelfRef.top__DOT__dut__DOT__done_all_switch));
        bufp->chgBit(oldp+215,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [0U][0U]));
        bufp->chgBit(oldp+216,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_v_r));
        bufp->chgCData(oldp+217,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_vc_r),3);
        bufp->chgCData(oldp+218,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_x_r),2);
        bufp->chgCData(oldp+219,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_y_r),2);
        bufp->chgIData(oldp+220,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_d_r),32);
        bufp->chgBit(oldp+221,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__done_r));
        bufp->chgCData(oldp+222,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                [0U]
                                                [0U] 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+223,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                [0U]
                                                [0U] 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+224,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num),32);
        bufp->chgBit(oldp+225,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume));
        bufp->chgBit(oldp+226,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens))));
        bufp->chgIData(oldp+227,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num),32);
        bufp->chgBit(oldp+228,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack));
        bufp->chgCData(oldp+229,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens),3);
        bufp->chgCData(oldp+230,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter),4);
        bufp->chgBit(oldp+231,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet))));
        bufp->chgBit(oldp+232,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet))));
        bufp->chgBit(oldp+233,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 1U)))));
        bufp->chgBit(oldp+234,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 1U)))));
        bufp->chgBit(oldp+235,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 2U)))));
        bufp->chgBit(oldp+236,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 2U)))));
        bufp->chgBit(oldp+237,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 3U)))));
        bufp->chgBit(oldp+238,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 3U)))));
        bufp->chgBit(oldp+239,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 4U)))));
        bufp->chgBit(oldp+240,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 4U)))));
        bufp->chgBit(oldp+241,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+242,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+243,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+244,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+245,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+246,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+247,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+248,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+249,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+250,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+251,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+252,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+253,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+254,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+255,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+256,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+257,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+258,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+259,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+260,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+261,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 5U)))));
        bufp->chgBit(oldp+262,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 5U)))));
        bufp->chgBit(oldp+263,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+264,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+265,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+266,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+267,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+268,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+269,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+270,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+271,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+272,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+273,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+274,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+275,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+276,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+277,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+278,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+279,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+280,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+281,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+282,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+283,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 6U)))));
        bufp->chgBit(oldp+284,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 6U)))));
        bufp->chgBit(oldp+285,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+286,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+287,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+288,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+289,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 7U)))));
        bufp->chgBit(oldp+290,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 7U)))));
        bufp->chgBit(oldp+291,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 8U)))));
        bufp->chgBit(oldp+292,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 8U)))));
        bufp->chgBit(oldp+293,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 9U)))));
        bufp->chgBit(oldp+294,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 9U)))));
        bufp->chgBit(oldp+295,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+296,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+297,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+298,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+299,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+300,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+301,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+302,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+303,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_credit_gnt))));
        bufp->chgBit(oldp+304,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.vc_target))));
        bufp->chgBit(oldp+305,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_target))));
        bufp->chgBit(oldp+306,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt))));
        bufp->chgBit(oldp+307,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                      >> 1U))));
        bufp->chgBit(oldp+308,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.vc_target) 
                                      >> 1U))));
        bufp->chgBit(oldp+309,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_target) 
                                      >> 1U))));
        bufp->chgBit(oldp+310,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                      >> 1U))));
        bufp->chgBit(oldp+311,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                      >> 2U))));
        bufp->chgBit(oldp+312,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.vc_target) 
                                      >> 2U))));
        bufp->chgBit(oldp+313,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_target) 
                                      >> 2U))));
        bufp->chgBit(oldp+314,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                      >> 2U))));
        bufp->chgBit(oldp+315,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s_tx
                                             [0U][3U]))));
        bufp->chgBit(oldp+316,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s
                                             [0U][0U]))));
        bufp->chgBit(oldp+317,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+318,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+319,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+320,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+321,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+322,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+323,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+324,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+325,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+326,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+327,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+328,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+329,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+330,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+331,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+332,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+333,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+334,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+335,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+336,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+337,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+338,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+339,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+340,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+341,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+342,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+343,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+344,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+345,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+346,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+347,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+348,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+349,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+350,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+351,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+352,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+353,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+354,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+355,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+356,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+357,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+358,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+359,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+360,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+361,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+362,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+363,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+364,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+365,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+366,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+367,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+368,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+369,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+370,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+371,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+372,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+373,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+374,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+375,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+376,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+377,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+378,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+379,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+380,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+381,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+382,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+383,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+384,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+385,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+386,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+387,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][3U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+388,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+389,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x24U)))));
        bufp->chgCData(oldp+390,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                [0U]
                                                [0U] 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+391,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                [0U]
                                                [0U] 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+392,((IData)(vlSelfRef.top__DOT__dut__DOT__i
                                         [0U][0U])),32);
        bufp->chgCData(oldp+393,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [0U][0U]),3);
        bufp->chgBit(oldp+394,(vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__i_ack));
        bufp->chgBit(oldp+395,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg));
        bufp->chgBit(oldp+396,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                              [0U][0U] 
                                              >> 0x24U)))));
        bufp->chgCData(oldp+397,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U] 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+398,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                [0U]
                                                [0U] 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+399,((IData)(vlSelfRef.top__DOT__dut__DOT__n
                                         [0U][0U])),32);
        bufp->chgBit(oldp+400,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg));
        bufp->chgCData(oldp+401,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg),2);
        bufp->chgCData(oldp+402,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg),2);
        bufp->chgIData(oldp+403,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg),32);
        bufp->chgBit(oldp+404,((1U & (~ ((((((((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                                 | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v)) 
                                                | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg)) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg)) 
                                              | (IData)(
                                                        (vlSelfRef.top__DOT__dut__DOT__n
                                                         [0U]
                                                         [0U] 
                                                         >> 0x24U))) 
                                             | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg)) 
                                            | (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [0U] 
                                                       >> 0x24U))) 
                                           | (0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v))) 
                                          | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v))) 
                                         | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target)))))));
        bufp->chgBit(oldp+405,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg));
        bufp->chgCData(oldp+406,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg),2);
        bufp->chgCData(oldp+407,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg),2);
        bufp->chgIData(oldp+408,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg),32);
        bufp->chgCData(oldp+409,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v),3);
        bufp->chgCData(oldp+410,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_b),3);
        bufp->chgCData(oldp+411,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v),3);
        bufp->chgQData(oldp+412,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c),37);
        bufp->chgCData(oldp+414,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x),2);
        bufp->chgCData(oldp+415,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y),2);
        bufp->chgIData(oldp+416,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d),32);
        bufp->chgBit(oldp+417,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b));
        bufp->chgBit(oldp+418,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v));
        bufp->chgBit(oldp+419,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v));
        bufp->chgBit(oldp+420,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s));
        bufp->chgBit(oldp+421,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s));
        bufp->chgBit(oldp+422,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e));
        bufp->chgQData(oldp+423,((((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)) 
                                   << 0x22U) | (((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg))))),36);
        bufp->chgQData(oldp+425,((0xfffffffffULL & 
                                  vlSelfRef.top__DOT__dut__DOT__i
                                  [0U][0U])),36);
        bufp->chgQData(oldp+427,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg),36);
        bufp->chgQData(oldp+429,((((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)) 
                                   << 0x22U) | (((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d))))),36);
        bufp->chgCData(oldp+431,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+432,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+433,((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c)),32);
        bufp->chgCData(oldp+434,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits),5);
        bufp->chgBit(oldp+435,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits))));
        bufp->chgCData(oldp+436,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits),5);
        bufp->chgBit(oldp+437,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits))));
        bufp->chgCData(oldp+438,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits),5);
        bufp->chgBit(oldp+439,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits))));
        bufp->chgBit(oldp+440,((1U & vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg)));
        bufp->chgBit(oldp+441,((1U & vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d)));
        bufp->chgBit(oldp+442,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                             [0U][0U]))));
        bufp->chgBit(oldp+443,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                           : (IData)(
                                                     vlSelfRef.top__DOT__dut__DOT__i
                                                     [0U]
                                                     [0U]))))));
        bufp->chgBit(oldp+444,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                       : (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                                 [0U]
                                                 [0U])))));
        bufp->chgBit(oldp+445,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xaU))));
        bufp->chgBit(oldp+446,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xaU))));
        bufp->chgBit(oldp+447,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+448,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xaU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xaU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [0U] 
                                                   >> 0xaU)))))));
        bufp->chgBit(oldp+449,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xaU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [0U] 
                                                              >> 0xaU))))));
        bufp->chgBit(oldp+450,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xbU))));
        bufp->chgBit(oldp+451,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xbU))));
        bufp->chgBit(oldp+452,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+453,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xbU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xbU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [0U] 
                                                   >> 0xbU)))))));
        bufp->chgBit(oldp+454,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xbU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [0U] 
                                                              >> 0xbU))))));
        bufp->chgBit(oldp+455,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xcU))));
        bufp->chgBit(oldp+456,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xcU))));
        bufp->chgBit(oldp+457,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+458,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xcU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xcU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [0U] 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+459,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xcU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [0U] 
                                                              >> 0xcU))))));
        bufp->chgBit(oldp+460,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xdU))));
        bufp->chgBit(oldp+461,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xdU))));
        bufp->chgBit(oldp+462,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+463,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xdU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xdU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [0U] 
                                                   >> 0xdU)))))));
        bufp->chgBit(oldp+464,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xdU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [0U] 
                                                              >> 0xdU))))));
        bufp->chgBit(oldp+465,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xeU))));
        bufp->chgBit(oldp+466,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xeU))));
        bufp->chgBit(oldp+467,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+468,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xeU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xeU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [0U] 
                                                   >> 0xeU)))))));
        bufp->chgBit(oldp+469,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xeU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [0U] 
                                                              >> 0xeU))))));
        bufp->chgBit(oldp+470,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xfU))));
        bufp->chgBit(oldp+471,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xfU))));
        bufp->chgBit(oldp+472,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+473,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xfU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xfU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [0U] 
                                                   >> 0xfU)))))));
        bufp->chgBit(oldp+474,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xfU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [0U] 
                                                              >> 0xfU))))));
        bufp->chgBit(oldp+475,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x10U))));
        bufp->chgBit(oldp+476,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x10U))));
        bufp->chgBit(oldp+477,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+478,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x10U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x10U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x10U)))))));
        bufp->chgBit(oldp+479,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x10U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+480,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x11U))));
        bufp->chgBit(oldp+481,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x11U))));
        bufp->chgBit(oldp+482,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+483,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x11U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x11U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x11U)))))));
        bufp->chgBit(oldp+484,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x11U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+485,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x12U))));
        bufp->chgBit(oldp+486,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x12U))));
        bufp->chgBit(oldp+487,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+488,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x12U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x12U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x12U)))))));
        bufp->chgBit(oldp+489,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x12U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+490,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x13U))));
        bufp->chgBit(oldp+491,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x13U))));
        bufp->chgBit(oldp+492,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+493,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x13U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x13U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x13U)))))));
        bufp->chgBit(oldp+494,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x13U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+495,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 1U))));
        bufp->chgBit(oldp+496,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 1U))));
        bufp->chgBit(oldp+497,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+498,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 1U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 1U)))))));
        bufp->chgBit(oldp+499,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 1U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 1U))))));
        bufp->chgBit(oldp+500,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x14U))));
        bufp->chgBit(oldp+501,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x14U))));
        bufp->chgBit(oldp+502,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+503,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x14U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x14U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x14U)))))));
        bufp->chgBit(oldp+504,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x14U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+505,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x15U))));
        bufp->chgBit(oldp+506,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x15U))));
        bufp->chgBit(oldp+507,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+508,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x15U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x15U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x15U)))))));
        bufp->chgBit(oldp+509,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x15U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+510,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x16U))));
        bufp->chgBit(oldp+511,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x16U))));
        bufp->chgBit(oldp+512,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+513,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x16U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x16U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x16U)))))));
        bufp->chgBit(oldp+514,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x16U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+515,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x17U))));
        bufp->chgBit(oldp+516,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x17U))));
        bufp->chgBit(oldp+517,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+518,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x17U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x17U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x17U)))))));
        bufp->chgBit(oldp+519,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x17U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+520,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x18U))));
        bufp->chgBit(oldp+521,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x18U))));
        bufp->chgBit(oldp+522,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+523,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x18U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x18U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x18U)))))));
        bufp->chgBit(oldp+524,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x18U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+525,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x19U))));
        bufp->chgBit(oldp+526,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x19U))));
        bufp->chgBit(oldp+527,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+528,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x19U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x19U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x19U)))))));
        bufp->chgBit(oldp+529,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x19U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+530,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+531,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+532,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+533,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1aU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1aU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x1aU)))))));
        bufp->chgBit(oldp+534,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1aU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+535,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+536,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+537,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+538,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1bU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1bU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x1bU)))))));
        bufp->chgBit(oldp+539,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1bU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+540,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+541,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+542,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+543,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1cU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1cU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x1cU)))))));
        bufp->chgBit(oldp+544,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1cU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+545,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+546,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+547,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+548,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1dU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1dU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x1dU)))))));
        bufp->chgBit(oldp+549,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1dU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+550,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 2U))));
        bufp->chgBit(oldp+551,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 2U))));
        bufp->chgBit(oldp+552,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+553,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 2U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 2U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 2U)))))));
        bufp->chgBit(oldp+554,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 2U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 2U))))));
        bufp->chgBit(oldp+555,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+556,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+557,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+558,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1eU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1eU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x1eU)))))));
        bufp->chgBit(oldp+559,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1eU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+560,((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                >> 0x1fU)));
        bufp->chgBit(oldp+561,((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                >> 0x1fU)));
        bufp->chgBit(oldp+562,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+563,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1fU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1fU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x1fU)))))));
        bufp->chgBit(oldp+564,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1fU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+565,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg))));
        bufp->chgBit(oldp+566,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y))));
        bufp->chgBit(oldp+567,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+568,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x20U)))))));
        bufp->chgBit(oldp+569,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+570,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                      >> 1U))));
        bufp->chgBit(oldp+571,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                      >> 1U))));
        bufp->chgBit(oldp+572,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+573,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                          >> 1U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 0x21U)))))));
        bufp->chgBit(oldp+574,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                          >> 1U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 0x21U))))));
        bufp->chgBit(oldp+575,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg))));
        bufp->chgBit(oldp+576,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x))));
        bufp->chgBit(oldp+577,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+578,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [0U] 
                                                      >> 0x22U)))))));
        bufp->chgBit(oldp+579,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [0U] 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+580,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                      >> 1U))));
        bufp->chgBit(oldp+581,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                      >> 1U))));
        bufp->chgBit(oldp+582,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+583,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                          >> 1U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 0x23U)))))));
        bufp->chgBit(oldp+584,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                          >> 1U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 0x23U))))));
        bufp->chgBit(oldp+585,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 3U))));
        bufp->chgBit(oldp+586,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 3U))));
        bufp->chgBit(oldp+587,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+588,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 3U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 3U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 3U)))))));
        bufp->chgBit(oldp+589,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 3U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 3U))))));
        bufp->chgBit(oldp+590,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 4U))));
        bufp->chgBit(oldp+591,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 4U))));
        bufp->chgBit(oldp+592,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+593,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 4U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 4U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 4U)))))));
        bufp->chgBit(oldp+594,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 4U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 4U))))));
        bufp->chgBit(oldp+595,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 5U))));
        bufp->chgBit(oldp+596,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 5U))));
        bufp->chgBit(oldp+597,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+598,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 5U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 5U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 5U)))))));
        bufp->chgBit(oldp+599,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 5U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 5U))))));
        bufp->chgBit(oldp+600,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 6U))));
        bufp->chgBit(oldp+601,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 6U))));
        bufp->chgBit(oldp+602,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+603,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 6U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 6U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 6U)))))));
        bufp->chgBit(oldp+604,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 6U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 6U))))));
        bufp->chgBit(oldp+605,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 7U))));
        bufp->chgBit(oldp+606,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 7U))));
        bufp->chgBit(oldp+607,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+608,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 7U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 7U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 7U)))))));
        bufp->chgBit(oldp+609,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 7U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 7U))))));
        bufp->chgBit(oldp+610,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 8U))));
        bufp->chgBit(oldp+611,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 8U))));
        bufp->chgBit(oldp+612,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+613,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 8U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 8U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 8U)))))));
        bufp->chgBit(oldp+614,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 8U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 8U))))));
        bufp->chgBit(oldp+615,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 9U))));
        bufp->chgBit(oldp+616,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 9U))));
        bufp->chgBit(oldp+617,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+618,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 9U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 9U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [0U] 
                                                             >> 9U)))))));
        bufp->chgBit(oldp+619,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 9U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [0U]
                                                            [0U] 
                                                            >> 9U))))));
        bufp->chgBit(oldp+620,(vlSelfRef.top__DOT__dut__DOT__i_ack
                               [1U][0U]));
        bufp->chgBit(oldp+621,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_v_r));
        bufp->chgCData(oldp+622,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_vc_r),3);
        bufp->chgCData(oldp+623,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_x_r),2);
        bufp->chgCData(oldp+624,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_y_r),2);
        bufp->chgIData(oldp+625,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_d_r),32);
        bufp->chgBit(oldp+626,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__done_r));
        bufp->chgBit(oldp+627,(vlSelfRef.top__DOT__dut__DOT__o_v
                               [1U][0U]));
        bufp->chgCData(oldp+628,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                [1U]
                                                [0U] 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+629,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                [1U]
                                                [0U] 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+630,((IData)(vlSelfRef.top__DOT__dut__DOT__s
                                         [1U][0U])),32);
        bufp->chgIData(oldp+631,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num),32);
        bufp->chgBit(oldp+632,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume));
        bufp->chgBit(oldp+633,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens))));
        bufp->chgIData(oldp+634,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num),32);
        bufp->chgBit(oldp+635,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack));
        bufp->chgCData(oldp+636,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens),3);
        bufp->chgCData(oldp+637,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter),4);
        bufp->chgBit(oldp+638,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet))));
        bufp->chgBit(oldp+639,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet))));
        bufp->chgBit(oldp+640,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 1U)))));
        bufp->chgBit(oldp+641,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 1U)))));
        bufp->chgBit(oldp+642,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 2U)))));
        bufp->chgBit(oldp+643,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 2U)))));
        bufp->chgBit(oldp+644,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 3U)))));
        bufp->chgBit(oldp+645,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 3U)))));
        bufp->chgBit(oldp+646,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 4U)))));
        bufp->chgBit(oldp+647,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 4U)))));
        bufp->chgBit(oldp+648,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+649,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+650,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+651,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+652,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+653,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+654,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+655,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+656,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+657,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+658,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+659,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+660,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+661,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+662,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+663,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+664,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+665,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+666,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+667,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+668,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 5U)))));
        bufp->chgBit(oldp+669,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 5U)))));
        bufp->chgBit(oldp+670,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+671,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+672,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+673,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+674,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+675,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+676,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+677,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+678,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+679,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+680,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+681,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+682,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+683,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+684,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+685,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+686,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+687,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+688,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+689,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+690,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 6U)))));
        bufp->chgBit(oldp+691,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 6U)))));
        bufp->chgBit(oldp+692,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+693,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+694,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+695,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+696,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 7U)))));
        bufp->chgBit(oldp+697,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 7U)))));
        bufp->chgBit(oldp+698,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 8U)))));
        bufp->chgBit(oldp+699,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 8U)))));
        bufp->chgBit(oldp+700,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 9U)))));
        bufp->chgBit(oldp+701,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 9U)))));
        bufp->chgBit(oldp+702,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+703,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+704,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+705,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+706,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+707,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+708,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+709,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+710,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_credit_gnt))));
        bufp->chgBit(oldp+711,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.vc_target))));
        bufp->chgBit(oldp+712,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_target))));
        bufp->chgBit(oldp+713,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt))));
        bufp->chgBit(oldp+714,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                      >> 1U))));
        bufp->chgBit(oldp+715,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.vc_target) 
                                      >> 1U))));
        bufp->chgBit(oldp+716,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_target) 
                                      >> 1U))));
        bufp->chgBit(oldp+717,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                      >> 1U))));
        bufp->chgBit(oldp+718,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                      >> 2U))));
        bufp->chgBit(oldp+719,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.vc_target) 
                                      >> 2U))));
        bufp->chgBit(oldp+720,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_target) 
                                      >> 2U))));
        bufp->chgBit(oldp+721,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                      >> 2U))));
        bufp->chgBit(oldp+722,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s_tx
                                             [1U][3U]))));
        bufp->chgBit(oldp+723,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s
                                             [1U][0U]))));
        bufp->chgBit(oldp+724,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+725,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+726,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+727,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+728,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+729,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+730,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+731,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+732,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+733,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+734,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+735,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+736,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+737,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+738,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+739,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+740,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+741,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+742,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+743,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+744,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+745,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+746,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+747,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+748,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+749,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+750,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+751,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+752,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+753,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+754,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+755,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+756,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+757,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+758,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+759,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+760,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+761,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+762,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+763,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+764,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+765,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+766,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+767,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+768,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+769,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+770,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+771,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+772,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+773,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+774,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+775,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+776,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+777,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+778,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+779,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+780,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+781,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 0x24U)))));
        bufp->chgBit(oldp+782,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+783,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+784,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+785,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+786,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+787,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 5U)))));
        bufp->chgBit(oldp+788,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+789,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 6U)))));
        bufp->chgBit(oldp+790,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+791,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 7U)))));
        bufp->chgBit(oldp+792,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+793,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 8U)))));
        bufp->chgBit(oldp+794,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][3U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+795,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][0U] 
                                              >> 9U)))));
        bufp->chgBit(oldp+796,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x24U)))));
        bufp->chgCData(oldp+797,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                [1U]
                                                [0U] 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+798,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                [1U]
                                                [0U] 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+799,((IData)(vlSelfRef.top__DOT__dut__DOT__i
                                         [1U][0U])),32);
        bufp->chgCData(oldp+800,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                 [1U][0U]),3);
        bufp->chgBit(oldp+801,(vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack));
        bufp->chgBit(oldp+802,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg));
        bufp->chgBit(oldp+803,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                              [1U][0U] 
                                              >> 0x24U)))));
        bufp->chgCData(oldp+804,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U] 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+805,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                [1U]
                                                [0U] 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+806,((IData)(vlSelfRef.top__DOT__dut__DOT__n
                                         [1U][0U])),32);
        bufp->chgBit(oldp+807,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg));
        bufp->chgCData(oldp+808,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg),2);
        bufp->chgCData(oldp+809,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg),2);
        bufp->chgIData(oldp+810,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg),32);
        bufp->chgBit(oldp+811,((1U & (~ ((((((((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                                 | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v)) 
                                                | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg)) 
                                               | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg)) 
                                              | (IData)(
                                                        (vlSelfRef.top__DOT__dut__DOT__n
                                                         [1U]
                                                         [0U] 
                                                         >> 0x24U))) 
                                             | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg)) 
                                            | (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [0U] 
                                                       >> 0x24U))) 
                                           | (0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v))) 
                                          | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v))) 
                                         | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target)))))));
        bufp->chgBit(oldp+812,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg));
        bufp->chgCData(oldp+813,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg),2);
        bufp->chgCData(oldp+814,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg),2);
        bufp->chgIData(oldp+815,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg),32);
        bufp->chgCData(oldp+816,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v),3);
        bufp->chgCData(oldp+817,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_b),3);
        bufp->chgCData(oldp+818,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v),3);
        bufp->chgQData(oldp+819,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c),37);
        bufp->chgCData(oldp+821,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x),2);
        bufp->chgCData(oldp+822,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y),2);
        bufp->chgIData(oldp+823,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d),32);
        bufp->chgBit(oldp+824,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b));
        bufp->chgBit(oldp+825,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v));
        bufp->chgBit(oldp+826,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v));
        bufp->chgBit(oldp+827,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s));
        bufp->chgBit(oldp+828,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s));
        bufp->chgBit(oldp+829,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e));
        bufp->chgQData(oldp+830,((((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)) 
                                   << 0x22U) | (((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg))))),36);
        bufp->chgQData(oldp+832,((0xfffffffffULL & 
                                  vlSelfRef.top__DOT__dut__DOT__i
                                  [1U][0U])),36);
        bufp->chgQData(oldp+834,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg),36);
        bufp->chgQData(oldp+836,((((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)) 
                                   << 0x22U) | (((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d))))),36);
        bufp->chgCData(oldp+838,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                >> 0x22U)))),2);
        bufp->chgCData(oldp+839,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                >> 0x20U)))),2);
        bufp->chgIData(oldp+840,((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c)),32);
        bufp->chgCData(oldp+841,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits),5);
        bufp->chgBit(oldp+842,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits))));
        bufp->chgCData(oldp+843,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits),5);
        bufp->chgBit(oldp+844,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits))));
        bufp->chgCData(oldp+845,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits),5);
        bufp->chgBit(oldp+846,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits))));
        bufp->chgBit(oldp+847,((1U & vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg)));
        bufp->chgBit(oldp+848,((1U & vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d)));
        bufp->chgBit(oldp+849,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                             [1U][0U]))));
        bufp->chgBit(oldp+850,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                           : (IData)(
                                                     vlSelfRef.top__DOT__dut__DOT__i
                                                     [1U]
                                                     [0U]))))));
        bufp->chgBit(oldp+851,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                       : (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                                 [1U]
                                                 [0U])))));
        bufp->chgBit(oldp+852,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xaU))));
        bufp->chgBit(oldp+853,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xaU))));
        bufp->chgBit(oldp+854,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0xaU)))));
        bufp->chgBit(oldp+855,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xaU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xaU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [0U] 
                                                   >> 0xaU)))))));
        bufp->chgBit(oldp+856,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xaU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 0xaU))))));
        bufp->chgBit(oldp+857,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xbU))));
        bufp->chgBit(oldp+858,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xbU))));
        bufp->chgBit(oldp+859,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0xbU)))));
        bufp->chgBit(oldp+860,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xbU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xbU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [0U] 
                                                   >> 0xbU)))))));
        bufp->chgBit(oldp+861,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xbU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 0xbU))))));
        bufp->chgBit(oldp+862,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xcU))));
        bufp->chgBit(oldp+863,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xcU))));
        bufp->chgBit(oldp+864,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0xcU)))));
        bufp->chgBit(oldp+865,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xcU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xcU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [0U] 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+866,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xcU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 0xcU))))));
        bufp->chgBit(oldp+867,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xdU))));
        bufp->chgBit(oldp+868,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xdU))));
        bufp->chgBit(oldp+869,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0xdU)))));
        bufp->chgBit(oldp+870,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xdU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xdU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [0U] 
                                                   >> 0xdU)))))));
        bufp->chgBit(oldp+871,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xdU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 0xdU))))));
        bufp->chgBit(oldp+872,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xeU))));
        bufp->chgBit(oldp+873,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xeU))));
        bufp->chgBit(oldp+874,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0xeU)))));
        bufp->chgBit(oldp+875,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xeU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xeU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [0U] 
                                                   >> 0xeU)))))));
        bufp->chgBit(oldp+876,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xeU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 0xeU))))));
        bufp->chgBit(oldp+877,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0xfU))));
        bufp->chgBit(oldp+878,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0xfU))));
        bufp->chgBit(oldp+879,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0xfU)))));
        bufp->chgBit(oldp+880,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0xfU) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xfU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [0U] 
                                                   >> 0xfU)))))));
        bufp->chgBit(oldp+881,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0xfU) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 0xfU))))));
        bufp->chgBit(oldp+882,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x10U))));
        bufp->chgBit(oldp+883,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x10U))));
        bufp->chgBit(oldp+884,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x10U)))));
        bufp->chgBit(oldp+885,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x10U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x10U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x10U)))))));
        bufp->chgBit(oldp+886,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x10U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x10U))))));
        bufp->chgBit(oldp+887,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x11U))));
        bufp->chgBit(oldp+888,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x11U))));
        bufp->chgBit(oldp+889,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x11U)))));
        bufp->chgBit(oldp+890,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x11U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x11U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x11U)))))));
        bufp->chgBit(oldp+891,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x11U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x11U))))));
        bufp->chgBit(oldp+892,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x12U))));
        bufp->chgBit(oldp+893,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x12U))));
        bufp->chgBit(oldp+894,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x12U)))));
        bufp->chgBit(oldp+895,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x12U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x12U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x12U)))))));
        bufp->chgBit(oldp+896,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x12U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x12U))))));
        bufp->chgBit(oldp+897,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x13U))));
        bufp->chgBit(oldp+898,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x13U))));
        bufp->chgBit(oldp+899,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x13U)))));
        bufp->chgBit(oldp+900,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x13U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x13U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x13U)))))));
        bufp->chgBit(oldp+901,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x13U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x13U))))));
        bufp->chgBit(oldp+902,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 1U))));
        bufp->chgBit(oldp+903,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 1U))));
        bufp->chgBit(oldp+904,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 1U)))));
        bufp->chgBit(oldp+905,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 1U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 1U)))))));
        bufp->chgBit(oldp+906,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 1U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [1U]
                                                            [0U] 
                                                            >> 1U))))));
        bufp->chgBit(oldp+907,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x14U))));
        bufp->chgBit(oldp+908,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x14U))));
        bufp->chgBit(oldp+909,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x14U)))));
        bufp->chgBit(oldp+910,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x14U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x14U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x14U)))))));
        bufp->chgBit(oldp+911,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x14U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x14U))))));
        bufp->chgBit(oldp+912,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x15U))));
        bufp->chgBit(oldp+913,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x15U))));
        bufp->chgBit(oldp+914,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x15U)))));
        bufp->chgBit(oldp+915,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x15U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x15U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x15U)))))));
        bufp->chgBit(oldp+916,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x15U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x15U))))));
        bufp->chgBit(oldp+917,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x16U))));
        bufp->chgBit(oldp+918,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x16U))));
        bufp->chgBit(oldp+919,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x16U)))));
        bufp->chgBit(oldp+920,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x16U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x16U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x16U)))))));
        bufp->chgBit(oldp+921,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x16U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x16U))))));
        bufp->chgBit(oldp+922,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x17U))));
        bufp->chgBit(oldp+923,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x17U))));
        bufp->chgBit(oldp+924,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x17U)))));
        bufp->chgBit(oldp+925,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x17U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x17U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x17U)))))));
        bufp->chgBit(oldp+926,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x17U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x17U))))));
        bufp->chgBit(oldp+927,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x18U))));
        bufp->chgBit(oldp+928,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x18U))));
        bufp->chgBit(oldp+929,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x18U)))));
        bufp->chgBit(oldp+930,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x18U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x18U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x18U)))))));
        bufp->chgBit(oldp+931,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x18U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x18U))))));
        bufp->chgBit(oldp+932,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x19U))));
        bufp->chgBit(oldp+933,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x19U))));
        bufp->chgBit(oldp+934,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x19U)))));
        bufp->chgBit(oldp+935,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x19U)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x19U)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x19U)))))));
        bufp->chgBit(oldp+936,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x19U)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x19U))))));
        bufp->chgBit(oldp+937,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+938,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+939,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x1aU)))));
        bufp->chgBit(oldp+940,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1aU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1aU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x1aU)))))));
        bufp->chgBit(oldp+941,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1aU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x1aU))))));
        bufp->chgBit(oldp+942,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+943,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+944,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x1bU)))));
        bufp->chgBit(oldp+945,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1bU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1bU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x1bU)))))));
        bufp->chgBit(oldp+946,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1bU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x1bU))))));
        bufp->chgBit(oldp+947,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+948,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+949,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x1cU)))));
        bufp->chgBit(oldp+950,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1cU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1cU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x1cU)))))));
        bufp->chgBit(oldp+951,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1cU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x1cU))))));
        bufp->chgBit(oldp+952,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+953,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+954,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x1dU)))));
        bufp->chgBit(oldp+955,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1dU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1dU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x1dU)))))));
        bufp->chgBit(oldp+956,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1dU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x1dU))))));
        bufp->chgBit(oldp+957,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 2U))));
        bufp->chgBit(oldp+958,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 2U))));
        bufp->chgBit(oldp+959,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 2U)))));
        bufp->chgBit(oldp+960,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 2U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 2U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 2U)))))));
        bufp->chgBit(oldp+961,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 2U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [1U]
                                                            [0U] 
                                                            >> 2U))))));
        bufp->chgBit(oldp+962,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+963,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+964,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x1eU)))));
        bufp->chgBit(oldp+965,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1eU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1eU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x1eU)))))));
        bufp->chgBit(oldp+966,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1eU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x1eU))))));
        bufp->chgBit(oldp+967,((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                >> 0x1fU)));
        bufp->chgBit(oldp+968,((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                >> 0x1fU)));
        bufp->chgBit(oldp+969,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x1fU)))));
        bufp->chgBit(oldp+970,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 0x1fU)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                              >> 0x1fU)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x1fU)))))));
        bufp->chgBit(oldp+971,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 0x1fU)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+972,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg))));
        bufp->chgBit(oldp+973,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y))));
        bufp->chgBit(oldp+974,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x20U)))));
        bufp->chgBit(oldp+975,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x20U)))))));
        bufp->chgBit(oldp+976,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+977,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                      >> 1U))));
        bufp->chgBit(oldp+978,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                      >> 1U))));
        bufp->chgBit(oldp+979,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x21U)))));
        bufp->chgBit(oldp+980,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                          >> 1U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 0x21U)))))));
        bufp->chgBit(oldp+981,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                          >> 1U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [1U]
                                                            [0U] 
                                                            >> 0x21U))))));
        bufp->chgBit(oldp+982,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg))));
        bufp->chgBit(oldp+983,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x))));
        bufp->chgBit(oldp+984,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x22U)))));
        bufp->chgBit(oldp+985,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                       : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                           ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                           : (IData)(
                                                     (vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [0U] 
                                                      >> 0x22U)))))));
        bufp->chgBit(oldp+986,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                       : (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [0U] 
                                                  >> 0x22U))))));
        bufp->chgBit(oldp+987,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                      >> 1U))));
        bufp->chgBit(oldp+988,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                      >> 1U))));
        bufp->chgBit(oldp+989,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 0x23U)))));
        bufp->chgBit(oldp+990,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                          >> 1U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 0x23U)))))));
        bufp->chgBit(oldp+991,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                          >> 1U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [1U]
                                                            [0U] 
                                                            >> 0x23U))))));
        bufp->chgBit(oldp+992,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 3U))));
        bufp->chgBit(oldp+993,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 3U))));
        bufp->chgBit(oldp+994,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 3U)))));
        bufp->chgBit(oldp+995,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                       ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                          >> 3U) : 
                                      ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 3U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 3U)))))));
        bufp->chgBit(oldp+996,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                       ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                          >> 3U) : (IData)(
                                                           (vlSelfRef.top__DOT__dut__DOT__i
                                                            [1U]
                                                            [0U] 
                                                            >> 3U))))));
        bufp->chgBit(oldp+997,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                      >> 4U))));
        bufp->chgBit(oldp+998,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                      >> 4U))));
        bufp->chgBit(oldp+999,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][0U] 
                                              >> 4U)))));
        bufp->chgBit(oldp+1000,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 4U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 4U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1001,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 4U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 4U))))));
        bufp->chgBit(oldp+1002,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 5U))));
        bufp->chgBit(oldp+1003,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 5U))));
        bufp->chgBit(oldp+1004,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1005,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 5U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 5U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 5U)))))));
        bufp->chgBit(oldp+1006,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 5U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 5U))))));
        bufp->chgBit(oldp+1007,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 6U))));
        bufp->chgBit(oldp+1008,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 6U))));
        bufp->chgBit(oldp+1009,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1010,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 6U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 6U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 6U)))))));
        bufp->chgBit(oldp+1011,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 6U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 6U))))));
        bufp->chgBit(oldp+1012,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 7U))));
        bufp->chgBit(oldp+1013,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 7U))));
        bufp->chgBit(oldp+1014,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1015,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 7U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 7U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 7U)))))));
        bufp->chgBit(oldp+1016,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 7U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 7U))))));
        bufp->chgBit(oldp+1017,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 8U))));
        bufp->chgBit(oldp+1018,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 8U))));
        bufp->chgBit(oldp+1019,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1020,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 8U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 8U)))))));
        bufp->chgBit(oldp+1021,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 8U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 8U))))));
        bufp->chgBit(oldp+1022,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 9U))));
        bufp->chgBit(oldp+1023,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 9U))));
        bufp->chgBit(oldp+1024,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1025,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 9U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 9U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [0U] 
                                                              >> 9U)))))));
        bufp->chgBit(oldp+1026,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 9U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [0U] 
                                                             >> 9U))))));
        bufp->chgBit(oldp+1027,(vlSelfRef.top__DOT__dut__DOT__i_ack
                                [2U][0U]));
        bufp->chgBit(oldp+1028,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_v_r));
        bufp->chgCData(oldp+1029,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_vc_r),3);
        bufp->chgCData(oldp+1030,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_x_r),2);
        bufp->chgCData(oldp+1031,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_y_r),2);
        bufp->chgIData(oldp+1032,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__i_d_r),32);
        bufp->chgBit(oldp+1033,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__done_r));
        bufp->chgBit(oldp+1034,(vlSelfRef.top__DOT__dut__DOT__o_v
                                [2U][0U]));
        bufp->chgCData(oldp+1035,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [2U]
                                                 [0U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1036,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [2U]
                                                 [0U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1037,((IData)(vlSelfRef.top__DOT__dut__DOT__s
                                          [2U][0U])),32);
        bufp->chgIData(oldp+1038,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num),32);
        bufp->chgBit(oldp+1039,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__consume));
        bufp->chgBit(oldp+1040,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens))));
        bufp->chgIData(oldp+1041,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_num),32);
        bufp->chgBit(oldp+1042,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__waiting_for_ack));
        bufp->chgCData(oldp+1043,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens),3);
        bufp->chgCData(oldp+1044,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter),4);
        bufp->chgBit(oldp+1045,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet))));
        bufp->chgBit(oldp+1046,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet))));
        bufp->chgBit(oldp+1047,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+1048,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+1049,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+1050,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+1051,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+1052,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+1053,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+1054,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+1055,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1056,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1057,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1058,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1059,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1060,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1061,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1062,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1063,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1064,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1065,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1066,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1067,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1068,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1069,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1070,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1071,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1072,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1073,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1074,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1075,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+1076,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+1077,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1078,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1079,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1080,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1081,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1082,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1083,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1084,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1085,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1086,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1087,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1088,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1089,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1090,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1091,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1092,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1093,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1094,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1095,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1096,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1097,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+1098,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+1099,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1100,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1101,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1102,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1103,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+1104,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+1105,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+1106,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+1107,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+1108,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+1109,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1110,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1111,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1112,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1113,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1114,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1115,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1116,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1117,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_credit_gnt))));
        bufp->chgBit(oldp+1118,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.vc_target))));
        bufp->chgBit(oldp+1119,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_target))));
        bufp->chgBit(oldp+1120,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_credit_gnt))));
        bufp->chgBit(oldp+1121,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+1122,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+1123,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+1124,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+1125,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+1126,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+1127,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+1128,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+1129,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [2U][3U]))));
        bufp->chgBit(oldp+1130,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s
                                              [2U][0U]))));
        bufp->chgBit(oldp+1131,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1132,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1133,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1134,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1135,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1136,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1137,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1138,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1139,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1140,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1141,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1142,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1143,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1144,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1145,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1146,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1147,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1148,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1149,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1150,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1151,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1152,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1153,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1154,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1155,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1156,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1157,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1158,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1159,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1160,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1161,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1162,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1163,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1164,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1165,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1166,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1167,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1168,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1169,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1170,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1171,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1172,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1173,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1174,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1175,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1176,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1177,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1178,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1179,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1180,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1181,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1182,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1183,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1184,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1185,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1186,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1187,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1188,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1189,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1190,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1191,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1192,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1193,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1194,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1195,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1196,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1197,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1198,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1199,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1200,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1201,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [2U]
                                               [3U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1202,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [2U]
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1203,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+1204,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [2U]
                                                 [0U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1205,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [2U]
                                                 [0U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1206,((IData)(vlSelfRef.top__DOT__dut__DOT__i
                                          [2U][0U])),32);
        bufp->chgCData(oldp+1207,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                  [2U][0U]),3);
        bufp->chgBit(oldp+1208,(vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__i_ack));
        bufp->chgBit(oldp+1209,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg));
        bufp->chgBit(oldp+1210,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [2U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+1211,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [2U]
                                                 [0U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1212,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [2U]
                                                 [0U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1213,((IData)(vlSelfRef.top__DOT__dut__DOT__n
                                          [2U][0U])),32);
        bufp->chgBit(oldp+1214,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg));
        bufp->chgCData(oldp+1215,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg),2);
        bufp->chgCData(oldp+1216,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg),2);
        bufp->chgIData(oldp+1217,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg),32);
        bufp->chgBit(oldp+1218,((1U & (~ ((((((((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                                  | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v)) 
                                                 | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg)) 
                                                | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_v_reg)) 
                                               | (IData)(
                                                         (vlSelfRef.top__DOT__dut__DOT__n
                                                          [2U]
                                                          [0U] 
                                                          >> 0x24U))) 
                                              | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg)) 
                                             | (IData)(
                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                        [2U]
                                                        [0U] 
                                                        >> 0x24U))) 
                                            | (0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_v))) 
                                           | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v))) 
                                          | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__noc_if_inst_west.vc_target)))))));
        bufp->chgBit(oldp+1219,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_v_reg));
        bufp->chgCData(oldp+1220,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg),2);
        bufp->chgCData(oldp+1221,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg),2);
        bufp->chgIData(oldp+1222,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg),32);
        bufp->chgCData(oldp+1223,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_v),3);
        bufp->chgCData(oldp+1224,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_b),3);
        bufp->chgCData(oldp+1225,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v),3);
        bufp->chgQData(oldp+1226,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c),37);
        bufp->chgCData(oldp+1228,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x),2);
        bufp->chgCData(oldp+1229,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y),2);
        bufp->chgIData(oldp+1230,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d),32);
        bufp->chgBit(oldp+1231,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b));
        bufp->chgBit(oldp+1232,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v));
        bufp->chgBit(oldp+1233,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v));
        bufp->chgBit(oldp+1234,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s));
        bufp->chgBit(oldp+1235,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s));
        bufp->chgBit(oldp+1236,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e));
        bufp->chgQData(oldp+1237,((((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)) 
                                    << 0x22U) | (((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg))))),36);
        bufp->chgQData(oldp+1239,((0xfffffffffULL & 
                                   vlSelfRef.top__DOT__dut__DOT__i
                                   [2U][0U])),36);
        bufp->chgQData(oldp+1241,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg),36);
        bufp->chgQData(oldp+1243,((((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)) 
                                    << 0x22U) | (((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d))))),36);
        bufp->chgCData(oldp+1245,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1246,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1247,((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c)),32);
        bufp->chgCData(oldp+1248,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits),5);
        bufp->chgBit(oldp+1249,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits))));
        bufp->chgCData(oldp+1250,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits),5);
        bufp->chgBit(oldp+1251,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits))));
        bufp->chgCData(oldp+1252,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits),5);
        bufp->chgBit(oldp+1253,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits))));
        bufp->chgBit(oldp+1254,((1U & vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg)));
        bufp->chgBit(oldp+1255,((1U & vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d)));
        bufp->chgBit(oldp+1256,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                              [2U][0U]))));
        bufp->chgBit(oldp+1257,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                            : (IData)(
                                                      vlSelfRef.top__DOT__dut__DOT__i
                                                      [2U]
                                                      [0U]))))));
        bufp->chgBit(oldp+1258,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                        : (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                                  [2U]
                                                  [0U])))));
        bufp->chgBit(oldp+1259,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1260,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1261,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1262,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xaU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xaU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+1263,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xaU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0xaU))))));
        bufp->chgBit(oldp+1264,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1265,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1266,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1267,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xbU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xbU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+1268,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xbU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0xbU))))));
        bufp->chgBit(oldp+1269,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1270,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1271,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1272,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xcU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xcU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+1273,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xcU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0xcU))))));
        bufp->chgBit(oldp+1274,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1275,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1276,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1277,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xdU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xdU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+1278,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xdU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0xdU))))));
        bufp->chgBit(oldp+1279,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1280,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1281,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1282,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xeU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xeU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+1283,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xeU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0xeU))))));
        bufp->chgBit(oldp+1284,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1285,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1286,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1287,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xfU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xfU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+1288,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xfU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0xfU))))));
        bufp->chgBit(oldp+1289,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1290,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1291,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1292,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x10U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x10U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x10U)))))));
        bufp->chgBit(oldp+1293,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x10U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x10U))))));
        bufp->chgBit(oldp+1294,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1295,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1296,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1297,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x11U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x11U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x11U)))))));
        bufp->chgBit(oldp+1298,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x11U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x11U))))));
        bufp->chgBit(oldp+1299,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1300,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1301,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1302,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x12U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x12U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x12U)))))));
        bufp->chgBit(oldp+1303,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x12U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x12U))))));
        bufp->chgBit(oldp+1304,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1305,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1306,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1307,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x13U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x13U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x13U)))))));
        bufp->chgBit(oldp+1308,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x13U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x13U))))));
        bufp->chgBit(oldp+1309,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 1U))));
        bufp->chgBit(oldp+1310,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 1U))));
        bufp->chgBit(oldp+1311,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1312,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 1U)))))));
        bufp->chgBit(oldp+1313,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 1U))))));
        bufp->chgBit(oldp+1314,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1315,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1316,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1317,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x14U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x14U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x14U)))))));
        bufp->chgBit(oldp+1318,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x14U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x14U))))));
        bufp->chgBit(oldp+1319,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1320,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1321,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1322,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x15U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x15U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x15U)))))));
        bufp->chgBit(oldp+1323,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x15U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x15U))))));
        bufp->chgBit(oldp+1324,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1325,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1326,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1327,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x16U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x16U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x16U)))))));
        bufp->chgBit(oldp+1328,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x16U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x16U))))));
        bufp->chgBit(oldp+1329,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1330,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1331,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1332,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x17U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x17U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x17U)))))));
        bufp->chgBit(oldp+1333,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x17U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x17U))))));
        bufp->chgBit(oldp+1334,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1335,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1336,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1337,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x18U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x18U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x18U)))))));
        bufp->chgBit(oldp+1338,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x18U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x18U))))));
        bufp->chgBit(oldp+1339,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1340,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1341,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1342,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x19U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x19U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x19U)))))));
        bufp->chgBit(oldp+1343,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x19U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x19U))))));
        bufp->chgBit(oldp+1344,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1345,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1346,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1347,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1aU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1aU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1aU)))))));
        bufp->chgBit(oldp+1348,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1aU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x1aU))))));
        bufp->chgBit(oldp+1349,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1350,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1351,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1352,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1bU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1bU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1bU)))))));
        bufp->chgBit(oldp+1353,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1bU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x1bU))))));
        bufp->chgBit(oldp+1354,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1355,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1356,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1357,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1cU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1cU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1cU)))))));
        bufp->chgBit(oldp+1358,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1cU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x1cU))))));
        bufp->chgBit(oldp+1359,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1360,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1361,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1362,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1dU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1dU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1dU)))))));
        bufp->chgBit(oldp+1363,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1dU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x1dU))))));
        bufp->chgBit(oldp+1364,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 2U))));
        bufp->chgBit(oldp+1365,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 2U))));
        bufp->chgBit(oldp+1366,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1367,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 2U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 2U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 2U)))))));
        bufp->chgBit(oldp+1368,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 2U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 2U))))));
        bufp->chgBit(oldp+1369,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1370,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1371,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1372,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1eU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1eU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1eU)))))));
        bufp->chgBit(oldp+1373,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1eU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x1eU))))));
        bufp->chgBit(oldp+1374,((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1375,((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1376,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1377,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1fU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1fU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x1fU)))))));
        bufp->chgBit(oldp+1378,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1fU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x1fU))))));
        bufp->chgBit(oldp+1379,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg))));
        bufp->chgBit(oldp+1380,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y))));
        bufp->chgBit(oldp+1381,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1382,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x20U)))))));
        bufp->chgBit(oldp+1383,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x20U))))));
        bufp->chgBit(oldp+1384,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                       >> 1U))));
        bufp->chgBit(oldp+1385,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                       >> 1U))));
        bufp->chgBit(oldp+1386,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1387,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 0x21U)))))));
        bufp->chgBit(oldp+1388,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 0x21U))))));
        bufp->chgBit(oldp+1389,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg))));
        bufp->chgBit(oldp+1390,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x))));
        bufp->chgBit(oldp+1391,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1392,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [2U]
                                                       [0U] 
                                                       >> 0x22U)))))));
        bufp->chgBit(oldp+1393,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [2U]
                                                   [0U] 
                                                   >> 0x22U))))));
        bufp->chgBit(oldp+1394,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U))));
        bufp->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                       >> 1U))));
        bufp->chgBit(oldp+1396,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1397,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 0x23U)))))));
        bufp->chgBit(oldp+1398,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 0x23U))))));
        bufp->chgBit(oldp+1399,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 3U))));
        bufp->chgBit(oldp+1400,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 3U))));
        bufp->chgBit(oldp+1401,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1402,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 3U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 3U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 3U)))))));
        bufp->chgBit(oldp+1403,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 3U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 3U))))));
        bufp->chgBit(oldp+1404,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 4U))));
        bufp->chgBit(oldp+1405,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 4U))));
        bufp->chgBit(oldp+1406,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1407,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 4U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 4U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1408,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 4U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 4U))))));
        bufp->chgBit(oldp+1409,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 5U))));
        bufp->chgBit(oldp+1410,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 5U))));
        bufp->chgBit(oldp+1411,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1412,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 5U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 5U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 5U)))))));
        bufp->chgBit(oldp+1413,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 5U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 5U))))));
        bufp->chgBit(oldp+1414,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 6U))));
        bufp->chgBit(oldp+1415,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 6U))));
        bufp->chgBit(oldp+1416,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1417,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 6U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 6U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 6U)))))));
        bufp->chgBit(oldp+1418,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 6U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 6U))))));
        bufp->chgBit(oldp+1419,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 7U))));
        bufp->chgBit(oldp+1420,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 7U))));
        bufp->chgBit(oldp+1421,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1422,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 7U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 7U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 7U)))))));
        bufp->chgBit(oldp+1423,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 7U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 7U))))));
        bufp->chgBit(oldp+1424,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 8U))));
        bufp->chgBit(oldp+1425,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 8U))));
        bufp->chgBit(oldp+1426,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1427,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 8U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 8U)))))));
        bufp->chgBit(oldp+1428,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 8U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 8U))))));
        bufp->chgBit(oldp+1429,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 9U))));
        bufp->chgBit(oldp+1430,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 9U))));
        bufp->chgBit(oldp+1431,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [2U]
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1432,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 9U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 9U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [2U]
                                                              [0U] 
                                                              >> 9U)))))));
        bufp->chgBit(oldp+1433,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 9U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [2U]
                                                             [0U] 
                                                             >> 9U))))));
        bufp->chgBit(oldp+1434,(vlSelfRef.top__DOT__dut__DOT__i_ack
                                [3U][0U]));
        bufp->chgBit(oldp+1435,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_v_r));
        bufp->chgCData(oldp+1436,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_vc_r),3);
        bufp->chgCData(oldp+1437,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_x_r),2);
        bufp->chgCData(oldp+1438,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_y_r),2);
        bufp->chgIData(oldp+1439,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__i_d_r),32);
        bufp->chgBit(oldp+1440,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__done_r));
        bufp->chgBit(oldp+1441,(vlSelfRef.top__DOT__dut__DOT__o_v
                                [3U][0U]));
        bufp->chgCData(oldp+1442,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [3U]
                                                 [0U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1443,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [3U]
                                                 [0U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1444,((IData)(vlSelfRef.top__DOT__dut__DOT__s
                                          [3U][0U])),32);
        bufp->chgIData(oldp+1445,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num),32);
        bufp->chgBit(oldp+1446,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__consume));
        bufp->chgBit(oldp+1447,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens))));
        bufp->chgIData(oldp+1448,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_num),32);
        bufp->chgBit(oldp+1449,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__waiting_for_ack));
        bufp->chgCData(oldp+1450,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens),3);
        bufp->chgCData(oldp+1451,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter),4);
        bufp->chgBit(oldp+1452,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet))));
        bufp->chgBit(oldp+1453,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet))));
        bufp->chgBit(oldp+1454,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+1455,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+1456,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+1457,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+1458,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+1459,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+1460,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+1461,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+1462,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1463,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1464,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1465,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1466,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1467,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1468,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1469,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1470,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1471,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1472,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1473,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1474,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1475,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1476,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1477,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1478,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1479,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1480,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1481,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1482,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+1483,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+1484,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1485,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1486,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1487,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1488,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1489,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1490,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1491,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1492,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1493,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1494,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1495,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1496,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1497,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1498,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1499,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1500,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1501,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1502,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1503,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1504,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+1505,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+1506,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1507,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1508,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1509,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1510,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+1511,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+1512,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+1513,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+1514,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+1515,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+1516,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1517,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1518,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1519,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1520,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1521,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1522,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1523,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1524,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_credit_gnt))));
        bufp->chgBit(oldp+1525,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.vc_target))));
        bufp->chgBit(oldp+1526,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_target))));
        bufp->chgBit(oldp+1527,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_credit_gnt))));
        bufp->chgBit(oldp+1528,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+1529,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+1530,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+1531,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+1532,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+1533,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+1534,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__0__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+1535,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+1536,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [3U][3U]))));
        bufp->chgBit(oldp+1537,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s
                                              [3U][0U]))));
        bufp->chgBit(oldp+1538,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1539,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1540,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1541,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1542,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1543,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1544,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1545,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1546,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1547,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1548,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1549,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1550,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1551,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1552,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1553,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1554,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1555,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1556,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1557,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1558,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1559,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1560,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1561,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1562,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1563,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1564,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1565,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1566,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1567,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1568,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1569,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1570,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1571,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1572,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1573,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1574,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1575,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1576,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1577,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1578,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1579,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1580,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1581,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1582,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1583,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1584,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1585,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1586,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1587,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1588,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1589,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1590,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1591,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1592,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1593,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1594,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1595,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+1596,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1597,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1598,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1599,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1600,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1601,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1602,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1603,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1604,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1605,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1606,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1607,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1608,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [3U]
                                               [3U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1609,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [3U]
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1610,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+1611,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [3U]
                                                 [0U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1612,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [3U]
                                                 [0U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1613,((IData)(vlSelfRef.top__DOT__dut__DOT__i
                                          [3U][0U])),32);
        bufp->chgCData(oldp+1614,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                  [3U][0U]),3);
        bufp->chgBit(oldp+1615,(vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__i_ack));
        bufp->chgBit(oldp+1616,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg));
        bufp->chgBit(oldp+1617,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [3U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+1618,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [3U]
                                                 [0U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1619,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [3U]
                                                 [0U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1620,((IData)(vlSelfRef.top__DOT__dut__DOT__n
                                          [3U][0U])),32);
        bufp->chgBit(oldp+1621,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg));
        bufp->chgCData(oldp+1622,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg),2);
        bufp->chgCData(oldp+1623,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg),2);
        bufp->chgIData(oldp+1624,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg),32);
        bufp->chgBit(oldp+1625,((1U & (~ ((((((((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                                  | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v)) 
                                                 | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg)) 
                                                | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_v_reg)) 
                                               | (IData)(
                                                         (vlSelfRef.top__DOT__dut__DOT__n
                                                          [3U]
                                                          [0U] 
                                                          >> 0x24U))) 
                                              | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg)) 
                                             | (IData)(
                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                        [3U]
                                                        [0U] 
                                                        >> 0x24U))) 
                                            | (0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_v))) 
                                           | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v))) 
                                          | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__noc_if_inst_west.vc_target)))))));
        bufp->chgBit(oldp+1626,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_v_reg));
        bufp->chgCData(oldp+1627,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg),2);
        bufp->chgCData(oldp+1628,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg),2);
        bufp->chgIData(oldp+1629,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg),32);
        bufp->chgCData(oldp+1630,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_v),3);
        bufp->chgCData(oldp+1631,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_b),3);
        bufp->chgCData(oldp+1632,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v),3);
        bufp->chgQData(oldp+1633,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c),37);
        bufp->chgCData(oldp+1635,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x),2);
        bufp->chgCData(oldp+1636,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y),2);
        bufp->chgIData(oldp+1637,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d),32);
        bufp->chgBit(oldp+1638,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b));
        bufp->chgBit(oldp+1639,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v));
        bufp->chgBit(oldp+1640,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v));
        bufp->chgBit(oldp+1641,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s));
        bufp->chgBit(oldp+1642,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s));
        bufp->chgBit(oldp+1643,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e));
        bufp->chgQData(oldp+1644,((((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)) 
                                    << 0x22U) | (((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg))))),36);
        bufp->chgQData(oldp+1646,((0xfffffffffULL & 
                                   vlSelfRef.top__DOT__dut__DOT__i
                                   [3U][0U])),36);
        bufp->chgQData(oldp+1648,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg),36);
        bufp->chgQData(oldp+1650,((((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)) 
                                    << 0x22U) | (((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d))))),36);
        bufp->chgCData(oldp+1652,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1653,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1654,((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c)),32);
        bufp->chgCData(oldp+1655,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits),5);
        bufp->chgBit(oldp+1656,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits))));
        bufp->chgCData(oldp+1657,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits),5);
        bufp->chgBit(oldp+1658,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits))));
        bufp->chgCData(oldp+1659,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits),5);
        bufp->chgBit(oldp+1660,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits))));
        bufp->chgBit(oldp+1661,((1U & vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg)));
        bufp->chgBit(oldp+1662,((1U & vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d)));
        bufp->chgBit(oldp+1663,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                              [3U][0U]))));
        bufp->chgBit(oldp+1664,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                            : (IData)(
                                                      vlSelfRef.top__DOT__dut__DOT__i
                                                      [3U]
                                                      [0U]))))));
        bufp->chgBit(oldp+1665,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                        : (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                                  [3U]
                                                  [0U])))));
        bufp->chgBit(oldp+1666,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1667,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1668,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1669,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xaU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xaU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+1670,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xaU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0xaU))))));
        bufp->chgBit(oldp+1671,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1672,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1673,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1674,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xbU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xbU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+1675,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xbU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0xbU))))));
        bufp->chgBit(oldp+1676,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1677,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1678,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1679,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xcU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xcU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+1680,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xcU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0xcU))))));
        bufp->chgBit(oldp+1681,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1682,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1683,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1684,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xdU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xdU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+1685,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xdU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0xdU))))));
        bufp->chgBit(oldp+1686,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1687,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1688,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1689,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xeU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xeU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+1690,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xeU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0xeU))))));
        bufp->chgBit(oldp+1691,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1692,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1693,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1694,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xfU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xfU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+1695,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xfU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0xfU))))));
        bufp->chgBit(oldp+1696,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1697,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x10U))));
        bufp->chgBit(oldp+1698,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1699,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x10U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x10U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x10U)))))));
        bufp->chgBit(oldp+1700,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x10U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x10U))))));
        bufp->chgBit(oldp+1701,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1702,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x11U))));
        bufp->chgBit(oldp+1703,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1704,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x11U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x11U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x11U)))))));
        bufp->chgBit(oldp+1705,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x11U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x11U))))));
        bufp->chgBit(oldp+1706,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1707,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x12U))));
        bufp->chgBit(oldp+1708,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1709,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x12U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x12U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x12U)))))));
        bufp->chgBit(oldp+1710,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x12U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x12U))))));
        bufp->chgBit(oldp+1711,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1712,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x13U))));
        bufp->chgBit(oldp+1713,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1714,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x13U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x13U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x13U)))))));
        bufp->chgBit(oldp+1715,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x13U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x13U))))));
        bufp->chgBit(oldp+1716,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 1U))));
        bufp->chgBit(oldp+1717,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 1U))));
        bufp->chgBit(oldp+1718,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1719,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 1U)))))));
        bufp->chgBit(oldp+1720,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 1U))))));
        bufp->chgBit(oldp+1721,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1722,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x14U))));
        bufp->chgBit(oldp+1723,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1724,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x14U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x14U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x14U)))))));
        bufp->chgBit(oldp+1725,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x14U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x14U))))));
        bufp->chgBit(oldp+1726,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1727,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x15U))));
        bufp->chgBit(oldp+1728,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1729,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x15U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x15U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x15U)))))));
        bufp->chgBit(oldp+1730,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x15U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x15U))))));
        bufp->chgBit(oldp+1731,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1732,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x16U))));
        bufp->chgBit(oldp+1733,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1734,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x16U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x16U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x16U)))))));
        bufp->chgBit(oldp+1735,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x16U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x16U))))));
        bufp->chgBit(oldp+1736,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1737,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x17U))));
        bufp->chgBit(oldp+1738,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1739,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x17U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x17U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x17U)))))));
        bufp->chgBit(oldp+1740,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x17U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x17U))))));
        bufp->chgBit(oldp+1741,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1742,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x18U))));
        bufp->chgBit(oldp+1743,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1744,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x18U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x18U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x18U)))))));
        bufp->chgBit(oldp+1745,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x18U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x18U))))));
        bufp->chgBit(oldp+1746,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1747,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x19U))));
        bufp->chgBit(oldp+1748,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1749,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x19U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x19U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x19U)))))));
        bufp->chgBit(oldp+1750,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x19U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x19U))))));
        bufp->chgBit(oldp+1751,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1752,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+1753,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1754,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1aU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1aU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x1aU)))))));
        bufp->chgBit(oldp+1755,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1aU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x1aU))))));
        bufp->chgBit(oldp+1756,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1757,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1758,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1759,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1bU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1bU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x1bU)))))));
        bufp->chgBit(oldp+1760,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1bU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x1bU))))));
        bufp->chgBit(oldp+1761,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1762,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+1763,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1764,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1cU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1cU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x1cU)))))));
        bufp->chgBit(oldp+1765,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1cU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x1cU))))));
        bufp->chgBit(oldp+1766,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1767,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+1768,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1769,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1dU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1dU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x1dU)))))));
        bufp->chgBit(oldp+1770,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1dU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x1dU))))));
        bufp->chgBit(oldp+1771,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 2U))));
        bufp->chgBit(oldp+1772,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 2U))));
        bufp->chgBit(oldp+1773,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1774,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 2U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 2U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 2U)))))));
        bufp->chgBit(oldp+1775,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 2U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 2U))))));
        bufp->chgBit(oldp+1776,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1777,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+1778,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1779,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1eU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1eU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x1eU)))))));
        bufp->chgBit(oldp+1780,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1eU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x1eU))))));
        bufp->chgBit(oldp+1781,((vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1782,((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+1783,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1784,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1fU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1fU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x1fU)))))));
        bufp->chgBit(oldp+1785,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1fU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x1fU))))));
        bufp->chgBit(oldp+1786,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg))));
        bufp->chgBit(oldp+1787,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y))));
        bufp->chgBit(oldp+1788,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1789,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x20U)))))));
        bufp->chgBit(oldp+1790,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x20U))))));
        bufp->chgBit(oldp+1791,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                       >> 1U))));
        bufp->chgBit(oldp+1792,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                       >> 1U))));
        bufp->chgBit(oldp+1793,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1794,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 0x21U)))))));
        bufp->chgBit(oldp+1795,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 0x21U))))));
        bufp->chgBit(oldp+1796,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg))));
        bufp->chgBit(oldp+1797,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x))));
        bufp->chgBit(oldp+1798,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1799,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [3U]
                                                       [0U] 
                                                       >> 0x22U)))))));
        bufp->chgBit(oldp+1800,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [3U]
                                                   [0U] 
                                                   >> 0x22U))))));
        bufp->chgBit(oldp+1801,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U))));
        bufp->chgBit(oldp+1802,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                       >> 1U))));
        bufp->chgBit(oldp+1803,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1804,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 0x23U)))))));
        bufp->chgBit(oldp+1805,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 0x23U))))));
        bufp->chgBit(oldp+1806,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 3U))));
        bufp->chgBit(oldp+1807,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 3U))));
        bufp->chgBit(oldp+1808,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+1809,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 3U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 3U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 3U)))))));
        bufp->chgBit(oldp+1810,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 3U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 3U))))));
        bufp->chgBit(oldp+1811,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 4U))));
        bufp->chgBit(oldp+1812,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 4U))));
        bufp->chgBit(oldp+1813,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+1814,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 4U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 4U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+1815,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 4U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 4U))))));
        bufp->chgBit(oldp+1816,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 5U))));
        bufp->chgBit(oldp+1817,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 5U))));
        bufp->chgBit(oldp+1818,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+1819,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 5U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 5U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 5U)))))));
        bufp->chgBit(oldp+1820,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 5U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 5U))))));
        bufp->chgBit(oldp+1821,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 6U))));
        bufp->chgBit(oldp+1822,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 6U))));
        bufp->chgBit(oldp+1823,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+1824,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 6U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 6U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 6U)))))));
        bufp->chgBit(oldp+1825,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 6U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 6U))))));
        bufp->chgBit(oldp+1826,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 7U))));
        bufp->chgBit(oldp+1827,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 7U))));
        bufp->chgBit(oldp+1828,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+1829,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 7U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 7U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 7U)))))));
        bufp->chgBit(oldp+1830,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 7U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 7U))))));
        bufp->chgBit(oldp+1831,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 8U))));
        bufp->chgBit(oldp+1832,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 8U))));
        bufp->chgBit(oldp+1833,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+1834,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 8U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 8U)))))));
        bufp->chgBit(oldp+1835,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 8U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 8U))))));
        bufp->chgBit(oldp+1836,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 9U))));
        bufp->chgBit(oldp+1837,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 9U))));
        bufp->chgBit(oldp+1838,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [3U]
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+1839,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 9U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 9U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [3U]
                                                              [0U] 
                                                              >> 9U)))))));
        bufp->chgBit(oldp+1840,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 9U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [3U]
                                                             [0U] 
                                                             >> 9U))))));
        bufp->chgBit(oldp+1841,(vlSelfRef.top__DOT__dut__DOT__i_ack
                                [0U][1U]));
        bufp->chgBit(oldp+1842,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_v_r));
        bufp->chgCData(oldp+1843,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_vc_r),3);
        bufp->chgCData(oldp+1844,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_x_r),2);
        bufp->chgCData(oldp+1845,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_y_r),2);
        bufp->chgIData(oldp+1846,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__i_d_r),32);
        bufp->chgBit(oldp+1847,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__done_r));
        bufp->chgBit(oldp+1848,(vlSelfRef.top__DOT__dut__DOT__o_v
                                [0U][1U]));
        bufp->chgCData(oldp+1849,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [0U]
                                                 [1U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+1850,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [0U]
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+1851,((IData)(vlSelfRef.top__DOT__dut__DOT__s
                                          [0U][1U])),32);
        bufp->chgIData(oldp+1852,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num),32);
        bufp->chgBit(oldp+1853,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__consume));
        bufp->chgBit(oldp+1854,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens))));
        bufp->chgIData(oldp+1855,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_num),32);
        bufp->chgBit(oldp+1856,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__waiting_for_ack));
        bufp->chgCData(oldp+1857,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens),3);
        bufp->chgCData(oldp+1858,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter),4);
        bufp->chgBit(oldp+1859,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet))));
        bufp->chgBit(oldp+1860,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet))));
        bufp->chgBit(oldp+1861,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+1862,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+1863,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+1864,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+1865,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+1866,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+1867,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+1868,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+1869,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1870,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1871,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1872,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1873,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1874,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1875,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1876,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1877,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1878,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1879,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1880,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1881,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1882,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1883,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1884,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1885,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1886,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1887,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1888,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1889,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+1890,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+1891,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1892,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1893,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1894,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1895,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1896,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1897,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1898,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1899,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1900,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1901,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1902,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1903,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1904,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1905,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1906,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1907,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1908,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1909,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1910,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1911,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+1912,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+1913,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1914,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1915,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1916,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+1917,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+1918,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+1919,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+1920,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+1921,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+1922,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+1923,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1924,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1925,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1926,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1927,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1928,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1929,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1930,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1931,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_credit_gnt))));
        bufp->chgBit(oldp+1932,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.vc_target))));
        bufp->chgBit(oldp+1933,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_target))));
        bufp->chgBit(oldp+1934,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt))));
        bufp->chgBit(oldp+1935,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+1936,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+1937,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+1938,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+1939,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__1__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+1940,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+1941,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__3__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+1942,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+1943,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [0U][0U]))));
        bufp->chgBit(oldp+1944,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s
                                              [0U][1U]))));
        bufp->chgBit(oldp+1945,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1946,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+1947,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1948,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+1949,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1950,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+1951,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1952,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+1953,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1954,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+1955,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1956,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+1957,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1958,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+1959,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1960,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+1961,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1962,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+1963,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1964,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+1965,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1966,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+1967,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1968,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+1969,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1970,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+1971,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1972,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+1973,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1974,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+1975,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1976,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+1977,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1978,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+1979,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1980,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+1981,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1982,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+1983,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1984,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+1985,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1986,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+1987,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1988,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+1989,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1990,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+1991,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1992,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+1993,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1994,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+1995,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1996,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+1997,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1998,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+1999,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2000,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2001,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2002,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2003,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2004,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2005,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2006,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2007,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+2008,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+2009,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+2010,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+2011,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+2012,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+2013,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+2014,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+2015,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [0U]
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+2016,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [0U]
                                               [1U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+2017,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+2018,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [0U]
                                                 [1U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2019,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [0U]
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2020,((IData)(vlSelfRef.top__DOT__dut__DOT__i
                                          [0U][1U])),32);
        bufp->chgCData(oldp+2021,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                  [0U][1U]),3);
        bufp->chgBit(oldp+2022,(vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__i_ack));
        bufp->chgBit(oldp+2023,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg));
        bufp->chgBit(oldp+2024,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [0U]
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+2025,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [0U]
                                                 [1U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2026,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [0U]
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2027,((IData)(vlSelfRef.top__DOT__dut__DOT__n
                                          [0U][1U])),32);
        bufp->chgBit(oldp+2028,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg));
        bufp->chgCData(oldp+2029,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg),2);
        bufp->chgCData(oldp+2030,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg),2);
        bufp->chgIData(oldp+2031,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg),32);
        bufp->chgBit(oldp+2032,((1U & (~ ((((((((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                                  | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v)) 
                                                 | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg)) 
                                                | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_v_reg)) 
                                               | (IData)(
                                                         (vlSelfRef.top__DOT__dut__DOT__n
                                                          [0U]
                                                          [1U] 
                                                          >> 0x24U))) 
                                              | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg)) 
                                             | (IData)(
                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                        [0U]
                                                        [1U] 
                                                        >> 0x24U))) 
                                            | (0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v))) 
                                           | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v))) 
                                          | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__noc_if_inst_west.vc_target)))))));
        bufp->chgBit(oldp+2033,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_v_reg));
        bufp->chgCData(oldp+2034,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg),2);
        bufp->chgCData(oldp+2035,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg),2);
        bufp->chgIData(oldp+2036,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg),32);
        bufp->chgCData(oldp+2037,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v),3);
        bufp->chgCData(oldp+2038,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_b),3);
        bufp->chgCData(oldp+2039,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v),3);
        bufp->chgQData(oldp+2040,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c),37);
        bufp->chgCData(oldp+2042,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x),2);
        bufp->chgCData(oldp+2043,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y),2);
        bufp->chgIData(oldp+2044,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d),32);
        bufp->chgBit(oldp+2045,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b));
        bufp->chgBit(oldp+2046,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v));
        bufp->chgBit(oldp+2047,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v));
        bufp->chgBit(oldp+2048,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s));
        bufp->chgBit(oldp+2049,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s));
        bufp->chgBit(oldp+2050,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e));
        bufp->chgQData(oldp+2051,((((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)) 
                                    << 0x22U) | (((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg))))),36);
        bufp->chgQData(oldp+2053,((0xfffffffffULL & 
                                   vlSelfRef.top__DOT__dut__DOT__i
                                   [0U][1U])),36);
        bufp->chgQData(oldp+2055,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg),36);
        bufp->chgQData(oldp+2057,((((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)) 
                                    << 0x22U) | (((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d))))),36);
        bufp->chgCData(oldp+2059,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2060,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2061,((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c)),32);
        bufp->chgCData(oldp+2062,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits),5);
        bufp->chgBit(oldp+2063,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits))));
        bufp->chgCData(oldp+2064,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits),5);
        bufp->chgBit(oldp+2065,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits))));
        bufp->chgCData(oldp+2066,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits),5);
        bufp->chgBit(oldp+2067,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits))));
        bufp->chgBit(oldp+2068,((1U & vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg)));
        bufp->chgBit(oldp+2069,((1U & vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d)));
        bufp->chgBit(oldp+2070,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                              [0U][1U]))));
        bufp->chgBit(oldp+2071,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                            : (IData)(
                                                      vlSelfRef.top__DOT__dut__DOT__i
                                                      [0U]
                                                      [1U]))))));
        bufp->chgBit(oldp+2072,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                        : (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                                  [0U]
                                                  [1U])))));
        bufp->chgBit(oldp+2073,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2074,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2075,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2076,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xaU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xaU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+2077,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xaU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0xaU))))));
        bufp->chgBit(oldp+2078,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2079,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2080,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2081,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xbU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xbU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+2082,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xbU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0xbU))))));
        bufp->chgBit(oldp+2083,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2084,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2085,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2086,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xcU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xcU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+2087,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xcU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0xcU))))));
        bufp->chgBit(oldp+2088,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2089,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2090,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2091,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xdU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xdU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+2092,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xdU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0xdU))))));
        bufp->chgBit(oldp+2093,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2094,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2095,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2096,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xeU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xeU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+2097,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xeU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0xeU))))));
        bufp->chgBit(oldp+2098,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2099,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2100,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2101,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xfU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xfU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+2102,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xfU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0xfU))))));
        bufp->chgBit(oldp+2103,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x10U))));
        bufp->chgBit(oldp+2104,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x10U))));
        bufp->chgBit(oldp+2105,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2106,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x10U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x10U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x10U)))))));
        bufp->chgBit(oldp+2107,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x10U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x10U))))));
        bufp->chgBit(oldp+2108,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x11U))));
        bufp->chgBit(oldp+2109,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x11U))));
        bufp->chgBit(oldp+2110,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2111,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x11U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x11U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x11U)))))));
        bufp->chgBit(oldp+2112,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x11U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x11U))))));
        bufp->chgBit(oldp+2113,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x12U))));
        bufp->chgBit(oldp+2114,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x12U))));
        bufp->chgBit(oldp+2115,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2116,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x12U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x12U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x12U)))))));
        bufp->chgBit(oldp+2117,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x12U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x12U))))));
        bufp->chgBit(oldp+2118,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2119,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2120,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2121,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x13U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x13U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x13U)))))));
        bufp->chgBit(oldp+2122,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x13U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x13U))))));
        bufp->chgBit(oldp+2123,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 1U))));
        bufp->chgBit(oldp+2124,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 1U))));
        bufp->chgBit(oldp+2125,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+2126,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 1U)))))));
        bufp->chgBit(oldp+2127,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 1U))))));
        bufp->chgBit(oldp+2128,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2129,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2130,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2131,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x14U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x14U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x14U)))))));
        bufp->chgBit(oldp+2132,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x14U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x14U))))));
        bufp->chgBit(oldp+2133,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x15U))));
        bufp->chgBit(oldp+2134,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x15U))));
        bufp->chgBit(oldp+2135,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2136,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x15U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x15U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x15U)))))));
        bufp->chgBit(oldp+2137,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x15U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x15U))))));
        bufp->chgBit(oldp+2138,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x16U))));
        bufp->chgBit(oldp+2139,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x16U))));
        bufp->chgBit(oldp+2140,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2141,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x16U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x16U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x16U)))))));
        bufp->chgBit(oldp+2142,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x16U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x16U))))));
        bufp->chgBit(oldp+2143,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x17U))));
        bufp->chgBit(oldp+2144,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x17U))));
        bufp->chgBit(oldp+2145,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2146,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x17U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x17U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x17U)))))));
        bufp->chgBit(oldp+2147,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x17U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x17U))))));
        bufp->chgBit(oldp+2148,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x18U))));
        bufp->chgBit(oldp+2149,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x18U))));
        bufp->chgBit(oldp+2150,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2151,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x18U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x18U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x18U)))))));
        bufp->chgBit(oldp+2152,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x18U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x18U))))));
        bufp->chgBit(oldp+2153,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x19U))));
        bufp->chgBit(oldp+2154,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x19U))));
        bufp->chgBit(oldp+2155,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2156,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x19U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x19U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x19U)))))));
        bufp->chgBit(oldp+2157,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x19U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x19U))))));
        bufp->chgBit(oldp+2158,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+2159,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+2160,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2161,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1aU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1aU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x1aU)))))));
        bufp->chgBit(oldp+2162,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1aU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x1aU))))));
        bufp->chgBit(oldp+2163,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+2164,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+2165,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2166,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1bU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1bU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x1bU)))))));
        bufp->chgBit(oldp+2167,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1bU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x1bU))))));
        bufp->chgBit(oldp+2168,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+2169,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1cU))));
        bufp->chgBit(oldp+2170,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2171,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1cU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1cU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x1cU)))))));
        bufp->chgBit(oldp+2172,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1cU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x1cU))))));
        bufp->chgBit(oldp+2173,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+2174,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1dU))));
        bufp->chgBit(oldp+2175,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2176,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1dU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1dU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x1dU)))))));
        bufp->chgBit(oldp+2177,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1dU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x1dU))))));
        bufp->chgBit(oldp+2178,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 2U))));
        bufp->chgBit(oldp+2179,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 2U))));
        bufp->chgBit(oldp+2180,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+2181,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 2U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 2U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 2U)))))));
        bufp->chgBit(oldp+2182,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 2U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 2U))))));
        bufp->chgBit(oldp+2183,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+2184,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+2185,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2186,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1eU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1eU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x1eU)))))));
        bufp->chgBit(oldp+2187,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1eU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x1eU))))));
        bufp->chgBit(oldp+2188,((vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2189,((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                 >> 0x1fU)));
        bufp->chgBit(oldp+2190,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2191,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1fU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1fU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x1fU)))))));
        bufp->chgBit(oldp+2192,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x1fU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x1fU))))));
        bufp->chgBit(oldp+2193,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg))));
        bufp->chgBit(oldp+2194,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y))));
        bufp->chgBit(oldp+2195,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2196,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x20U)))))));
        bufp->chgBit(oldp+2197,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x20U))))));
        bufp->chgBit(oldp+2198,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                       >> 1U))));
        bufp->chgBit(oldp+2199,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                       >> 1U))));
        bufp->chgBit(oldp+2200,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2201,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_y_reg) 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 0x21U)))))));
        bufp->chgBit(oldp+2202,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 0x21U))))));
        bufp->chgBit(oldp+2203,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg))));
        bufp->chgBit(oldp+2204,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x))));
        bufp->chgBit(oldp+2205,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2206,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [0U]
                                                       [1U] 
                                                       >> 0x22U)))))));
        bufp->chgBit(oldp+2207,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [0U]
                                                   [1U] 
                                                   >> 0x22U))))));
        bufp->chgBit(oldp+2208,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                       >> 1U))));
        bufp->chgBit(oldp+2209,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                       >> 1U))));
        bufp->chgBit(oldp+2210,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2211,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_x_reg) 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 0x23U)))))));
        bufp->chgBit(oldp+2212,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x) 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 0x23U))))));
        bufp->chgBit(oldp+2213,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 3U))));
        bufp->chgBit(oldp+2214,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 3U))));
        bufp->chgBit(oldp+2215,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2216,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 3U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 3U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 3U)))))));
        bufp->chgBit(oldp+2217,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 3U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 3U))))));
        bufp->chgBit(oldp+2218,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 4U))));
        bufp->chgBit(oldp+2219,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 4U))));
        bufp->chgBit(oldp+2220,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2221,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 4U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 4U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 4U)))))));
        bufp->chgBit(oldp+2222,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 4U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 4U))))));
        bufp->chgBit(oldp+2223,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 5U))));
        bufp->chgBit(oldp+2224,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 5U))));
        bufp->chgBit(oldp+2225,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+2226,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 5U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 5U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 5U)))))));
        bufp->chgBit(oldp+2227,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 5U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 5U))))));
        bufp->chgBit(oldp+2228,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 6U))));
        bufp->chgBit(oldp+2229,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 6U))));
        bufp->chgBit(oldp+2230,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+2231,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 6U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 6U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 6U)))))));
        bufp->chgBit(oldp+2232,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 6U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 6U))))));
        bufp->chgBit(oldp+2233,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 7U))));
        bufp->chgBit(oldp+2234,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 7U))));
        bufp->chgBit(oldp+2235,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+2236,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 7U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 7U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 7U)))))));
        bufp->chgBit(oldp+2237,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 7U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 7U))))));
        bufp->chgBit(oldp+2238,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 8U))));
        bufp->chgBit(oldp+2239,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 8U))));
        bufp->chgBit(oldp+2240,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+2241,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 8U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 8U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 8U)))))));
        bufp->chgBit(oldp+2242,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 8U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 8U))))));
        bufp->chgBit(oldp+2243,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 9U))));
        bufp->chgBit(oldp+2244,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 9U))));
        bufp->chgBit(oldp+2245,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [0U]
                                               [1U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+2246,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 9U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 9U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [0U]
                                                              [1U] 
                                                              >> 9U)))))));
        bufp->chgBit(oldp+2247,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 9U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [0U]
                                                             [1U] 
                                                             >> 9U))))));
        bufp->chgBit(oldp+2248,(vlSelfRef.top__DOT__dut__DOT__i_ack
                                [1U][1U]));
        bufp->chgBit(oldp+2249,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_v_r));
        bufp->chgCData(oldp+2250,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_vc_r),3);
        bufp->chgCData(oldp+2251,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_x_r),2);
        bufp->chgCData(oldp+2252,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_y_r),2);
        bufp->chgIData(oldp+2253,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__i_d_r),32);
        bufp->chgBit(oldp+2254,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__done_r));
        bufp->chgBit(oldp+2255,(vlSelfRef.top__DOT__dut__DOT__o_v
                                [1U][1U]));
        bufp->chgCData(oldp+2256,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [1U]
                                                 [1U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2257,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                                 [1U]
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2258,((IData)(vlSelfRef.top__DOT__dut__DOT__s
                                          [1U][1U])),32);
        bufp->chgIData(oldp+2259,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num),32);
        bufp->chgBit(oldp+2260,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__consume));
        bufp->chgBit(oldp+2261,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens))));
        bufp->chgIData(oldp+2262,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_num),32);
        bufp->chgBit(oldp+2263,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__waiting_for_ack));
        bufp->chgCData(oldp+2264,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__number_tokens),3);
        bufp->chgCData(oldp+2265,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__regulator__DOT__rate_counter),4);
        bufp->chgBit(oldp+2266,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet))));
        bufp->chgBit(oldp+2267,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet))));
        bufp->chgBit(oldp+2268,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+2269,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 1U)))));
        bufp->chgBit(oldp+2270,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+2271,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 2U)))));
        bufp->chgBit(oldp+2272,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+2273,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 3U)))));
        bufp->chgBit(oldp+2274,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+2275,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 4U)))));
        bufp->chgBit(oldp+2276,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2277,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2278,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2279,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2280,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2281,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2282,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2283,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2284,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2285,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2286,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2287,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2288,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2289,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2290,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2291,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2292,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2293,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2294,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2295,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2296,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+2297,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 5U)))));
        bufp->chgBit(oldp+2298,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2299,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2300,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2301,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2302,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2303,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2304,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2305,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2306,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2307,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2308,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2309,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2310,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2311,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2312,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2313,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2314,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2315,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2316,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2317,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2318,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+2319,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 6U)))));
        bufp->chgBit(oldp+2320,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2321,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2322,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2323,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2324,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+2325,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 7U)))));
        bufp->chgBit(oldp+2326,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+2327,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 8U)))));
        bufp->chgBit(oldp+2328,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+2329,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 9U)))));
        bufp->chgBit(oldp+2330,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2331,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2332,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2333,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2334,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2335,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2336,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2337,((1U & (IData)((vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.packet 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2338,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_credit_gnt))));
        bufp->chgBit(oldp+2339,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.vc_target))));
        bufp->chgBit(oldp+2340,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_target))));
        bufp->chgBit(oldp+2341,((1U & (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt))));
        bufp->chgBit(oldp+2342,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+2343,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+2344,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 1U))));
        bufp->chgBit(oldp+2345,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 1U))));
        bufp->chgBit(oldp+2346,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__2__KET____DOT__noc_if_inst_conn.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+2347,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_east.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+2348,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__yss__BRA__1__KET____DOT__xss__BRA__0__KET____DOT__noc_if_inst_conn.vc_target) 
                                       >> 2U))));
        bufp->chgBit(oldp+2349,((1U & ((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_credit_gnt) 
                                       >> 2U))));
        bufp->chgBit(oldp+2350,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s_tx
                                              [1U][0U]))));
        bufp->chgBit(oldp+2351,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__s
                                              [1U][1U]))));
        bufp->chgBit(oldp+2352,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2353,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2354,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2355,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2356,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2357,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2358,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2359,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2360,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2361,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2362,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2363,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2364,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2365,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2366,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2367,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2368,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2369,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2370,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2371,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2372,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+2373,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+2374,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2375,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2376,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2377,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2378,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2379,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2380,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2381,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2382,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2383,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2384,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2385,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2386,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2387,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2388,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2389,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x1bU)))));
        bufp->chgBit(oldp+2390,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2391,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x1cU)))));
        bufp->chgBit(oldp+2392,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2393,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x1dU)))));
        bufp->chgBit(oldp+2394,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+2395,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 2U)))));
        bufp->chgBit(oldp+2396,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2397,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x1eU)))));
        bufp->chgBit(oldp+2398,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2399,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x1fU)))));
        bufp->chgBit(oldp+2400,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2401,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x20U)))));
        bufp->chgBit(oldp+2402,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2403,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x21U)))));
        bufp->chgBit(oldp+2404,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2405,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x22U)))));
        bufp->chgBit(oldp+2406,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2407,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x23U)))));
        bufp->chgBit(oldp+2408,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2409,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgBit(oldp+2410,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2411,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 3U)))));
        bufp->chgBit(oldp+2412,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2413,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 4U)))));
        bufp->chgBit(oldp+2414,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+2415,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 5U)))));
        bufp->chgBit(oldp+2416,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+2417,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 6U)))));
        bufp->chgBit(oldp+2418,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+2419,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 7U)))));
        bufp->chgBit(oldp+2420,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+2421,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 8U)))));
        bufp->chgBit(oldp+2422,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s_tx
                                               [1U]
                                               [0U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+2423,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__s
                                               [1U]
                                               [1U] 
                                               >> 9U)))));
        bufp->chgBit(oldp+2424,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+2425,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [1U]
                                                 [1U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2426,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                                 [1U]
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2427,((IData)(vlSelfRef.top__DOT__dut__DOT__i
                                          [1U][1U])),32);
        bufp->chgCData(oldp+2428,(vlSelfRef.top__DOT__dut__DOT__i_vc
                                  [1U][1U]),3);
        bufp->chgBit(oldp+2429,(vlSelfRef.top__DOT__dut__DOT____Vcellout__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__i_ack));
        bufp->chgBit(oldp+2430,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg));
        bufp->chgBit(oldp+2431,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                               [1U]
                                               [1U] 
                                               >> 0x24U)))));
        bufp->chgCData(oldp+2432,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [1U]
                                                 [1U] 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2433,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__n
                                                 [1U]
                                                 [1U] 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2434,((IData)(vlSelfRef.top__DOT__dut__DOT__n
                                          [1U][1U])),32);
        bufp->chgBit(oldp+2435,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg));
        bufp->chgCData(oldp+2436,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg),2);
        bufp->chgCData(oldp+2437,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg),2);
        bufp->chgIData(oldp+2438,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg),32);
        bufp->chgBit(oldp+2439,((1U & (~ ((((((((((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v) 
                                                  | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v)) 
                                                 | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg)) 
                                                | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_v_reg)) 
                                               | (IData)(
                                                         (vlSelfRef.top__DOT__dut__DOT__n
                                                          [1U]
                                                          [1U] 
                                                          >> 0x24U))) 
                                              | (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg)) 
                                             | (IData)(
                                                       (vlSelfRef.top__DOT__dut__DOT__i
                                                        [1U]
                                                        [1U] 
                                                        >> 0x24U))) 
                                            | (0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v))) 
                                           | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v))) 
                                          | (0U != (IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__noc_if_inst_west.vc_target)))))));
        bufp->chgBit(oldp+2440,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_v_reg));
        bufp->chgCData(oldp+2441,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg),2);
        bufp->chgCData(oldp+2442,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg),2);
        bufp->chgIData(oldp+2443,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg),32);
        bufp->chgCData(oldp+2444,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v),3);
        bufp->chgCData(oldp+2445,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_b),3);
        bufp->chgCData(oldp+2446,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_v),3);
        bufp->chgQData(oldp+2447,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c),37);
        bufp->chgCData(oldp+2449,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x),2);
        bufp->chgCData(oldp+2450,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y),2);
        bufp->chgIData(oldp+2451,(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d),32);
        bufp->chgBit(oldp+2452,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b));
        bufp->chgBit(oldp+2453,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v));
        bufp->chgBit(oldp+2454,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v));
        bufp->chgBit(oldp+2455,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s));
        bufp->chgBit(oldp+2456,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s));
        bufp->chgBit(oldp+2457,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e));
        bufp->chgQData(oldp+2458,((((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_x_reg)) 
                                    << 0x22U) | (((QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_y_reg)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg))))),36);
        bufp->chgQData(oldp+2460,((0xfffffffffULL & 
                                   vlSelfRef.top__DOT__dut__DOT__i
                                   [1U][1U])),36);
        bufp->chgQData(oldp+2462,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg),36);
        bufp->chgQData(oldp+2464,((((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_x)) 
                                    << 0x22U) | (((QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_y)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d))))),36);
        bufp->chgCData(oldp+2466,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x22U)))),2);
        bufp->chgCData(oldp+2467,((3U & (IData)((vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c 
                                                 >> 0x20U)))),2);
        bufp->chgIData(oldp+2468,((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c)),32);
        bufp->chgCData(oldp+2469,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits),5);
        bufp->chgBit(oldp+2470,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits))));
        bufp->chgCData(oldp+2471,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits),5);
        bufp->chgBit(oldp+2472,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits))));
        bufp->chgCData(oldp+2473,(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits),5);
        bufp->chgBit(oldp+2474,((0U != (IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits))));
        bufp->chgBit(oldp+2475,((1U & vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg)));
        bufp->chgBit(oldp+2476,((1U & vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d)));
        bufp->chgBit(oldp+2477,((1U & (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                              [1U][1U]))));
        bufp->chgBit(oldp+2478,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                            : (IData)(
                                                      vlSelfRef.top__DOT__dut__DOT__i
                                                      [1U]
                                                      [1U]))))));
        bufp->chgBit(oldp+2479,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d
                                        : (IData)(vlSelfRef.top__DOT__dut__DOT__i
                                                  [1U]
                                                  [1U])))));
        bufp->chgBit(oldp+2480,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2481,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xaU))));
        bufp->chgBit(oldp+2482,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0xaU)))));
        bufp->chgBit(oldp+2483,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xaU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xaU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0xaU)))))));
        bufp->chgBit(oldp+2484,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xaU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0xaU))))));
        bufp->chgBit(oldp+2485,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2486,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xbU))));
        bufp->chgBit(oldp+2487,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0xbU)))));
        bufp->chgBit(oldp+2488,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xbU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xbU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0xbU)))))));
        bufp->chgBit(oldp+2489,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xbU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0xbU))))));
        bufp->chgBit(oldp+2490,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2491,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xcU))));
        bufp->chgBit(oldp+2492,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+2493,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xcU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xcU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0xcU)))))));
        bufp->chgBit(oldp+2494,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xcU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0xcU))))));
        bufp->chgBit(oldp+2495,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2496,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xdU))));
        bufp->chgBit(oldp+2497,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0xdU)))));
        bufp->chgBit(oldp+2498,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xdU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xdU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0xdU)))))));
        bufp->chgBit(oldp+2499,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xdU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0xdU))))));
        bufp->chgBit(oldp+2500,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2501,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xeU))));
        bufp->chgBit(oldp+2502,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0xeU)))));
        bufp->chgBit(oldp+2503,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xeU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xeU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0xeU)))))));
        bufp->chgBit(oldp+2504,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xeU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0xeU))))));
        bufp->chgBit(oldp+2505,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2506,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0xfU))));
        bufp->chgBit(oldp+2507,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0xfU)))));
        bufp->chgBit(oldp+2508,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0xfU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0xfU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0xfU)))))));
        bufp->chgBit(oldp+2509,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0xfU)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0xfU))))));
        bufp->chgBit(oldp+2510,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x10U))));
        bufp->chgBit(oldp+2511,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x10U))));
        bufp->chgBit(oldp+2512,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x10U)))));
        bufp->chgBit(oldp+2513,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x10U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x10U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x10U)))))));
        bufp->chgBit(oldp+2514,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x10U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x10U))))));
        bufp->chgBit(oldp+2515,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x11U))));
        bufp->chgBit(oldp+2516,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x11U))));
        bufp->chgBit(oldp+2517,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x11U)))));
        bufp->chgBit(oldp+2518,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x11U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x11U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x11U)))))));
        bufp->chgBit(oldp+2519,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x11U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x11U))))));
        bufp->chgBit(oldp+2520,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x12U))));
        bufp->chgBit(oldp+2521,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x12U))));
        bufp->chgBit(oldp+2522,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x12U)))));
        bufp->chgBit(oldp+2523,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x12U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x12U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x12U)))))));
        bufp->chgBit(oldp+2524,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x12U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x12U))))));
        bufp->chgBit(oldp+2525,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2526,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x13U))));
        bufp->chgBit(oldp+2527,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x13U)))));
        bufp->chgBit(oldp+2528,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x13U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x13U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x13U)))))));
        bufp->chgBit(oldp+2529,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x13U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x13U))))));
        bufp->chgBit(oldp+2530,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 1U))));
        bufp->chgBit(oldp+2531,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 1U))));
        bufp->chgBit(oldp+2532,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 1U)))));
        bufp->chgBit(oldp+2533,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 1U) : 
                                       ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                         ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                            >> 1U) : (IData)(
                                                             (vlSelfRef.top__DOT__dut__DOT__i
                                                              [1U]
                                                              [1U] 
                                                              >> 1U)))))));
        bufp->chgBit(oldp+2534,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 1U) : (IData)(
                                                            (vlSelfRef.top__DOT__dut__DOT__i
                                                             [1U]
                                                             [1U] 
                                                             >> 1U))))));
        bufp->chgBit(oldp+2535,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2536,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x14U))));
        bufp->chgBit(oldp+2537,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x14U)))));
        bufp->chgBit(oldp+2538,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x14U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x14U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x14U)))))));
        bufp->chgBit(oldp+2539,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x14U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x14U))))));
        bufp->chgBit(oldp+2540,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x15U))));
        bufp->chgBit(oldp+2541,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x15U))));
        bufp->chgBit(oldp+2542,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x15U)))));
        bufp->chgBit(oldp+2543,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x15U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x15U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x15U)))))));
        bufp->chgBit(oldp+2544,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x15U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x15U))))));
        bufp->chgBit(oldp+2545,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x16U))));
        bufp->chgBit(oldp+2546,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x16U))));
        bufp->chgBit(oldp+2547,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x16U)))));
        bufp->chgBit(oldp+2548,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x16U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x16U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x16U)))))));
        bufp->chgBit(oldp+2549,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x16U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x16U))))));
        bufp->chgBit(oldp+2550,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x17U))));
        bufp->chgBit(oldp+2551,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x17U))));
        bufp->chgBit(oldp+2552,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x17U)))));
        bufp->chgBit(oldp+2553,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x17U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x17U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x17U)))))));
        bufp->chgBit(oldp+2554,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x17U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x17U))))));
        bufp->chgBit(oldp+2555,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x18U))));
        bufp->chgBit(oldp+2556,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x18U))));
        bufp->chgBit(oldp+2557,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x18U)))));
        bufp->chgBit(oldp+2558,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x18U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x18U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x18U)))))));
        bufp->chgBit(oldp+2559,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x18U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x18U))))));
        bufp->chgBit(oldp+2560,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x19U))));
        bufp->chgBit(oldp+2561,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x19U))));
        bufp->chgBit(oldp+2562,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x19U)))));
        bufp->chgBit(oldp+2563,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x19U)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x19U)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x19U)))))));
        bufp->chgBit(oldp+2564,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e)
                                        ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                           >> 0x19U)
                                        : (IData)((
                                                   vlSelfRef.top__DOT__dut__DOT__i
                                                   [1U]
                                                   [1U] 
                                                   >> 0x19U))))));
        bufp->chgBit(oldp+2565,((1U & (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+2566,((1U & (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                       >> 0x1aU))));
        bufp->chgBit(oldp+2567,((1U & (IData)((vlSelfRef.top__DOT__dut__DOT__i
                                               [1U]
                                               [1U] 
                                               >> 0x1aU)))));
        bufp->chgBit(oldp+2568,((1U & ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s)
                                        ? (vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__n_in_data_reg 
                                           >> 0x1aU)
                                        : ((IData)(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s)
                                            ? (vlSymsp->TOP__top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__west_conn_rx.o_d 
                                               >> 0x1aU)
                                            : (IData)(
                                                      (vlSelfRef.top__DOT__dut__DOT__i
                                                       [1U]
                                                       [1U] 
                                                       >> 0x1aU)))))));
    }
}
