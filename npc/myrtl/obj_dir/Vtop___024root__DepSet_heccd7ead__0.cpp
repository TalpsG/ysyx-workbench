// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    CData/*0:0*/ top__DOT__cu__DOT____VdfgTmp_h0348156f__0;
    top__DOT__cu__DOT____VdfgTmp_h0348156f__0 = 0;
    CData/*0:0*/ top__DOT__cu__DOT____VdfgTmp_h2a9b951b__0;
    top__DOT__cu__DOT____VdfgTmp_h2a9b951b__0 = 0;
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
        = vlSelf->data[(0x1fU & (vlSelf->ins >> 0xfU))];
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->data[(0x1fU & (vlSelf->ins >> 0x14U))];
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
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[0U] 
        = top__DOT__imm;
    vlSelf->top__DOT__pc_write = (IData)(((0x68U == 
                                           (0x78U & vlSelf->ins)) 
                                          & (IData)(top__DOT__cu__DOT____VdfgTmp_h0348156f__0)));
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
    vlSelf->top__DOT__select_num1 = ((IData)(vlSelf->top__DOT__pc_write) 
                                     | (IData)(((0x10U 
                                                 == 
                                                 (0x78U 
                                                  & vlSelf->ins)) 
                                                & (IData)(top__DOT__cu__DOT____VdfgTmp_h0348156f__0))));
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

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__ebreak_TOP(IData/*31:0*/ ins);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__idu__DOT__ebreak_TOP(vlSelf->ins);
    __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__select_num2)))) {
        __Vdlyvval__top__DOT__regfile__DOT__rf__v0 
            = vlSelf->top__DOT__res;
        __Vdlyvset__top__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ins >> 7U));
    }
    vlSelf->outpc = vlSelf->top__DOT__dnpc;
    if (__Vdlyvset__top__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__regfile__DOT__rf__v0;
    }
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
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->outpc;
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
    vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->data[(0x1fU & (vlSelf->ins >> 0xfU))];
    vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->data[(0x1fU & (vlSelf->ins >> 0x14U))];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc/top.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
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
