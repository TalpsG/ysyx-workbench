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
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[0U] = 0x17U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[4U] = 0x13U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->top__DOT__regfile__DOT__rf[0U] = 0U;
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->outpc = 0x80000000U;
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
    // Init
    IData/*31:0*/ top__DOT__imm;
    top__DOT__imm = 0;
    CData/*2:0*/ top__DOT__extop;
    top__DOT__extop = 0;
    IData/*31:0*/ top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out;
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit;
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit = 0;
    CData/*2:0*/ top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out;
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit;
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit = 0;
    CData/*0:0*/ top__DOT__cu__DOT____VdfgTmp_he9ff0d5f__0;
    top__DOT__cu__DOT____VdfgTmp_he9ff0d5f__0 = 0;
    CData/*0:0*/ top__DOT__cu__DOT____VdfgTmp_h814576e4__0;
    top__DOT__cu__DOT____VdfgTmp_h814576e4__0 = 0;
    CData/*0:0*/ top__DOT__cu__DOT____VdfgTmp_h2a9b951b__0;
    top__DOT__cu__DOT____VdfgTmp_h2a9b951b__0 = 0;
    CData/*0:0*/ top__DOT__cu__DOT____VdfgTmp_h0348156f__0;
    top__DOT__cu__DOT____VdfgTmp_h0348156f__0 = 0;
    IData/*31:0*/ top__DOT__exu__DOT__num1;
    top__DOT__exu__DOT__num1 = 0;
    IData/*31:0*/ top__DOT__exu__DOT__num2;
    top__DOT__exu__DOT__num2 = 0;
    IData/*31:0*/ top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out;
    top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit;
    top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit = 0;
    IData/*31:0*/ top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out;
    top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit;
    top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit = 0;
    IData/*31:0*/ top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out;
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out = 0;
    CData/*0:0*/ top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit;
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit = 0;
    // Body
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->outpc;
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelf->ins);
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->ins) | ((0x800U & 
                                           (vlSelf->ins 
                                            >> 9U)) 
                                          | (0x7feU 
                                             & (vlSelf->ins 
                                                >> 0x14U)))));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->ins << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ins 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ins 
                                                      >> 7U)))));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->ins >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ins 
                                                      >> 7U))));
    vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ins >> 0x1fU))) << 0xcU) 
           | (vlSelf->ins >> 0x14U));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
           [0U]);
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [1U]));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [2U]));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [3U]));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->ins) == 
                          vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list
              [4U]));
    top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ins) == vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list
              [4U]));
    top__DOT__extop = ((IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit)
                        ? (IData)(top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out)
                        : 0U);
    top__DOT__cu__DOT____VdfgTmp_h2a9b951b__0 = (IData)(
                                                        (3U 
                                                         == 
                                                         (3U 
                                                          & vlSelf->ins)));
    vlSelf->top__DOT____Vcellout__regfile__data[0x1fU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1fU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1eU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1eU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1dU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1dU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1cU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1cU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1bU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1bU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x1aU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x1aU];
    vlSelf->top__DOT____Vcellout__regfile__data[0x19U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x19U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x18U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x18U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x17U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x17U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x16U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x16U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x15U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x15U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x14U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x14U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x13U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x13U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x12U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x12U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x11U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x11U];
    vlSelf->top__DOT____Vcellout__regfile__data[0x10U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0x10U];
    vlSelf->top__DOT____Vcellout__regfile__data[0xfU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xfU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xeU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xeU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xdU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xdU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xcU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xcU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xbU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xbU];
    vlSelf->top__DOT____Vcellout__regfile__data[0xaU] 
        = vlSelf->top__DOT__regfile__DOT__rf[0xaU];
    vlSelf->top__DOT____Vcellout__regfile__data[9U] 
        = vlSelf->top__DOT__regfile__DOT__rf[9U];
    vlSelf->top__DOT____Vcellout__regfile__data[8U] 
        = vlSelf->top__DOT__regfile__DOT__rf[8U];
    vlSelf->top__DOT____Vcellout__regfile__data[7U] 
        = vlSelf->top__DOT__regfile__DOT__rf[7U];
    vlSelf->top__DOT____Vcellout__regfile__data[6U] 
        = vlSelf->top__DOT__regfile__DOT__rf[6U];
    vlSelf->top__DOT____Vcellout__regfile__data[5U] 
        = vlSelf->top__DOT__regfile__DOT__rf[5U];
    vlSelf->top__DOT____Vcellout__regfile__data[4U] 
        = vlSelf->top__DOT__regfile__DOT__rf[4U];
    vlSelf->top__DOT____Vcellout__regfile__data[3U] 
        = vlSelf->top__DOT__regfile__DOT__rf[3U];
    vlSelf->top__DOT____Vcellout__regfile__data[2U] 
        = vlSelf->top__DOT__regfile__DOT__rf[2U];
    vlSelf->top__DOT____Vcellout__regfile__data[1U] 
        = vlSelf->top__DOT__regfile__DOT__rf[1U];
    vlSelf->top__DOT____Vcellout__regfile__data[0U] 
        = vlSelf->top__DOT__regfile__DOT__rf[0U];
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(top__DOT__extop) == 
                       vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(top__DOT__extop) 
                          == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((IData)(top__DOT__extop) == vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    top__DOT__imm = ((IData)(top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit)
                      ? top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out
                      : 0U);
    vlSelf->top__DOT__select_num2 = (IData)(((0x2020U 
                                              == (0x707cU 
                                                  & vlSelf->ins)) 
                                             & (IData)(top__DOT__cu__DOT____VdfgTmp_h2a9b951b__0)));
    top__DOT__cu__DOT____VdfgTmp_h0348156f__0 = ((vlSelf->ins 
                                                  >> 2U) 
                                                 & (IData)(top__DOT__cu__DOT____VdfgTmp_h2a9b951b__0));
    vlSelf->data[0x1fU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1fU];
    vlSelf->data[0x1eU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1eU];
    vlSelf->data[0x1dU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1dU];
    vlSelf->data[0x1cU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1cU];
    vlSelf->data[0x1bU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1bU];
    vlSelf->data[0x1aU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x1aU];
    vlSelf->data[0x19U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x19U];
    vlSelf->data[0x18U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x18U];
    vlSelf->data[0x17U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x17U];
    vlSelf->data[0x16U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x16U];
    vlSelf->data[0x15U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x15U];
    vlSelf->data[0x14U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x14U];
    vlSelf->data[0x13U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x13U];
    vlSelf->data[0x12U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x12U];
    vlSelf->data[0x11U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x11U];
    vlSelf->data[0x10U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0x10U];
    vlSelf->data[0xfU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xfU];
    vlSelf->data[0xeU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xeU];
    vlSelf->data[0xdU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xdU];
    vlSelf->data[0xcU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xcU];
    vlSelf->data[0xbU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xbU];
    vlSelf->data[0xaU] = vlSelf->top__DOT____Vcellout__regfile__data
        [0xaU];
    vlSelf->data[9U] = vlSelf->top__DOT____Vcellout__regfile__data
        [9U];
    vlSelf->data[8U] = vlSelf->top__DOT____Vcellout__regfile__data
        [8U];
    vlSelf->data[7U] = vlSelf->top__DOT____Vcellout__regfile__data
        [7U];
    vlSelf->data[6U] = vlSelf->top__DOT____Vcellout__regfile__data
        [6U];
    vlSelf->data[5U] = vlSelf->top__DOT____Vcellout__regfile__data
        [5U];
    vlSelf->data[4U] = vlSelf->top__DOT____Vcellout__regfile__data
        [4U];
    vlSelf->data[3U] = vlSelf->top__DOT____Vcellout__regfile__data
        [3U];
    vlSelf->data[2U] = vlSelf->top__DOT____Vcellout__regfile__data
        [2U];
    vlSelf->data[1U] = vlSelf->top__DOT____Vcellout__regfile__data
        [1U];
    vlSelf->data[0U] = vlSelf->top__DOT____Vcellout__regfile__data
        [0U];
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[1U] 
        = top__DOT__imm;
    top__DOT__cu__DOT____VdfgTmp_he9ff0d5f__0 = (IData)(
                                                        ((0x68U 
                                                          == 
                                                          (0x78U 
                                                           & vlSelf->ins)) 
                                                         & (IData)(top__DOT__cu__DOT____VdfgTmp_h0348156f__0)));
    top__DOT__cu__DOT____VdfgTmp_h814576e4__0 = ((~ 
                                                  (vlSelf->ins 
                                                   >> 3U)) 
                                                 & (IData)(top__DOT__cu__DOT____VdfgTmp_h0348156f__0));
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->data[(0x1fU & (vlSelf->ins >> 0xfU))];
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->data[(0x1fU & (vlSelf->ins >> 0x14U))];
    vlSelf->top__DOT__pc_write = ((IData)(top__DOT__cu__DOT____VdfgTmp_he9ff0d5f__0) 
                                  | (IData)(((0x60U 
                                              == (0x7070U 
                                                  & vlSelf->ins)) 
                                             & (IData)(top__DOT__cu__DOT____VdfgTmp_h814576e4__0))));
    vlSelf->top__DOT__select_num1 = ((IData)(top__DOT__cu__DOT____VdfgTmp_he9ff0d5f__0) 
                                     | (IData)(((0x10U 
                                                 == 
                                                 (0x70U 
                                                  & vlSelf->ins)) 
                                                & (IData)(top__DOT__cu__DOT____VdfgTmp_h814576e4__0))));
    top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_num2) 
                       == vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__select_num2) == 
           vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
           [0U]);
    top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out 
        = (top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_num2) 
                          == vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__select_num2) 
              == vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list
              [1U]));
    top__DOT__exu__DOT__num2 = ((IData)(top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit)
                                 ? top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out
                                 : 0U);
    top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_num1) 
                       == vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__select_num1) == 
           vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list
           [0U]);
    top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
        = (top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_num1) 
                          == vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__select_num1) 
              == vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list
              [1U]));
    top__DOT__exu__DOT__num1 = ((IData)(top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit)
                                 ? top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out
                                 : 0U);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[0U] 
        = VL_DIV_III(32, top__DOT__exu__DOT__num1, top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[1U] 
        = (top__DOT__exu__DOT__num1 * top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[2U] 
        = (top__DOT__exu__DOT__num1 - top__DOT__exu__DOT__num2);
    vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[3U] 
        = (top__DOT__exu__DOT__num1 + top__DOT__exu__DOT__num2);
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = ((- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
           [0U]);
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = (0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
           [0U]);
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [1U]));
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | (0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [1U]));
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [2U]));
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | (0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [2U]));
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
        = (top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)((0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list
              [3U]));
    top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit 
        = ((IData)(top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit) 
           | (0U == vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__res = ((IData)(top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit)
                              ? top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out
                              : 0U);
    vlSelf->top__DOT__dnpc = ((IData)(vlSelf->top__DOT__pc_write)
                               ? vlSelf->top__DOT__res
                               : ((IData)(4U) + vlSelf->outpc));
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    vlSelf->outpc = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->data[__Vi0] = 0;
    }
    vlSelf->top__DOT__dnpc = 0;
    vlSelf->top__DOT__res = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__regfile__data[__Vi0] = 0;
    }
    vlSelf->top__DOT__pc_write = 0;
    vlSelf->top__DOT__select_num1 = 0;
    vlSelf->top__DOT__select_num2 = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__regfile__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->__Vtrigrprev__TOP__clk = 0;
}
