// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__exu__DOT__rfile__DOT__rf[0U] = 0U;
    vlSelf->pc = 0x80000000U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc/top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ifu__DOT__temp = vlSelf->pc;
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->ins = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regfile[__Vi0] = 0;
    }
    vlSelf->pc = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regdata[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__exu____pinNumber11[__Vi0] = 0;
    }
    vlSelf->top__DOT__ifu__DOT__temp = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT____Vcellout__rfile____pinNumber4[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__rfile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->__Vtrigrprev__TOP__clk = 0;
}
