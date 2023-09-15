// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(data1_i,7,0);
    VL_IN8(data2_i,7,0);
    VL_OUT8(result_o,7,0);
    CData/*7:0*/ top__DOT__dut__DOT__A_data_reg;
    CData/*7:0*/ top__DOT__dut__DOT__B_data_reg;
    CData/*1:0*/ top__DOT__dut__DOT__A_op_reg;
    CData/*1:0*/ top__DOT__dut__DOT__B_op_reg;
    CData/*7:0*/ top__DOT__dut__DOT__A_data;
    CData/*7:0*/ top__DOT__dut__DOT__AsubB;
    CData/*7:0*/ top__DOT__dut__DOT__B_data;
    CData/*0:0*/ top__DOT__dut__DOT__done;
    CData/*1:0*/ top__DOT__dut__DOT__A_op;
    CData/*1:0*/ top__DOT__dut__DOT__B_op;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
