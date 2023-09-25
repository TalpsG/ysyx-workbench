// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__ebreak_TOP(IData/*31:0*/ i);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__exu__DOT__rfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__exu__DOT__rfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__exu__DOT__rfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__exu__DOT__rfile__DOT__rf__v0 = 0;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__ebreak_TOP(vlSelf->ins);
    VL_WRITEF("pc:%x ,src1:%2#,src2:%2#, imm:%10#,r1:%10#,r2:%10#\n\n",
              32,vlSelf->pc,5,(0x1fU & (vlSelf->ins 
                                        >> 0xfU)),5,
              (0x1fU & (vlSelf->ins >> 0x14U)),32,(
                                                   ((- (IData)(
                                                               (vlSelf->ins 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->ins 
                                                      >> 0x14U)),
              32,vlSelf->regfile[(0x1fU & (vlSelf->ins 
                                           >> 0xfU))],
              32,vlSelf->regfile[(0x1fU & (vlSelf->ins 
                                           >> 0x14U))]);
    __Vdlyvval__top__DOT__exu__DOT__rfile__DOT__rf__v0 
        = (vlSelf->top__DOT____Vcellout__exu____pinNumber11
           [(0x1fU & (vlSelf->ins >> 0xfU))] + (((- (IData)(
                                                            (vlSelf->ins 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | (vlSelf->ins 
                                                   >> 0x14U)));
    __Vdlyvdim0__top__DOT__exu__DOT__rfile__DOT__rf__v0 
        = (0x1fU & (vlSelf->ins >> 7U));
    vlSelf->pc = ((IData)(1U) + vlSelf->top__DOT__ifu__DOT__temp);
    vlSelf->top__DOT__exu__DOT__rfile__DOT__rf[__Vdlyvdim0__top__DOT__exu__DOT__rfile__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__exu__DOT__rfile__DOT__rf__v0;
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x1fU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x1eU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x1eU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x1dU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x1dU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x1cU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x1cU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x1bU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x1bU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x1aU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x1aU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x19U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x19U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x18U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x18U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x17U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x17U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x16U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x16U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x15U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x15U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x14U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x14U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x13U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x13U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x12U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x12U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x11U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x11U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0x10U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0x10U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0xfU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0xfU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0xeU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0xeU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0xdU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0xdU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0xcU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0xcU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0xbU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0xbU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0xaU] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0xaU];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[9U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [9U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[8U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [8U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[7U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [7U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[6U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [6U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[5U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [5U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[4U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [4U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[3U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [3U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[2U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [2U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[1U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [1U];
    vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[0U] 
        = vlSelf->top__DOT__exu__DOT__rfile__DOT__rf
        [0U];
    vlSelf->top__DOT__ifu__DOT__temp = vlSelf->pc;
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x1fU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x1fU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x1eU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x1eU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x1dU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x1dU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x1cU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x1cU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x1bU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x1bU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x1aU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x1aU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x19U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x19U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x18U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x18U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x17U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x17U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x16U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x16U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x15U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x15U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x14U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x14U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x13U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x13U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x12U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x12U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x11U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x11U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0x10U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0x10U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0xfU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0xfU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0xeU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0xeU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0xdU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0xdU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0xcU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0xcU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0xbU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0xbU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0xaU] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0xaU];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[9U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [9U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[8U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [8U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[7U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [7U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[6U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [6U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[5U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [5U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[4U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [4U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[3U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [3U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[2U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [2U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[1U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [1U];
    vlSelf->top__DOT____Vcellout__exu____pinNumber11[0U] 
        = vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4
        [0U];
    vlSelf->top__DOT__regdata[0x1fU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x1fU];
    vlSelf->top__DOT__regdata[0x1eU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x1eU];
    vlSelf->top__DOT__regdata[0x1dU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x1dU];
    vlSelf->top__DOT__regdata[0x1cU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x1cU];
    vlSelf->top__DOT__regdata[0x1bU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x1bU];
    vlSelf->top__DOT__regdata[0x1aU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x1aU];
    vlSelf->top__DOT__regdata[0x19U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x19U];
    vlSelf->top__DOT__regdata[0x18U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x18U];
    vlSelf->top__DOT__regdata[0x17U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x17U];
    vlSelf->top__DOT__regdata[0x16U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x16U];
    vlSelf->top__DOT__regdata[0x15U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x15U];
    vlSelf->top__DOT__regdata[0x14U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x14U];
    vlSelf->top__DOT__regdata[0x13U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x13U];
    vlSelf->top__DOT__regdata[0x12U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x12U];
    vlSelf->top__DOT__regdata[0x11U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x11U];
    vlSelf->top__DOT__regdata[0x10U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0x10U];
    vlSelf->top__DOT__regdata[0xfU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0xfU];
    vlSelf->top__DOT__regdata[0xeU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0xeU];
    vlSelf->top__DOT__regdata[0xdU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0xdU];
    vlSelf->top__DOT__regdata[0xcU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0xcU];
    vlSelf->top__DOT__regdata[0xbU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0xbU];
    vlSelf->top__DOT__regdata[0xaU] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0xaU];
    vlSelf->top__DOT__regdata[9U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [9U];
    vlSelf->top__DOT__regdata[8U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [8U];
    vlSelf->top__DOT__regdata[7U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [7U];
    vlSelf->top__DOT__regdata[6U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [6U];
    vlSelf->top__DOT__regdata[5U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [5U];
    vlSelf->top__DOT__regdata[4U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [4U];
    vlSelf->top__DOT__regdata[3U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [3U];
    vlSelf->top__DOT__regdata[2U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [2U];
    vlSelf->top__DOT__regdata[1U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [1U];
    vlSelf->top__DOT__regdata[0U] = vlSelf->top__DOT____Vcellout__exu____pinNumber11
        [0U];
    vlSelf->regfile[0x1fU] = vlSelf->top__DOT__regdata
        [0x1fU];
    vlSelf->regfile[0x1eU] = vlSelf->top__DOT__regdata
        [0x1eU];
    vlSelf->regfile[0x1dU] = vlSelf->top__DOT__regdata
        [0x1dU];
    vlSelf->regfile[0x1cU] = vlSelf->top__DOT__regdata
        [0x1cU];
    vlSelf->regfile[0x1bU] = vlSelf->top__DOT__regdata
        [0x1bU];
    vlSelf->regfile[0x1aU] = vlSelf->top__DOT__regdata
        [0x1aU];
    vlSelf->regfile[0x19U] = vlSelf->top__DOT__regdata
        [0x19U];
    vlSelf->regfile[0x18U] = vlSelf->top__DOT__regdata
        [0x18U];
    vlSelf->regfile[0x17U] = vlSelf->top__DOT__regdata
        [0x17U];
    vlSelf->regfile[0x16U] = vlSelf->top__DOT__regdata
        [0x16U];
    vlSelf->regfile[0x15U] = vlSelf->top__DOT__regdata
        [0x15U];
    vlSelf->regfile[0x14U] = vlSelf->top__DOT__regdata
        [0x14U];
    vlSelf->regfile[0x13U] = vlSelf->top__DOT__regdata
        [0x13U];
    vlSelf->regfile[0x12U] = vlSelf->top__DOT__regdata
        [0x12U];
    vlSelf->regfile[0x11U] = vlSelf->top__DOT__regdata
        [0x11U];
    vlSelf->regfile[0x10U] = vlSelf->top__DOT__regdata
        [0x10U];
    vlSelf->regfile[0xfU] = vlSelf->top__DOT__regdata
        [0xfU];
    vlSelf->regfile[0xeU] = vlSelf->top__DOT__regdata
        [0xeU];
    vlSelf->regfile[0xdU] = vlSelf->top__DOT__regdata
        [0xdU];
    vlSelf->regfile[0xcU] = vlSelf->top__DOT__regdata
        [0xcU];
    vlSelf->regfile[0xbU] = vlSelf->top__DOT__regdata
        [0xbU];
    vlSelf->regfile[0xaU] = vlSelf->top__DOT__regdata
        [0xaU];
    vlSelf->regfile[9U] = vlSelf->top__DOT__regdata
        [9U];
    vlSelf->regfile[8U] = vlSelf->top__DOT__regdata
        [8U];
    vlSelf->regfile[7U] = vlSelf->top__DOT__regdata
        [7U];
    vlSelf->regfile[6U] = vlSelf->top__DOT__regdata
        [6U];
    vlSelf->regfile[5U] = vlSelf->top__DOT__regdata
        [5U];
    vlSelf->regfile[4U] = vlSelf->top__DOT__regdata
        [4U];
    vlSelf->regfile[3U] = vlSelf->top__DOT__regdata
        [3U];
    vlSelf->regfile[2U] = vlSelf->top__DOT__regdata
        [2U];
    vlSelf->regfile[1U] = vlSelf->top__DOT__regdata
        [1U];
    vlSelf->regfile[0U] = vlSelf->top__DOT__regdata
        [0U];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc/top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc/top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
