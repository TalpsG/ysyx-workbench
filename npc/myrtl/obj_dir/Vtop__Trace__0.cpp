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
    VlWide<6>/*191:0*/ __Vtemp_ha014259e__0;
    VlWide<7>/*223:0*/ __Vtemp_h81eb4d05__0;
    VlWide<3>/*95:0*/ __Vtemp_h98da5384__0;
    VlWide<4>/*127:0*/ __Vtemp_h20b531de__0;
    VlWide<3>/*95:0*/ __Vtemp_hf743ae85__0;
    VlWide<13>/*415:0*/ __Vtemp_h74205673__0;
    VlWide<10>/*319:0*/ __Vtemp_hcfee3fac__0;
    VlWide<10>/*319:0*/ __Vtemp_h34867a30__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[7]),7);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+70,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+71,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+72,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+73,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+74,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+75,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+76,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+77,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+78,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[10]),4);
        bufp->chgSData(oldp+82,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+83,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+84,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+85,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+86,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+87,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+88,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+89,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+90,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[8]),10);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+97,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+99,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+100,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+101,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+102,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+103,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+104,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+105,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[8]),3);
        bufp->chgSData(oldp+109,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+110,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+111,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+112,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+113,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+114,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+115,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+116,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+117,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[8]),10);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+120,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+123,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+126,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+127,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+135,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[8]),3);
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+139,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+140,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+141,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[7]),7);
        bufp->chgSData(oldp+144,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+145,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+146,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+147,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+148,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+149,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[5]),9);
        bufp->chgCData(oldp+150,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+151,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+152,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+153,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+154,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+155,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+156,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[0]),6);
        bufp->chgCData(oldp+157,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[1]),6);
        bufp->chgCData(oldp+158,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[2]),6);
        bufp->chgCData(oldp+159,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[3]),6);
        bufp->chgCData(oldp+160,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[4]),6);
        bufp->chgCData(oldp+161,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[5]),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__dnpc),32);
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__idu_ready));
        bufp->chgBit(oldp+164,(vlSelf->top__DOT__ifu_valid));
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__ifu_araddr),32);
        bufp->chgBit(oldp+166,(vlSelf->top__DOT__ifu_arvalid));
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__ifu_rdata),32);
        bufp->chgBit(oldp+168,(vlSelf->top__DOT__ifu_rvalid));
        bufp->chgCData(oldp+169,(vlSelf->top__DOT__ifu_rresp),2);
        bufp->chgBit(oldp+170,(vlSelf->top__DOT__ifu_rready));
        bufp->chgCData(oldp+171,((0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+172,((0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+173,((0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                           >> 7U))),5);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__imm),32);
        bufp->chgCData(oldp+175,((vlSelf->top__DOT__u_IDU__DOT__ins 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+176,((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)),7);
        bufp->chgCData(oldp+177,((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+178,(vlSelf->top__DOT__select_oprand1),3);
        bufp->chgCData(oldp+179,(vlSelf->top__DOT__select_oprand2),3);
        bufp->chgBit(oldp+180,((1U & (((3U == (0x7fU 
                                               & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)))
                                       ? ((IData)(vlSelf->top__DOT__mem_rvalid)
                                           ? (IData)(vlSelf->top__DOT__u_IDU__DOT__fake_reg_write)
                                           : 0U) : (IData)(vlSelf->top__DOT__u_IDU__DOT__fake_reg_write)))));
        bufp->chgBit(oldp+181,(vlSelf->top__DOT__mem_write));
        bufp->chgBit(oldp+182,(vlSelf->top__DOT__mem_read));
        bufp->chgBit(oldp+183,(vlSelf->top__DOT__is_csr));
        bufp->chgCData(oldp+184,((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                        >> 0x14U))),3);
        bufp->chgBit(oldp+185,(((3U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                | (0x23U == (0x7fU 
                                             & vlSelf->top__DOT__u_IDU__DOT__ins)))));
        bufp->chgBit(oldp+186,((0x63U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins))));
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__reg_wdata),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__reg_rdata1),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__reg_rdata2),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__oprand1),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__oprand2),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__exu_res),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__mem_rdata),32);
        bufp->chgCData(oldp+194,(vlSelf->top__DOT__mem_wmask),8);
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__mem_awvalid));
        bufp->chgBit(oldp+196,(vlSelf->top__DOT__mem_awready));
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__mem_awaddr),32);
        bufp->chgBit(oldp+198,(vlSelf->top__DOT__mem_wvalid));
        bufp->chgCData(oldp+199,(vlSelf->top__DOT__mem_wstrb),8);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__mem_wdata),32);
        bufp->chgBit(oldp+201,(vlSelf->top__DOT__mem_wready));
        bufp->chgBit(oldp+202,(vlSelf->top__DOT__mem_bready));
        bufp->chgBit(oldp+203,(vlSelf->top__DOT__mem_bvalid));
        bufp->chgCData(oldp+204,(vlSelf->top__DOT__mem_bresp),2);
        bufp->chgBit(oldp+205,(vlSelf->top__DOT__mem_arvalid));
        bufp->chgBit(oldp+206,(vlSelf->top__DOT__mem_arready));
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__mem_araddr),32);
        bufp->chgBit(oldp+208,(vlSelf->top__DOT__mem_rvalid));
        bufp->chgBit(oldp+209,(vlSelf->top__DOT__mem_rready));
        bufp->chgCData(oldp+210,(vlSelf->top__DOT__mem_rresp),2);
        bufp->chgIData(oldp+211,((vlSelf->top__DOT__imm 
                                  + vlSelf->top__DOT__u_IFU__DOT__pc)),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__fake_csr_wdata),32);
        bufp->chgBit(oldp+213,(((0x63U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                & vlSelf->top__DOT__exu_res)));
        bufp->chgBit(oldp+214,((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)));
        bufp->chgBit(oldp+215,((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)));
        bufp->chgBit(oldp+216,(vlSelf->top__DOT__mem_finish));
        bufp->chgBit(oldp+217,(((0x6fU == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->top__DOT__u_IDU__DOT__ins)))));
        bufp->chgCData(oldp+218,(vlSelf->top__DOT__csr_write),6);
        bufp->chgIData(oldp+219,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                   ? 1U : vlSelf->top__DOT__fake_csr_wdata)),32);
        bufp->chgIData(oldp+220,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [0U]),32);
        bufp->chgIData(oldp+221,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [1U]),32);
        bufp->chgIData(oldp+222,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [2U]),32);
        bufp->chgIData(oldp+223,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [3U]),32);
        bufp->chgIData(oldp+224,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [4U]),32);
        bufp->chgIData(oldp+225,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [5U]),32);
        bufp->chgIData(oldp+226,(vlSelf->top__DOT__csr_rdata),32);
        bufp->chgCData(oldp+227,(vlSelf->top__DOT__mem_pos),2);
        bufp->chgIData(oldp+228,(vlSelf->top__DOT__mem_rdata_final),32);
        bufp->chgCData(oldp+229,(vlSelf->top__DOT__RDATA__DOT__rdata_b),8);
        bufp->chgSData(oldp+230,(vlSelf->top__DOT__RDATA__DOT__rdata_h),16);
        __Vtemp_ha014259e__0[0U] = (IData)((0x500000000ULL 
                                            | (((QData)((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b)) 
                                                << 0x23U) 
                                               | (QData)((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h)))));
        __Vtemp_ha014259e__0[1U] = (IData)(((0x500000000ULL 
                                             | (((QData)((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b)) 
                                                 << 0x23U) 
                                                | (QData)((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h)))) 
                                            >> 0x20U));
        __Vtemp_ha014259e__0[2U] = (0x20U | (vlSelf->top__DOT__mem_rdata 
                                             << 6U));
        __Vtemp_ha014259e__0[3U] = (0x80U | ((0xfffffe00U 
                                              & (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h) 
                                                                 >> 0xfU)))) 
                                                  << 0x19U) 
                                                 | ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h) 
                                                    << 9U))) 
                                             | (vlSelf->top__DOT__mem_rdata 
                                                >> 0x1aU)));
        __Vtemp_ha014259e__0[4U] = (0x200U | ((0xfffff000U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b) 
                                                                  >> 7U)))) 
                                                   << 0x14U) 
                                                  | ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b) 
                                                     << 0xcU))) 
                                              | (0x1ffU 
                                                 & ((0x1ffU 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h) 
                                                                       >> 0xfU)))) 
                                                        >> 7U)) 
                                                    | ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_h) 
                                                       >> 0x17U)))));
        __Vtemp_ha014259e__0[5U] = (0xfffU & ((0xfffU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b) 
                                                                 >> 7U)))) 
                                                  >> 0xcU)) 
                                              | ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b) 
                                                 >> 0x14U)));
        bufp->chgWData(oldp+231,(__Vtemp_ha014259e__0),175);
        bufp->chgQData(oldp+237,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+239,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+241,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+243,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+245,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+250,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+251,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+252,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+253,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+254,((((QData)((IData)(
                                                   (0xffU 
                                                    & vlSelf->top__DOT__mem_rdata))) 
                                   << 0x1eU) | (QData)((IData)(
                                                               (0x10080300U 
                                                                | ((0xff00000U 
                                                                    & (vlSelf->top__DOT__mem_rdata 
                                                                       << 0xcU)) 
                                                                   | ((0x3fc00U 
                                                                       & (vlSelf->top__DOT__mem_rdata 
                                                                          >> 6U)) 
                                                                      | (vlSelf->top__DOT__mem_rdata 
                                                                         >> 0x18U)))))))),40);
        bufp->chgSData(oldp+256,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+257,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+258,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+259,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgCData(oldp+260,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+261,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+262,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+263,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[3]),8);
        bufp->chgCData(oldp+264,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+266,((0x400000000ULL | 
                                  (((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->top__DOT__mem_rdata))) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (vlSelf->top__DOT__mem_rdata 
                                                                      >> 8U)))) 
                                                  << 0x12U) 
                                                 | (QData)((IData)(
                                                                   (0x20000U 
                                                                    | (vlSelf->top__DOT__mem_rdata 
                                                                       >> 0x10U)))))))),54);
        bufp->chgIData(oldp+268,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__pair_list[0]),18);
        bufp->chgIData(oldp+269,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__pair_list[1]),18);
        bufp->chgIData(oldp+270,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__pair_list[2]),18);
        bufp->chgSData(oldp+271,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[0]),16);
        bufp->chgSData(oldp+272,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[1]),16);
        bufp->chgSData(oldp+273,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[2]),16);
        bufp->chgSData(oldp+274,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out),16);
        bufp->chgBit(oldp+275,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__hit));
        __Vtemp_h81eb4d05__0[0U] = (IData)((0x500000000ULL 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__u_CSR__DOT__rf
                                                              [5U]))));
        __Vtemp_h81eb4d05__0[1U] = ((vlSelf->top__DOT__u_CSR__DOT__rf
                                     [4U] << 3U) | (IData)(
                                                           ((0x500000000ULL 
                                                             | (QData)((IData)(
                                                                               vlSelf->top__DOT__u_CSR__DOT__rf
                                                                               [5U]))) 
                                                            >> 0x20U)));
        __Vtemp_h81eb4d05__0[2U] = (0x20U | ((vlSelf->top__DOT__u_CSR__DOT__rf
                                              [3U] 
                                              << 6U) 
                                             | (vlSelf->top__DOT__u_CSR__DOT__rf
                                                [4U] 
                                                >> 0x1dU)));
        __Vtemp_h81eb4d05__0[3U] = (0xc0U | ((vlSelf->top__DOT__u_CSR__DOT__rf
                                              [2U] 
                                              << 9U) 
                                             | (vlSelf->top__DOT__u_CSR__DOT__rf
                                                [3U] 
                                                >> 0x1aU)));
        __Vtemp_h81eb4d05__0[4U] = (0x400U | ((vlSelf->top__DOT__u_CSR__DOT__rf
                                               [1U] 
                                               << 0xcU) 
                                              | (vlSelf->top__DOT__u_CSR__DOT__rf
                                                 [2U] 
                                                 >> 0x17U)));
        __Vtemp_h81eb4d05__0[5U] = (0x1000U | ((vlSelf->top__DOT__u_CSR__DOT__rf
                                                [0U] 
                                                << 0xfU) 
                                               | (vlSelf->top__DOT__u_CSR__DOT__rf
                                                  [1U] 
                                                  >> 0x14U)));
        __Vtemp_h81eb4d05__0[6U] = (vlSelf->top__DOT__u_CSR__DOT__rf
                                    [0U] >> 0x11U);
        bufp->chgWData(oldp+276,(__Vtemp_h81eb4d05__0),210);
        bufp->chgQData(oldp+283,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+285,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+287,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+289,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+291,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+293,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+302,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit));
        __Vtemp_h98da5384__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))));
        __Vtemp_h98da5384__0[1U] = (((vlSelf->top__DOT__csr_rdata 
                                      | vlSelf->top__DOT__reg_rdata1) 
                                     << 3U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))) 
                                                       >> 0x20U)));
        __Vtemp_h98da5384__0[2U] = (0x10U | ((vlSelf->top__DOT__csr_rdata 
                                              | vlSelf->top__DOT__reg_rdata1) 
                                             >> 0x1dU));
        bufp->chgWData(oldp+303,(__Vtemp_h98da5384__0),70);
        bufp->chgQData(oldp+306,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+308,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+311,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+312,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+313,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit));
        __Vtemp_h20b531de__0[0U] = (IData)((0x200000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))));
        __Vtemp_h20b531de__0[1U] = ((vlSelf->top__DOT__u_IFU__DOT__pc 
                                     << 3U) | (IData)(
                                                      ((0x200000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))) 
                                                       >> 0x20U)));
        __Vtemp_h20b531de__0[2U] = (8U | (vlSelf->top__DOT__u_IFU__DOT__pc 
                                          >> 0x1dU));
        __Vtemp_h20b531de__0[3U] = 0U;
        bufp->chgWData(oldp+314,(__Vtemp_h20b531de__0),105);
        bufp->chgQData(oldp+318,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+320,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+322,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgIData(oldp+324,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+325,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+326,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+327,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+328,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit));
        __Vtemp_hf743ae85__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__imm))));
        __Vtemp_hf743ae85__0[1U] = ((vlSelf->top__DOT__reg_rdata2 
                                     << 3U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__imm))) 
                                                       >> 0x20U)));
        __Vtemp_hf743ae85__0[2U] = (vlSelf->top__DOT__reg_rdata2 
                                    >> 0x1dU);
        bufp->chgWData(oldp+329,(__Vtemp_hf743ae85__0),70);
        bufp->chgQData(oldp+332,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+334,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgIData(oldp+336,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+337,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+338,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+339,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+340,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+342,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+344,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+346,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+348,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+350,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+352,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+354,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+356,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+357,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+358,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+359,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+360,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+361,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+362,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+363,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+364,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+365,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+366,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+367,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+368,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_arready));
        bufp->chgBit(oldp+369,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_awready));
        bufp->chgBit(oldp+370,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_wready));
        bufp->chgBit(oldp+371,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_bvalid));
        bufp->chgCData(oldp+372,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_bresp),2);
        bufp->chgIData(oldp+373,(vlSelf->top__DOT__u_ARBITER__DOT__awaddr_temp),32);
        bufp->chgBit(oldp+374,(vlSelf->top__DOT__u_ARBITER__DOT__wvalid_temp));
        bufp->chgCData(oldp+375,(vlSelf->top__DOT__u_ARBITER__DOT__wstrb_temp),8);
        bufp->chgIData(oldp+376,(vlSelf->top__DOT__u_ARBITER__DOT__wdata_temp),32);
        bufp->chgBit(oldp+377,(vlSelf->top__DOT__u_ARBITER__DOT__bready_temp));
        bufp->chgBit(oldp+378,(vlSelf->top__DOT__u_ARBITER__DOT__arvalid_temp));
        bufp->chgIData(oldp+379,(vlSelf->top__DOT__u_ARBITER__DOT__araddr_temp),32);
        bufp->chgBit(oldp+380,(vlSelf->top__DOT__u_ARBITER__DOT__rready_temp));
        bufp->chgIData(oldp+381,(vlSelf->top__DOT__u_ARBITER__DOT__araddr),32);
        bufp->chgBit(oldp+382,(vlSelf->top__DOT__u_ARBITER__DOT__arvalid));
        bufp->chgBit(oldp+383,(vlSelf->top__DOT__u_ARBITER__DOT__arready));
        bufp->chgBit(oldp+384,(vlSelf->top__DOT__u_ARBITER__DOT__rready));
        bufp->chgCData(oldp+385,(vlSelf->top__DOT__u_ARBITER__DOT__rresp),2);
        bufp->chgIData(oldp+386,(vlSelf->top__DOT__u_ARBITER__DOT__rdata),32);
        bufp->chgBit(oldp+387,(vlSelf->top__DOT__u_ARBITER__DOT__rvalid));
        bufp->chgIData(oldp+388,(vlSelf->top__DOT__u_ARBITER__DOT__awaddr),32);
        bufp->chgBit(oldp+389,(vlSelf->top__DOT__u_ARBITER__DOT__awvalid));
        bufp->chgBit(oldp+390,(vlSelf->top__DOT__u_ARBITER__DOT__awready));
        bufp->chgIData(oldp+391,(vlSelf->top__DOT__u_ARBITER__DOT__wdata),32);
        bufp->chgBit(oldp+392,(vlSelf->top__DOT__u_ARBITER__DOT__wvalid));
        bufp->chgCData(oldp+393,(vlSelf->top__DOT__u_ARBITER__DOT__wstrb),8);
        bufp->chgBit(oldp+394,(vlSelf->top__DOT__u_ARBITER__DOT__wready));
        bufp->chgBit(oldp+395,(vlSelf->top__DOT__u_ARBITER__DOT__bready));
        bufp->chgCData(oldp+396,(vlSelf->top__DOT__u_ARBITER__DOT__bresp),2);
        bufp->chgBit(oldp+397,(vlSelf->top__DOT__u_ARBITER__DOT__bvalid));
        bufp->chgCData(oldp+398,(vlSelf->top__DOT__u_ARBITER__DOT__state),3);
        bufp->chgBit(oldp+399,(vlSelf->top__DOT__u_ARBITER__DOT__mem_access));
        bufp->chgCData(oldp+400,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg),8);
        bufp->chgIData(oldp+401,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg),32);
        bufp->chgIData(oldp+402,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_now),32);
        bufp->chgIData(oldp+403,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_delay),32);
        bufp->chgIData(oldp+404,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_now),32);
        bufp->chgIData(oldp+405,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_delay),32);
        bufp->chgCData(oldp+406,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state),2);
        bufp->chgCData(oldp+407,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state),2);
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg),32);
        bufp->chgIData(oldp+409,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg),32);
        bufp->chgIData(oldp+410,(vlSelf->top__DOT__u_CSR__DOT__rf[0]),32);
        bufp->chgIData(oldp+411,(vlSelf->top__DOT__u_CSR__DOT__rf[1]),32);
        bufp->chgIData(oldp+412,(vlSelf->top__DOT__u_CSR__DOT__rf[2]),32);
        bufp->chgIData(oldp+413,(vlSelf->top__DOT__u_CSR__DOT__rf[3]),32);
        bufp->chgIData(oldp+414,(vlSelf->top__DOT__u_CSR__DOT__rf[4]),32);
        bufp->chgIData(oldp+415,(vlSelf->top__DOT__u_CSR__DOT__rf[5]),32);
        bufp->chgCData(oldp+416,(vlSelf->top__DOT__u_DNPC__DOT__state),2);
        bufp->chgCData(oldp+417,(vlSelf->top__DOT__u_EXU__DOT__aluop),4);
        bufp->chgCData(oldp+418,(vlSelf->top__DOT__u_EXU__DOT__B_aluop),4);
        bufp->chgCData(oldp+419,(vlSelf->top__DOT__u_EXU__DOT__IR_aluop),4);
        bufp->chgIData(oldp+420,(vlSelf->top__DOT__u_EXU__DOT__alu_res),32);
        bufp->chgBit(oldp+421,(vlSelf->top__DOT__u_EXU__DOT__neg));
        bufp->chgBit(oldp+422,(((0x37U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                | (0x17U == (0x7fU 
                                             & vlSelf->top__DOT__u_IDU__DOT__ins)))));
        bufp->chgCData(oldp+423,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+424,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+425,((0x592b98540000ULL 
                                  | (((QData)((IData)(
                                                      ((IData)(
                                                               (0x40000033U 
                                                                == 
                                                                (0x4000007fU 
                                                                 & vlSelf->top__DOT__u_IDU__DOT__ins)))
                                                        ? 1U
                                                        : 0U))) 
                                      << 0x31U) | (QData)((IData)(
                                                                  (0x31f4U 
                                                                   | (((0x40000000U 
                                                                        & vlSelf->top__DOT__u_IDU__DOT__ins)
                                                                        ? 8U
                                                                        : 7U) 
                                                                      << 0xeU))))))),56);
        bufp->chgCData(oldp+427,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+428,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+429,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+430,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+431,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+432,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+433,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[6]),7);
        bufp->chgCData(oldp+434,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[7]),7);
        bufp->chgCData(oldp+435,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+436,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+437,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+438,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+439,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+440,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+441,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+442,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+443,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+444,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+445,((0x18c000000ULL | (QData)((IData)(
                                                                   (0x98330U 
                                                                    | (((IData)(vlSelf->top__DOT__u_EXU__DOT__B_aluop) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop) 
                                                                           << 0xbU) 
                                                                          | (IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop)))))))),33);
        bufp->chgSData(oldp+447,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+448,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+449,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+450,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+451,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+452,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+453,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+454,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+455,((vlSelf->top__DOT__oprand1 
                                  - vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+456,((vlSelf->top__DOT__oprand1 
                                  + vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+457,((vlSelf->top__DOT__oprand1 
                                  ^ vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+458,((vlSelf->top__DOT__oprand1 
                                  | vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+459,((vlSelf->top__DOT__oprand1 
                                  & vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+460,((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+461,(((vlSelf->top__DOT__oprand1 
                                   < vlSelf->top__DOT__oprand2)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+462,(((0x1fU >= vlSelf->top__DOT__oprand2)
                                   ? (vlSelf->top__DOT__oprand1 
                                      << vlSelf->top__DOT__oprand2)
                                   : 0U)),32);
        bufp->chgIData(oldp+463,((vlSelf->top__DOT__oprand1 
                                  >> (0x1fU & vlSelf->top__DOT__oprand2))),32);
        bufp->chgIData(oldp+464,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__oprand2))),32);
        bufp->chgIData(oldp+465,(((vlSelf->top__DOT__oprand1 
                                   == vlSelf->top__DOT__oprand2)
                                   ? 1U : 0U)),32);
        __Vtemp_h74205673__0[0U] = (IData)((0xa00000000ULL 
                                            | (QData)((IData)(
                                                              ((vlSelf->top__DOT__oprand1 
                                                                == vlSelf->top__DOT__oprand2)
                                                                ? 1U
                                                                : 0U)))));
        __Vtemp_h74205673__0[1U] = ((((vlSelf->top__DOT__oprand1 
                                       < vlSelf->top__DOT__oprand2)
                                       ? 1U : 0U) << 4U) 
                                    | (IData)(((0xa00000000ULL 
                                                | (QData)((IData)(
                                                                  ((vlSelf->top__DOT__oprand1 
                                                                    == vlSelf->top__DOT__oprand2)
                                                                    ? 1U
                                                                    : 0U)))) 
                                               >> 0x20U)));
        __Vtemp_h74205673__0[2U] = (0x90U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                             (0x1fU 
                                                              & vlSelf->top__DOT__oprand2)) 
                                              << 8U) 
                                             | (((vlSelf->top__DOT__oprand1 
                                                  < vlSelf->top__DOT__oprand2)
                                                  ? 1U
                                                  : 0U) 
                                                >> 0x1cU)));
        __Vtemp_h74205673__0[3U] = (0x800U | (((vlSelf->top__DOT__oprand1 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__oprand2)) 
                                               << 0xcU) 
                                              | (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                                (0x1fU 
                                                                 & vlSelf->top__DOT__oprand2)) 
                                                 >> 0x18U)));
        __Vtemp_h74205673__0[4U] = (0x7000U | ((((0x1fU 
                                                  >= vlSelf->top__DOT__oprand2)
                                                  ? 
                                                 (vlSelf->top__DOT__oprand1 
                                                  << vlSelf->top__DOT__oprand2)
                                                  : 0U) 
                                                << 0x10U) 
                                               | ((vlSelf->top__DOT__oprand1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__oprand2)) 
                                                  >> 0x14U)));
        __Vtemp_h74205673__0[5U] = (0x60000U | (((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                                   ? 1U
                                                   : 0U) 
                                                 << 0x14U) 
                                                | (((0x1fU 
                                                     >= vlSelf->top__DOT__oprand2)
                                                     ? 
                                                    (vlSelf->top__DOT__oprand1 
                                                     << vlSelf->top__DOT__oprand2)
                                                     : 0U) 
                                                   >> 0x10U)));
        __Vtemp_h74205673__0[6U] = (0x500000U | (((vlSelf->top__DOT__oprand1 
                                                   & vlSelf->top__DOT__oprand2) 
                                                  << 0x18U) 
                                                 | ((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                                      ? 1U
                                                      : 0U) 
                                                    >> 0xcU)));
        __Vtemp_h74205673__0[7U] = (0x4000000U | ((
                                                   (vlSelf->top__DOT__oprand1 
                                                    | vlSelf->top__DOT__oprand2) 
                                                   << 0x1cU) 
                                                  | ((vlSelf->top__DOT__oprand1 
                                                      & vlSelf->top__DOT__oprand2) 
                                                     >> 8U)));
        __Vtemp_h74205673__0[8U] = (0x30000000U | (
                                                   (vlSelf->top__DOT__oprand1 
                                                    | vlSelf->top__DOT__oprand2) 
                                                   >> 4U));
        __Vtemp_h74205673__0[9U] = (vlSelf->top__DOT__oprand1 
                                    ^ vlSelf->top__DOT__oprand2);
        __Vtemp_h74205673__0[0xaU] = (2U | ((vlSelf->top__DOT__oprand1 
                                             - vlSelf->top__DOT__oprand2) 
                                            << 4U));
        __Vtemp_h74205673__0[0xbU] = (0x10U | (((vlSelf->top__DOT__oprand1 
                                                 + vlSelf->top__DOT__oprand2) 
                                                << 8U) 
                                               | ((vlSelf->top__DOT__oprand1 
                                                   - vlSelf->top__DOT__oprand2) 
                                                  >> 0x1cU)));
        __Vtemp_h74205673__0[0xcU] = ((vlSelf->top__DOT__oprand1 
                                       + vlSelf->top__DOT__oprand2) 
                                      >> 0x18U);
        bufp->chgWData(oldp+466,(__Vtemp_h74205673__0),396);
        bufp->chgQData(oldp+479,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+481,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+483,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+485,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+487,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+489,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+491,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+493,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+495,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+497,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+499,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgIData(oldp+501,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+502,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+503,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+504,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+505,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+506,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+507,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+508,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+509,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+510,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+511,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+512,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+513,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+514,(vlSelf->top__DOT__u_IDU__DOT__fake_reg_write));
        bufp->chgIData(oldp+515,(vlSelf->top__DOT__u_IDU__DOT__ins),32);
        bufp->chgCData(oldp+516,(vlSelf->top__DOT__u_IDU__DOT__state),2);
        bufp->chgBit(oldp+517,(vlSelf->top__DOT__u_IDU__DOT__read_flag));
        bufp->chgBit(oldp+518,(vlSelf->top__DOT__u_IDU__DOT__write_flag));
        bufp->chgIData(oldp+519,(vlSelf->top__DOT__u_IDU__DOT__immI),32);
        bufp->chgIData(oldp+520,((0xfffff000U & vlSelf->top__DOT__u_IDU__DOT__ins)),32);
        bufp->chgIData(oldp+521,((((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+522,((((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+523,((((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->top__DOT__u_IDU__DOT__ins) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                         >> 0x14U)))))),32);
        bufp->chgCData(oldp+524,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+525,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+526,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+527,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit));
        __Vtemp_hcfee3fac__0[0U] = (IData)((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI))));
        __Vtemp_hcfee3fac__0[1U] = ((0xffffff80U & 
                                     (((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                                                   >> 0x1fU))) 
                                       << 0x13U) | 
                                      ((0x7f000U & 
                                        (vlSelf->top__DOT__u_IDU__DOT__ins 
                                         >> 0xdU)) 
                                       | (0xf80U & vlSelf->top__DOT__u_IDU__DOT__ins)))) 
                                    | (IData)(((0x1300000000ULL 
                                                | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI))) 
                                               >> 0x20U)));
        __Vtemp_hcfee3fac__0[2U] = (0x1180U | ((vlSelf->top__DOT__u_IDU__DOT__immI 
                                                << 0xeU) 
                                               | (0x7fU 
                                                  & ((- (IData)(
                                                                (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                                 >> 0x1fU))) 
                                                     >> 0xdU))));
        __Vtemp_hcfee3fac__0[3U] = (0xc000U | ((0xffe00000U 
                                                & ((0xfc000000U 
                                                    & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                       << 1U)) 
                                                   | (0x3c00000U 
                                                      & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                         << 0xeU)))) 
                                               | (vlSelf->top__DOT__u_IDU__DOT__immI 
                                                  >> 0x12U)));
        __Vtemp_hcfee3fac__0[4U] = (0xc600000U | ((vlSelf->top__DOT__u_IDU__DOT__immI 
                                                   << 0x1cU) 
                                                  | (0x1fffffU 
                                                     & ((0x1ffffeU 
                                                         & ((- (IData)(
                                                                       (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                                        >> 0x1fU))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                              >> 7U))))));
        __Vtemp_hcfee3fac__0[5U] = (0x70000000U | (vlSelf->top__DOT__u_IDU__DOT__immI 
                                                   >> 4U));
        __Vtemp_hcfee3fac__0[6U] = (6U | (0xfffffff8U 
                                          & (((- (IData)(
                                                         (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                          >> 0x1fU))) 
                                              << 0x17U) 
                                             | ((0x7f8000U 
                                                 & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                    << 3U)) 
                                                | ((0x4000U 
                                                    & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                       >> 6U)) 
                                                   | (0x3ff0U 
                                                      & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                         >> 0x11U)))))));
        __Vtemp_hcfee3fac__0[7U] = (0x378U | ((0xffc00000U 
                                               & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                  << 0xaU)) 
                                              | (7U 
                                                 & ((- (IData)(
                                                               (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                                >> 0x1fU))) 
                                                    >> 9U))));
        __Vtemp_hcfee3fac__0[8U] = (0x5c00U | ((0xe0000000U 
                                                & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                   << 0x11U)) 
                                               | (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                  >> 0x16U)));
        __Vtemp_hcfee3fac__0[9U] = (0x6e0000U | (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                 >> 0xfU));
        bufp->chgWData(oldp+528,(__Vtemp_hcfee3fac__0),312);
        bufp->chgQData(oldp+538,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+540,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+542,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+544,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+546,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+548,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+550,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+552,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+554,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+555,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+556,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+557,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+558,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+559,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+560,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+561,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+562,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+563,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+564,(vlSelf->top__DOT__u_IFU__DOT__pc),32);
        bufp->chgCData(oldp+565,(vlSelf->top__DOT__u_IFU__DOT__state),2);
        bufp->chgIData(oldp+566,(vlSelf->top__DOT__u_IFU__DOT__delay),32);
        bufp->chgIData(oldp+567,(vlSelf->top__DOT__u_IFU__DOT__now),32);
        bufp->chgIData(oldp+568,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0]),32);
        bufp->chgIData(oldp+569,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[1]),32);
        bufp->chgIData(oldp+570,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[2]),32);
        bufp->chgIData(oldp+571,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[3]),32);
        bufp->chgIData(oldp+572,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[4]),32);
        bufp->chgIData(oldp+573,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[5]),32);
        bufp->chgIData(oldp+574,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[6]),32);
        bufp->chgIData(oldp+575,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[7]),32);
        bufp->chgIData(oldp+576,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[8]),32);
        bufp->chgIData(oldp+577,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[9]),32);
        bufp->chgIData(oldp+578,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[10]),32);
        bufp->chgIData(oldp+579,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[11]),32);
        bufp->chgIData(oldp+580,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[12]),32);
        bufp->chgIData(oldp+581,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[13]),32);
        bufp->chgIData(oldp+582,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[14]),32);
        bufp->chgIData(oldp+583,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[15]),32);
        bufp->chgIData(oldp+584,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[16]),32);
        bufp->chgIData(oldp+585,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[17]),32);
        bufp->chgIData(oldp+586,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[18]),32);
        bufp->chgIData(oldp+587,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[19]),32);
        bufp->chgIData(oldp+588,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[20]),32);
        bufp->chgIData(oldp+589,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[21]),32);
        bufp->chgIData(oldp+590,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[22]),32);
        bufp->chgIData(oldp+591,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[23]),32);
        bufp->chgIData(oldp+592,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[24]),32);
        bufp->chgIData(oldp+593,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[25]),32);
        bufp->chgIData(oldp+594,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[26]),32);
        bufp->chgIData(oldp+595,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[27]),32);
        bufp->chgIData(oldp+596,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[28]),32);
        bufp->chgIData(oldp+597,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[29]),32);
        bufp->chgIData(oldp+598,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[30]),32);
        bufp->chgIData(oldp+599,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[31]),32);
        bufp->chgIData(oldp+600,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+601,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+602,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+603,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+604,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+605,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+606,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+607,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+608,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+609,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+610,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+611,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+612,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+613,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+614,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+615,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+616,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+617,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+618,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+619,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+620,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+621,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+622,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+623,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+624,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+625,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+626,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+627,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+628,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+629,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+630,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+631,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgCData(oldp+632,(vlSelf->top__DOT__u_WBU__DOT__fake_csr_write),6);
        bufp->chgCData(oldp+633,(vlSelf->top__DOT__u_WBU__DOT__read_state),2);
        bufp->chgCData(oldp+634,(vlSelf->top__DOT__u_WBU__DOT__write_state),2);
        bufp->chgIData(oldp+635,(vlSelf->top__DOT__u_WBU__DOT__read_delay),32);
        bufp->chgIData(oldp+636,(vlSelf->top__DOT__u_WBU__DOT__read_now),32);
        bufp->chgIData(oldp+637,(vlSelf->top__DOT__u_WBU__DOT__write_delay),32);
        bufp->chgIData(oldp+638,(vlSelf->top__DOT__u_WBU__DOT__write_now),32);
        bufp->chgCData(oldp+639,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out),6);
        bufp->chgBit(oldp+640,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+641,(vlSelf->rst));
    bufp->chgBit(oldp+642,(vlSelf->clk));
    bufp->chgIData(oldp+643,(vlSelf->outpc),32);
    bufp->chgIData(oldp+644,(vlSelf->out_dnpc),32);
    bufp->chgIData(oldp+645,(vlSelf->out_snpc),32);
    bufp->chgIData(oldp+646,(vlSelf->ins),32);
    bufp->chgIData(oldp+647,(vlSelf->gpr[0]),32);
    bufp->chgIData(oldp+648,(vlSelf->gpr[1]),32);
    bufp->chgIData(oldp+649,(vlSelf->gpr[2]),32);
    bufp->chgIData(oldp+650,(vlSelf->gpr[3]),32);
    bufp->chgIData(oldp+651,(vlSelf->gpr[4]),32);
    bufp->chgIData(oldp+652,(vlSelf->gpr[5]),32);
    bufp->chgIData(oldp+653,(vlSelf->gpr[6]),32);
    bufp->chgIData(oldp+654,(vlSelf->gpr[7]),32);
    bufp->chgIData(oldp+655,(vlSelf->gpr[8]),32);
    bufp->chgIData(oldp+656,(vlSelf->gpr[9]),32);
    bufp->chgIData(oldp+657,(vlSelf->gpr[10]),32);
    bufp->chgIData(oldp+658,(vlSelf->gpr[11]),32);
    bufp->chgIData(oldp+659,(vlSelf->gpr[12]),32);
    bufp->chgIData(oldp+660,(vlSelf->gpr[13]),32);
    bufp->chgIData(oldp+661,(vlSelf->gpr[14]),32);
    bufp->chgIData(oldp+662,(vlSelf->gpr[15]),32);
    bufp->chgIData(oldp+663,(vlSelf->gpr[16]),32);
    bufp->chgIData(oldp+664,(vlSelf->gpr[17]),32);
    bufp->chgIData(oldp+665,(vlSelf->gpr[18]),32);
    bufp->chgIData(oldp+666,(vlSelf->gpr[19]),32);
    bufp->chgIData(oldp+667,(vlSelf->gpr[20]),32);
    bufp->chgIData(oldp+668,(vlSelf->gpr[21]),32);
    bufp->chgIData(oldp+669,(vlSelf->gpr[22]),32);
    bufp->chgIData(oldp+670,(vlSelf->gpr[23]),32);
    bufp->chgIData(oldp+671,(vlSelf->gpr[24]),32);
    bufp->chgIData(oldp+672,(vlSelf->gpr[25]),32);
    bufp->chgIData(oldp+673,(vlSelf->gpr[26]),32);
    bufp->chgIData(oldp+674,(vlSelf->gpr[27]),32);
    bufp->chgIData(oldp+675,(vlSelf->gpr[28]),32);
    bufp->chgIData(oldp+676,(vlSelf->gpr[29]),32);
    bufp->chgIData(oldp+677,(vlSelf->gpr[30]),32);
    bufp->chgIData(oldp+678,(vlSelf->gpr[31]),32);
    bufp->chgIData(oldp+679,(vlSelf->csr_reg[0]),32);
    bufp->chgIData(oldp+680,(vlSelf->csr_reg[1]),32);
    bufp->chgIData(oldp+681,(vlSelf->csr_reg[2]),32);
    bufp->chgIData(oldp+682,(vlSelf->csr_reg[3]),32);
    bufp->chgIData(oldp+683,(vlSelf->csr_reg[4]),32);
    bufp->chgIData(oldp+684,(vlSelf->csr_reg[5]),32);
    bufp->chgBit(oldp+685,(vlSelf->valid));
    bufp->chgBit(oldp+686,(vlSelf->ready));
    bufp->chgIData(oldp+687,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                               ? vlSelf->out_snpc : vlSelf->top__DOT__fake_csr_wdata)),32);
    bufp->chgCData(oldp+688,((7U & (vlSelf->ins >> 0x14U))),3);
    __Vtemp_h34867a30__0[0U] = (IData)((0x7300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__csr_rdata))));
    __Vtemp_h34867a30__0[1U] = ((vlSelf->top__DOT__exu_res 
                                 << 7U) | (IData)((
                                                   (0x7300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__csr_rdata))) 
                                                   >> 0x20U)));
    __Vtemp_h34867a30__0[2U] = (0x1980U | ((vlSelf->top__DOT__exu_res 
                                            << 0xeU) 
                                           | (vlSelf->top__DOT__exu_res 
                                              >> 0x19U)));
    __Vtemp_h34867a30__0[3U] = (0x4c000U | ((vlSelf->top__DOT__mem_rdata_final 
                                             << 0x15U) 
                                            | (vlSelf->top__DOT__exu_res 
                                               >> 0x12U)));
    __Vtemp_h34867a30__0[4U] = (0x600000U | ((vlSelf->out_snpc 
                                              << 0x1cU) 
                                             | (vlSelf->top__DOT__mem_rdata_final 
                                                >> 0xbU)));
    __Vtemp_h34867a30__0[5U] = (0x70000000U | (vlSelf->out_snpc 
                                               >> 4U));
    __Vtemp_h34867a30__0[6U] = (6U | (vlSelf->out_snpc 
                                      << 3U));
    __Vtemp_h34867a30__0[7U] = (0x378U | ((vlSelf->top__DOT__exu_res 
                                           << 0xaU) 
                                          | (vlSelf->out_snpc 
                                             >> 0x1dU)));
    __Vtemp_h34867a30__0[8U] = (0x5c00U | ((vlSelf->top__DOT__exu_res 
                                            << 0x11U) 
                                           | (vlSelf->top__DOT__exu_res 
                                              >> 0x16U)));
    __Vtemp_h34867a30__0[9U] = (0x6e0000U | (vlSelf->top__DOT__exu_res 
                                             >> 0xfU));
    bufp->chgWData(oldp+689,(__Vtemp_h34867a30__0),312);
    bufp->chgBit(oldp+699,(((3U == (0x7fU & vlSelf->ins)) 
                            | (0x23U == (0x7fU & vlSelf->ins)))));
    bufp->chgCData(oldp+700,((0x7fU & vlSelf->ins)),7);
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
