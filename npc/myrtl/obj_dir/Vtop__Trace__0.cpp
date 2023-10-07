// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<8>/*255:0*/ __Vtemp_hae78bde6__0;
    VlWide<3>/*95:0*/ __Vtemp_h45b37386__0;
    VlWide<4>/*127:0*/ __Vtemp_hc96ce21a__0;
    VlWide<12>/*383:0*/ __Vtemp_h319a5eb8__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[3]),6);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[4]),6);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[5]),6);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[6]),6);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[7]),6);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[7]),3);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__pair_list[0]),15);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__pair_list[1]),15);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__pair_list[2]),15);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__pair_list[0]),6);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__pair_list[1]),6);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__pair_list[2]),6);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[2]),2);
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list[1]));
        bufp->chgSData(oldp+56,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+57,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+58,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgSData(oldp+59,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[3]),11);
        bufp->chgSData(oldp+60,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[4]),11);
        bufp->chgSData(oldp+61,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[5]),11);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[6]),11);
        bufp->chgSData(oldp+63,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[7]),11);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[8]),11);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[8]),4);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[9]),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__imm),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__res),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__mem_rdata),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__mem_wdata),32);
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__extop),4);
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__pc_write));
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__select_num2));
        bufp->chgBit(oldp+100,(vlSelf->top__DOT__sub));
        bufp->chgBit(oldp+101,((6U == (IData)(vlSelf->top__DOT__extop))));
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__select_num1),2);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__aluop),3);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__rs1_value),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__reg_wdata),32);
        bufp->chgBit(oldp+106,((1U == (IData)(vlSelf->top__DOT__extop))));
        bufp->chgBit(oldp+107,((5U == (IData)(vlSelf->top__DOT__extop))));
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__mem_mask),8);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__reg_waddr),5);
        bufp->chgBit(oldp+110,(vlSelf->top__DOT__reg_write));
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__cu__DOT__fake_aluop),3);
        bufp->chgSData(oldp+112,((0x850U | (((IData)(vlSelf->top__DOT__cu__DOT__fake_aluop) 
                                             << 7U) 
                                            | (IData)(vlSelf->top__DOT__cu__DOT__fake_aluop)))),14);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+118,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key),7);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+123,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+125,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__exu__DOT__num1),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__exu__DOT__num2),32);
        bufp->chgIData(oldp+128,(((IData)(vlSelf->top__DOT__sub)
                                   ? vlSelf->top__DOT__exu__DOT__alu__DOT__res_set
                                   : (vlSelf->top__DOT__exu__DOT__num1 
                                      + vlSelf->top__DOT__exu__DOT__num2))),32);
        bufp->chgIData(oldp+129,(((0x1fU >= (0x1fU 
                                             & vlSelf->top__DOT__exu__DOT__num2))
                                   ? (vlSelf->top__DOT__exu__DOT__num1 
                                      << (0x1fU & vlSelf->top__DOT__exu__DOT__num2))
                                   : 0U)),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__exu__DOT__alu__DOT__res_set),32);
        bufp->chgIData(oldp+132,((vlSelf->top__DOT__exu__DOT__num1 
                                  | vlSelf->top__DOT__exu__DOT__num2)),32);
        bufp->chgIData(oldp+133,((vlSelf->top__DOT__exu__DOT__num1 
                                  ^ vlSelf->top__DOT__exu__DOT__num2)),32);
        bufp->chgIData(oldp+134,((vlSelf->top__DOT__exu__DOT__num1 
                                  & vlSelf->top__DOT__exu__DOT__num2)),32);
        __Vtemp_hae78bde6__0[0U] = (IData)((0x600000000ULL 
                                            | (QData)((IData)(
                                                              (vlSelf->top__DOT__exu__DOT__num1 
                                                               & vlSelf->top__DOT__exu__DOT__num2)))));
        __Vtemp_hae78bde6__0[1U] = (((vlSelf->top__DOT__exu__DOT__num1 
                                      ^ vlSelf->top__DOT__exu__DOT__num2) 
                                     << 3U) | (IData)(
                                                      ((0x600000000ULL 
                                                        | (QData)((IData)(
                                                                          (vlSelf->top__DOT__exu__DOT__num1 
                                                                           & vlSelf->top__DOT__exu__DOT__num2)))) 
                                                       >> 0x20U)));
        __Vtemp_hae78bde6__0[2U] = (0x28U | (((vlSelf->top__DOT__exu__DOT__num1 
                                               | vlSelf->top__DOT__exu__DOT__num2) 
                                              << 6U) 
                                             | ((vlSelf->top__DOT__exu__DOT__num1 
                                                 ^ vlSelf->top__DOT__exu__DOT__num2) 
                                                >> 0x1dU)));
        __Vtemp_hae78bde6__0[3U] = (0x100U | ((vlSelf->top__DOT__exu__DOT__alu__DOT__res_set 
                                               << 9U) 
                                              | ((vlSelf->top__DOT__exu__DOT__num1 
                                                  | vlSelf->top__DOT__exu__DOT__num2) 
                                                 >> 0x1aU)));
        __Vtemp_hae78bde6__0[4U] = (0x600U | ((vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0 
                                               << 0xcU) 
                                              | (vlSelf->top__DOT__exu__DOT__alu__DOT__res_set 
                                                 >> 0x17U)));
        __Vtemp_hae78bde6__0[5U] = (0x2000U | ((((0x1fU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__exu__DOT__num2))
                                                  ? 
                                                 (vlSelf->top__DOT__exu__DOT__num1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__exu__DOT__num2))
                                                  : 0U) 
                                                << 0xfU) 
                                               | (vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0 
                                                  >> 0x14U)));
        __Vtemp_hae78bde6__0[6U] = (0x8000U | ((((IData)(vlSelf->top__DOT__sub)
                                                  ? vlSelf->top__DOT__exu__DOT__alu__DOT__res_set
                                                  : 
                                                 (vlSelf->top__DOT__exu__DOT__num1 
                                                  + vlSelf->top__DOT__exu__DOT__num2)) 
                                                << 0x12U) 
                                               | (((0x1fU 
                                                    >= 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__exu__DOT__num2))
                                                    ? 
                                                   (vlSelf->top__DOT__exu__DOT__num1 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__exu__DOT__num2))
                                                    : 0U) 
                                                  >> 0x11U)));
        __Vtemp_hae78bde6__0[7U] = (((IData)(vlSelf->top__DOT__sub)
                                      ? vlSelf->top__DOT__exu__DOT__alu__DOT__res_set
                                      : (vlSelf->top__DOT__exu__DOT__num1 
                                         + vlSelf->top__DOT__exu__DOT__num2)) 
                                    >> 0xeU);
        bufp->chgWData(oldp+135,(__Vtemp_hae78bde6__0),245);
        bufp->chgQData(oldp+143,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+145,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+147,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+149,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+151,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+153,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgQData(oldp+155,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[6]),35);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+165,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+166,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__pair_list[0]),34);
        bufp->chgQData(oldp+168,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__pair_list[1]),34);
        bufp->chgQData(oldp+170,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__pair_list[2]),34);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+176,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit));
        __Vtemp_h45b37386__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__mem_wdata))));
        __Vtemp_h45b37386__0[1U] = ((vlSelf->top__DOT__imm 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__mem_wdata))) 
                                                       >> 0x20U)));
        __Vtemp_h45b37386__0[2U] = (vlSelf->top__DOT__imm 
                                    >> 0x1fU);
        bufp->chgWData(oldp+177,(__Vtemp_h45b37386__0),66);
        bufp->chgQData(oldp+180,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+182,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+187,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__idu__DOT__immJ),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__idu__DOT__immB),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__idu__DOT__immI),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__idu__DOT__immS),32);
        bufp->chgCData(oldp+192,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+193,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+194,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+196,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+198,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+200,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+202,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+204,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+206,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+208,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+210,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+212,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgIData(oldp+214,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+215,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+216,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+217,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+218,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+219,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+225,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+226,(vlSelf->top__DOT____Vcellout__regfile__data[0]),32);
        bufp->chgIData(oldp+227,(vlSelf->top__DOT____Vcellout__regfile__data[1]),32);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT____Vcellout__regfile__data[2]),32);
        bufp->chgIData(oldp+229,(vlSelf->top__DOT____Vcellout__regfile__data[3]),32);
        bufp->chgIData(oldp+230,(vlSelf->top__DOT____Vcellout__regfile__data[4]),32);
        bufp->chgIData(oldp+231,(vlSelf->top__DOT____Vcellout__regfile__data[5]),32);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT____Vcellout__regfile__data[6]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT____Vcellout__regfile__data[7]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT____Vcellout__regfile__data[8]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT____Vcellout__regfile__data[9]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT____Vcellout__regfile__data[10]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT____Vcellout__regfile__data[11]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT____Vcellout__regfile__data[12]),32);
        bufp->chgIData(oldp+239,(vlSelf->top__DOT____Vcellout__regfile__data[13]),32);
        bufp->chgIData(oldp+240,(vlSelf->top__DOT____Vcellout__regfile__data[14]),32);
        bufp->chgIData(oldp+241,(vlSelf->top__DOT____Vcellout__regfile__data[15]),32);
        bufp->chgIData(oldp+242,(vlSelf->top__DOT____Vcellout__regfile__data[16]),32);
        bufp->chgIData(oldp+243,(vlSelf->top__DOT____Vcellout__regfile__data[17]),32);
        bufp->chgIData(oldp+244,(vlSelf->top__DOT____Vcellout__regfile__data[18]),32);
        bufp->chgIData(oldp+245,(vlSelf->top__DOT____Vcellout__regfile__data[19]),32);
        bufp->chgIData(oldp+246,(vlSelf->top__DOT____Vcellout__regfile__data[20]),32);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT____Vcellout__regfile__data[21]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT____Vcellout__regfile__data[22]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT____Vcellout__regfile__data[23]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT____Vcellout__regfile__data[24]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT____Vcellout__regfile__data[25]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT____Vcellout__regfile__data[26]),32);
        bufp->chgIData(oldp+253,(vlSelf->top__DOT____Vcellout__regfile__data[27]),32);
        bufp->chgIData(oldp+254,(vlSelf->top__DOT____Vcellout__regfile__data[28]),32);
        bufp->chgIData(oldp+255,(vlSelf->top__DOT____Vcellout__regfile__data[29]),32);
        bufp->chgIData(oldp+256,(vlSelf->top__DOT____Vcellout__regfile__data[30]),32);
        bufp->chgIData(oldp+257,(vlSelf->top__DOT____Vcellout__regfile__data[31]),32);
        bufp->chgIData(oldp+258,(vlSelf->top__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+260,(vlSelf->top__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+265,(vlSelf->top__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+266,(vlSelf->top__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+267,(vlSelf->top__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+271,(vlSelf->top__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+272,(vlSelf->top__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+276,(vlSelf->top__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+277,(vlSelf->top__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+278,(vlSelf->top__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+279,(vlSelf->top__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+280,(vlSelf->top__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+281,(vlSelf->top__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+282,(vlSelf->top__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+283,(vlSelf->top__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+284,(vlSelf->top__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+285,(vlSelf->top__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+286,(vlSelf->top__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+287,(vlSelf->top__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+288,(vlSelf->top__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+289,(vlSelf->top__DOT__regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+290,(vlSelf->clk));
    bufp->chgIData(oldp+291,(vlSelf->outpc),32);
    bufp->chgIData(oldp+292,(vlSelf->out_dnpc),32);
    bufp->chgIData(oldp+293,(vlSelf->ins),32);
    bufp->chgIData(oldp+294,(vlSelf->gpr[0]),32);
    bufp->chgIData(oldp+295,(vlSelf->gpr[1]),32);
    bufp->chgIData(oldp+296,(vlSelf->gpr[2]),32);
    bufp->chgIData(oldp+297,(vlSelf->gpr[3]),32);
    bufp->chgIData(oldp+298,(vlSelf->gpr[4]),32);
    bufp->chgIData(oldp+299,(vlSelf->gpr[5]),32);
    bufp->chgIData(oldp+300,(vlSelf->gpr[6]),32);
    bufp->chgIData(oldp+301,(vlSelf->gpr[7]),32);
    bufp->chgIData(oldp+302,(vlSelf->gpr[8]),32);
    bufp->chgIData(oldp+303,(vlSelf->gpr[9]),32);
    bufp->chgIData(oldp+304,(vlSelf->gpr[10]),32);
    bufp->chgIData(oldp+305,(vlSelf->gpr[11]),32);
    bufp->chgIData(oldp+306,(vlSelf->gpr[12]),32);
    bufp->chgIData(oldp+307,(vlSelf->gpr[13]),32);
    bufp->chgIData(oldp+308,(vlSelf->gpr[14]),32);
    bufp->chgIData(oldp+309,(vlSelf->gpr[15]),32);
    bufp->chgIData(oldp+310,(vlSelf->gpr[16]),32);
    bufp->chgIData(oldp+311,(vlSelf->gpr[17]),32);
    bufp->chgIData(oldp+312,(vlSelf->gpr[18]),32);
    bufp->chgIData(oldp+313,(vlSelf->gpr[19]),32);
    bufp->chgIData(oldp+314,(vlSelf->gpr[20]),32);
    bufp->chgIData(oldp+315,(vlSelf->gpr[21]),32);
    bufp->chgIData(oldp+316,(vlSelf->gpr[22]),32);
    bufp->chgIData(oldp+317,(vlSelf->gpr[23]),32);
    bufp->chgIData(oldp+318,(vlSelf->gpr[24]),32);
    bufp->chgIData(oldp+319,(vlSelf->gpr[25]),32);
    bufp->chgIData(oldp+320,(vlSelf->gpr[26]),32);
    bufp->chgIData(oldp+321,(vlSelf->gpr[27]),32);
    bufp->chgIData(oldp+322,(vlSelf->gpr[28]),32);
    bufp->chgIData(oldp+323,(vlSelf->gpr[29]),32);
    bufp->chgIData(oldp+324,(vlSelf->gpr[30]),32);
    bufp->chgIData(oldp+325,(vlSelf->gpr[31]),32);
    bufp->chgCData(oldp+326,((0x1fU & (vlSelf->ins 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+327,((0x1fU & (vlSelf->ins 
                                       >> 0x14U))),5);
    bufp->chgBit(oldp+328,((IData)(((0x40005000U == 
                                     (0x40007000U & vlSelf->ins)) 
                                    & ((2U == (IData)(vlSelf->top__DOT__extop)) 
                                       | (0xaU == (IData)(vlSelf->top__DOT__extop)))))));
    bufp->chgCData(oldp+329,((7U & (vlSelf->ins >> 0xcU))),3);
    bufp->chgCData(oldp+330,((vlSelf->ins >> 0x19U)),7);
    bufp->chgIData(oldp+331,(((IData)(4U) + vlSelf->outpc)),32);
    bufp->chgIData(oldp+332,((vlSelf->outpc + vlSelf->top__DOT__imm)),32);
    __Vtemp_hc96ce21a__0[0U] = 0U;
    __Vtemp_hc96ce21a__0[1U] = (2U | (vlSelf->outpc 
                                      << 2U));
    __Vtemp_hc96ce21a__0[2U] = (4U | ((vlSelf->top__DOT__rs1_value 
                                       << 4U) | (vlSelf->outpc 
                                                 >> 0x1eU)));
    __Vtemp_hc96ce21a__0[3U] = (vlSelf->top__DOT__rs1_value 
                                >> 0x1cU);
    bufp->chgWData(oldp+333,(__Vtemp_hc96ce21a__0),102);
    bufp->chgIData(oldp+337,((0xfffff000U & vlSelf->ins)),32);
    bufp->chgCData(oldp+338,((0x7fU & vlSelf->ins)),7);
    __Vtemp_h319a5eb8__0[0U] = (IData)((0x900000000ULL 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->ins)))));
    __Vtemp_h319a5eb8__0[1U] = ((0xffff0000U & (vlSelf->ins 
                                                << 4U)) 
                                | (IData)(((0x900000000ULL 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->ins)))) 
                                           >> 0x20U)));
    __Vtemp_h319a5eb8__0[2U] = (0x80U | ((vlSelf->top__DOT__idu__DOT__immJ 
                                          << 8U) | 
                                         (vlSelf->ins 
                                          >> 0x1cU)));
    __Vtemp_h319a5eb8__0[3U] = (0x700U | ((vlSelf->top__DOT__idu__DOT__immB 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__idu__DOT__immJ 
                                             >> 0x18U)));
    __Vtemp_h319a5eb8__0[4U] = (0x6000U | ((vlSelf->top__DOT__idu__DOT__immS 
                                            << 0x10U) 
                                           | (vlSelf->top__DOT__idu__DOT__immB 
                                              >> 0x14U)));
    __Vtemp_h319a5eb8__0[5U] = (0x50000U | ((vlSelf->top__DOT__idu__DOT__immI 
                                             << 0x14U) 
                                            | (vlSelf->top__DOT__idu__DOT__immS 
                                               >> 0x10U)));
    __Vtemp_h319a5eb8__0[6U] = (0x400000U | ((vlSelf->top__DOT__idu__DOT__immI 
                                              << 0x18U) 
                                             | (vlSelf->top__DOT__idu__DOT__immI 
                                                >> 0xcU)));
    __Vtemp_h319a5eb8__0[7U] = (0x3000000U | ((vlSelf->top__DOT__idu__DOT__immI 
                                               << 0x1cU) 
                                              | (vlSelf->top__DOT__idu__DOT__immI 
                                                 >> 8U)));
    __Vtemp_h319a5eb8__0[8U] = (0x20000000U | (vlSelf->top__DOT__idu__DOT__immI 
                                               >> 4U));
    __Vtemp_h319a5eb8__0[9U] = vlSelf->top__DOT__idu__DOT__immI;
    __Vtemp_h319a5eb8__0[0xaU] = (1U | (vlSelf->top__DOT__idu__DOT__immI 
                                        << 4U));
    __Vtemp_h319a5eb8__0[0xbU] = (vlSelf->top__DOT__idu__DOT__immI 
                                  >> 0x1cU);
    bufp->chgWData(oldp+339,(__Vtemp_h319a5eb8__0),360);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
