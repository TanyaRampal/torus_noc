// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);
VL_ATTR_COLD void Vtop___024root____Vm_traceActivitySetAll(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
    Vtop___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__cycle_num = 0U;
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__cycle_num = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_0_0",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_0_0",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_1_0",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_1_0",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_2_0",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_2_0",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_3_0",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_3_0",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_0_1",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_0_1",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_1_1",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_1_1",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_2_1",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_2_1",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_3_1",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_3_1",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_0_2",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_0_2",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_1_2",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_1_2",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_2_2",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_2_2",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_3_2",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_3_2",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_0_3",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_0_3",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_1_3",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_1_3",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_2_3",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_2_3",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str
                  ,"../data/basic.hex_3_3",0);
    VL_READMEM_N(true, 39, 192, 0, VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packet_file_str)
                 ,  &(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__packets)
                 , 0, ~0ULL);
    VL_SFORMAT_NX(64,vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str
                  ,"output.hex_3_3",0);
    vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT_____05FTEST_trace_fd 
        = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__client_xy__DOT__trace_file_str)
                      , std::string{"w"});
    ;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/test_torus_credit.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
            vlSelf->top__DOT__dut__DOT__s[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__n[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->top__DOT__dut__DOT__s_tx[__Vi0][__Vi1] = VL_RAND_RESET_Q(37);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__0__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__1__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__2__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__0__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__1__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__2__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
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
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__o_v_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_x_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_y_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_out_data_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_v = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_b = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_out_c = VL_RAND_RESET_Q(37);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__w_b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_e_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_s_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_o_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_n2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__dor_w2e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__e_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__s_msg = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__0__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__1__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__dut__DOT__ys__BRA__3__KET____DOT__xs__BRA__3__KET____DOT__torus_switch_xy__DOT__east_conn_tx__DOT__gen_vc_logic__BRA__2__KET____DOT__credits = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
