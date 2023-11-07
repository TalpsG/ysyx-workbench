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
    VlWide<7>/*223:0*/ __Vtemp_h81eb4d05__0;
    VlWide<3>/*95:0*/ __Vtemp_h98da5384__0;
    VlWide<4>/*127:0*/ __Vtemp_h20b531de__0;
    VlWide<3>/*95:0*/ __Vtemp_hf743ae85__0;
    VlWide<13>/*415:0*/ __Vtemp_h74205673__0;
    VlWide<6>/*191:0*/ __Vtemp_h2053dcec__0;
    VlWide<10>/*319:0*/ __Vtemp_h63de71c0__0;
    VlWide<10>/*319:0*/ __Vtemp_h6ae7bc82__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[7]),7);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+26,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+39,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+41,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+42,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+43,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[7]),3);
        bufp->chgCData(oldp+56,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+58,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+59,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+60,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+61,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+62,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+63,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+64,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+65,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+66,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+67,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+68,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+69,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[10]),4);
        bufp->chgSData(oldp+70,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+71,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+72,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+74,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+75,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+76,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+78,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[8]),10);
        bufp->chgCData(oldp+79,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+80,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+81,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+82,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+83,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+84,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+85,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+86,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+87,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+88,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+89,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+90,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+91,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+92,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+93,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+94,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+95,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+96,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[8]),3);
        bufp->chgSData(oldp+97,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+98,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+99,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+100,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+101,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+102,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+103,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+104,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+105,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[8]),10);
        bufp->chgCData(oldp+106,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[8]),7);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[0]),3);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[1]),3);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[2]),3);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[3]),3);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[4]),3);
        bufp->chgCData(oldp+120,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[5]),3);
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[6]),3);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[7]),3);
        bufp->chgCData(oldp+123,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[8]),3);
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+126,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+127,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[7]),7);
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+135,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+138,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+139,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+140,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+141,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+142,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+143,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__key_list[2]),2);
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
        bufp->chgCData(oldp+165,(vlSelf->top__DOT__rs1),5);
        bufp->chgCData(oldp+166,(vlSelf->top__DOT__rs2),5);
        bufp->chgCData(oldp+167,(vlSelf->top__DOT__rd),5);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__imm),32);
        bufp->chgCData(oldp+169,(vlSelf->top__DOT__func7),7);
        bufp->chgCData(oldp+170,(vlSelf->top__DOT__opcode),7);
        bufp->chgCData(oldp+171,(vlSelf->top__DOT__func3),3);
        bufp->chgCData(oldp+172,(vlSelf->top__DOT__select_oprand1),3);
        bufp->chgCData(oldp+173,(vlSelf->top__DOT__select_oprand2),3);
        bufp->chgBit(oldp+174,(((0x37U == (IData)(vlSelf->top__DOT__opcode)) 
                                | ((0x17U == (IData)(vlSelf->top__DOT__opcode)) 
                                   | ((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                                      | ((0x67U == (IData)(vlSelf->top__DOT__opcode)) 
                                         | ((3U == (IData)(vlSelf->top__DOT__opcode)) 
                                            | ((0x13U 
                                                == (IData)(vlSelf->top__DOT__opcode)) 
                                               | ((0x33U 
                                                   == (IData)(vlSelf->top__DOT__opcode)) 
                                                  | (IData)(vlSelf->top__DOT__is_csr))))))))));
        bufp->chgBit(oldp+175,((((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                                 | (0x67U == (IData)(vlSelf->top__DOT__opcode))) 
                                | (0x63U == (IData)(vlSelf->top__DOT__opcode)))));
        bufp->chgBit(oldp+176,((0x23U == (IData)(vlSelf->top__DOT__opcode))));
        bufp->chgBit(oldp+177,((3U == (IData)(vlSelf->top__DOT__opcode))));
        bufp->chgBit(oldp+178,(vlSelf->top__DOT__is_csr));
        bufp->chgCData(oldp+179,(vlSelf->top__DOT__csr_waddr),3);
        bufp->chgBit(oldp+180,(vlSelf->top__DOT__mem_access));
        bufp->chgBit(oldp+181,((0x63U == (IData)(vlSelf->top__DOT__opcode))));
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__reg_wdata),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__reg_rdata1),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__reg_rdata2),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__oprand1),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__oprand2),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__exu_res),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__mem_rdata),32);
        bufp->chgCData(oldp+189,(vlSelf->top__DOT__mem_wmask),8);
        bufp->chgBit(oldp+190,(vlSelf->top__DOT__mem_awready));
        bufp->chgBit(oldp+191,(vlSelf->top__DOT__mem_wready));
        bufp->chgBit(oldp+192,(vlSelf->top__DOT__mem_bvalid));
        bufp->chgCData(oldp+193,(vlSelf->top__DOT__mem_bresp),2);
        bufp->chgBit(oldp+194,(vlSelf->top__DOT__mem_arready));
        bufp->chgBit(oldp+195,(vlSelf->top__DOT__mem_rvalid));
        bufp->chgCData(oldp+196,(vlSelf->top__DOT__mem_rresp),2);
        bufp->chgIData(oldp+197,((vlSelf->top__DOT__imm 
                                  + vlSelf->top__DOT__u_IFU__DOT__pc)),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__fake_csr_wdata),32);
        bufp->chgBit(oldp+199,(((0x63U == (IData)(vlSelf->top__DOT__opcode)) 
                                & vlSelf->top__DOT__exu_res)));
        bufp->chgBit(oldp+200,((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)));
        bufp->chgBit(oldp+201,((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)));
        bufp->chgBit(oldp+202,(vlSelf->top__DOT__mem_finish));
        bufp->chgBit(oldp+203,(((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                                | (0x67U == (IData)(vlSelf->top__DOT__opcode)))));
        bufp->chgCData(oldp+204,(vlSelf->top__DOT__csr_write),6);
        bufp->chgIData(oldp+205,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                   ? 1U : vlSelf->top__DOT__fake_csr_wdata)),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [0U]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [1U]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [2U]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [3U]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [4U]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__u_CSR__DOT__rf
                                 [5U]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__csr_rdata),32);
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
        bufp->chgWData(oldp+213,(__Vtemp_h81eb4d05__0),210);
        bufp->chgQData(oldp+220,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+222,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+224,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+226,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+228,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgQData(oldp+230,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[5]),35);
        bufp->chgIData(oldp+232,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+233,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+234,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+235,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+236,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+237,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+238,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+239,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit));
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
        bufp->chgWData(oldp+240,(__Vtemp_h98da5384__0),70);
        bufp->chgQData(oldp+243,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+245,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgIData(oldp+247,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+248,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+249,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+250,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit));
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
        bufp->chgWData(oldp+251,(__Vtemp_h20b531de__0),105);
        bufp->chgQData(oldp+255,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+257,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+259,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgIData(oldp+261,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+262,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+264,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+265,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit));
        __Vtemp_hf743ae85__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__imm))));
        __Vtemp_hf743ae85__0[1U] = ((vlSelf->top__DOT__reg_rdata2 
                                     << 3U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__imm))) 
                                                       >> 0x20U)));
        __Vtemp_hf743ae85__0[2U] = (vlSelf->top__DOT__reg_rdata2 
                                    >> 0x1dU);
        bufp->chgWData(oldp+266,(__Vtemp_hf743ae85__0),70);
        bufp->chgQData(oldp+269,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+271,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgIData(oldp+273,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+274,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+275,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+276,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+277,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+279,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+281,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+283,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+285,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+287,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+289,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+291,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+300,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+301,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+302,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+303,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+304,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+305,(vlSelf->top__DOT__u_CSR__DOT__rf[0]),32);
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__u_CSR__DOT__rf[1]),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__u_CSR__DOT__rf[2]),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__u_CSR__DOT__rf[3]),32);
        bufp->chgIData(oldp+309,(vlSelf->top__DOT__u_CSR__DOT__rf[4]),32);
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__u_CSR__DOT__rf[5]),32);
        bufp->chgCData(oldp+311,(vlSelf->top__DOT__u_EXU__DOT__aluop),4);
        bufp->chgCData(oldp+312,(vlSelf->top__DOT__u_EXU__DOT__B_aluop),4);
        bufp->chgCData(oldp+313,(vlSelf->top__DOT__u_EXU__DOT__IR_aluop),4);
        bufp->chgIData(oldp+314,(vlSelf->top__DOT__u_EXU__DOT__alu_res),32);
        bufp->chgBit(oldp+315,(vlSelf->top__DOT__u_EXU__DOT__neg));
        bufp->chgBit(oldp+316,(((0x37U == (IData)(vlSelf->top__DOT__opcode)) 
                                | (0x17U == (IData)(vlSelf->top__DOT__opcode)))));
        bufp->chgCData(oldp+317,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+318,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+319,((0x592b98540000ULL 
                                  | (((QData)((IData)(
                                                      (((0x33U 
                                                         == (IData)(vlSelf->top__DOT__opcode)) 
                                                        & (IData)(vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0))
                                                        ? 1U
                                                        : 0U))) 
                                      << 0x31U) | (QData)((IData)(
                                                                  (0x31f4U 
                                                                   | (((IData)(vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0)
                                                                        ? 8U
                                                                        : 7U) 
                                                                      << 0xeU))))))),56);
        bufp->chgCData(oldp+321,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[0]),7);
        bufp->chgCData(oldp+322,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[1]),7);
        bufp->chgCData(oldp+323,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[2]),7);
        bufp->chgCData(oldp+324,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[3]),7);
        bufp->chgCData(oldp+325,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[4]),7);
        bufp->chgCData(oldp+326,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[5]),7);
        bufp->chgCData(oldp+327,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[6]),7);
        bufp->chgCData(oldp+328,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[7]),7);
        bufp->chgCData(oldp+329,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+330,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+331,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+332,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+333,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+334,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+335,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+336,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7]),4);
        bufp->chgCData(oldp+337,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+338,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+339,((0x18c000000ULL | (QData)((IData)(
                                                                   (0x98330U 
                                                                    | (((IData)(vlSelf->top__DOT__u_EXU__DOT__B_aluop) 
                                                                        << 0x16U) 
                                                                       | (((IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop) 
                                                                           << 0xbU) 
                                                                          | (IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop)))))))),33);
        bufp->chgSData(oldp+341,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+342,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+343,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+344,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+345,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+346,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+347,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+348,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+349,((vlSelf->top__DOT__oprand1 
                                  - vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+350,((vlSelf->top__DOT__oprand1 
                                  + vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+351,((vlSelf->top__DOT__oprand1 
                                  ^ vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+352,((vlSelf->top__DOT__oprand1 
                                  | vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+353,((vlSelf->top__DOT__oprand1 
                                  & vlSelf->top__DOT__oprand2)),32);
        bufp->chgIData(oldp+354,((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+355,(((vlSelf->top__DOT__oprand1 
                                   < vlSelf->top__DOT__oprand2)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+356,(((0x1fU >= vlSelf->top__DOT__oprand2)
                                   ? (vlSelf->top__DOT__oprand1 
                                      << vlSelf->top__DOT__oprand2)
                                   : 0U)),32);
        bufp->chgIData(oldp+357,((vlSelf->top__DOT__oprand1 
                                  >> (0x1fU & vlSelf->top__DOT__oprand2))),32);
        bufp->chgIData(oldp+358,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__oprand2))),32);
        bufp->chgIData(oldp+359,(((vlSelf->top__DOT__oprand1 
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
        bufp->chgWData(oldp+360,(__Vtemp_h74205673__0),396);
        bufp->chgQData(oldp+373,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+375,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+377,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+379,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+381,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+383,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+385,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+387,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+389,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+391,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+393,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgIData(oldp+395,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+396,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+397,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+398,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+399,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+400,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+401,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+402,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+403,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+404,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+405,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+406,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+407,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+408,(vlSelf->top__DOT__u_IDU__DOT__ins),32);
        bufp->chgIData(oldp+409,(vlSelf->top__DOT__u_IDU__DOT__immI),32);
        bufp->chgIData(oldp+410,(vlSelf->top__DOT__u_IDU__DOT__immU),32);
        bufp->chgIData(oldp+411,((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                                   << 0xcU) | (((IData)(vlSelf->top__DOT__func7) 
                                                << 5U) 
                                               | (IData)(vlSelf->top__DOT__rd)))),32);
        bufp->chgCData(oldp+412,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+413,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+414,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+415,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+416,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+418,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+420,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+422,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+424,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+426,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+428,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+430,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+432,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+433,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+434,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+435,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+436,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+437,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+438,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+439,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+440,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+441,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+442,(vlSelf->top__DOT__u_IFU__DOT__pc),32);
        bufp->chgIData(oldp+443,(vlSelf->top__DOT__u_IFU__DOT__araddr),32);
        bufp->chgBit(oldp+444,(vlSelf->top__DOT__u_IFU__DOT__arvalid));
        bufp->chgBit(oldp+445,(vlSelf->top__DOT__u_IFU__DOT__arready));
        bufp->chgIData(oldp+446,(vlSelf->top__DOT__u_IFU__DOT__rdata),32);
        bufp->chgBit(oldp+447,(vlSelf->top__DOT__u_IFU__DOT__rvalid));
        bufp->chgCData(oldp+448,(vlSelf->top__DOT__u_IFU__DOT__rresp),2);
        bufp->chgBit(oldp+449,(vlSelf->top__DOT__u_IFU__DOT__rready));
        bufp->chgBit(oldp+450,(vlSelf->top__DOT__u_IFU__DOT__fetch_flag));
        bufp->chgIData(oldp+451,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__araddr_reg),32);
        bufp->chgIData(oldp+452,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__rdata_reg),32);
        bufp->chgBit(oldp+453,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__flag));
        bufp->chgIData(oldp+454,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__delay),32);
        bufp->chgIData(oldp+455,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__now),32);
        bufp->chgCData(oldp+456,(vlSelf->top__DOT__u_MEM__DOT__pos),2);
        bufp->chgIData(oldp+457,(vlSelf->top__DOT__u_MEM__DOT__rdata_w),32);
        bufp->chgIData(oldp+458,(vlSelf->top__DOT__u_MEM__DOT__mem_araddr_reg),32);
        bufp->chgIData(oldp+459,(vlSelf->top__DOT__u_MEM__DOT__rdata_reg),32);
        bufp->chgCData(oldp+460,(vlSelf->top__DOT__u_MEM__DOT__rdata_b),8);
        bufp->chgSData(oldp+461,(vlSelf->top__DOT__u_MEM__DOT__rdata_h),16);
        bufp->chgBit(oldp+462,(vlSelf->top__DOT__u_MEM__DOT__write_flag));
        bufp->chgIData(oldp+463,(vlSelf->top__DOT__u_MEM__DOT__write_now),32);
        bufp->chgIData(oldp+464,(vlSelf->top__DOT__u_MEM__DOT__write_delay),32);
        bufp->chgBit(oldp+465,(vlSelf->top__DOT__u_MEM__DOT__read_flag));
        bufp->chgIData(oldp+466,(vlSelf->top__DOT__u_MEM__DOT__read_now),32);
        bufp->chgIData(oldp+467,(vlSelf->top__DOT__u_MEM__DOT__read_delay),32);
        __Vtemp_h2053dcec__0[0U] = (IData)((0x500000000ULL 
                                            | (((QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_b)) 
                                                << 0x23U) 
                                               | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_h)))));
        __Vtemp_h2053dcec__0[1U] = (IData)(((0x500000000ULL 
                                             | (((QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_b)) 
                                                 << 0x23U) 
                                                | (QData)((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_h)))) 
                                            >> 0x20U));
        __Vtemp_h2053dcec__0[2U] = (0x20U | (vlSelf->top__DOT__u_MEM__DOT__rdata_w 
                                             << 6U));
        __Vtemp_h2053dcec__0[3U] = (0x80U | ((0xfffffe00U 
                                              & (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_h) 
                                                                 >> 0xfU)))) 
                                                  << 0x19U) 
                                                 | ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_h) 
                                                    << 9U))) 
                                             | (vlSelf->top__DOT__u_MEM__DOT__rdata_w 
                                                >> 0x1aU)));
        __Vtemp_h2053dcec__0[4U] = (0x200U | ((0xfffff000U 
                                               & (((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_b) 
                                                                  >> 7U)))) 
                                                   << 0x14U) 
                                                  | ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_b) 
                                                     << 0xcU))) 
                                              | (0x1ffU 
                                                 & ((0x1ffU 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_h) 
                                                                       >> 0xfU)))) 
                                                        >> 7U)) 
                                                    | ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_h) 
                                                       >> 0x17U)))));
        __Vtemp_h2053dcec__0[5U] = (0xfffU & ((0xfffU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_b) 
                                                                 >> 7U)))) 
                                                  >> 0xcU)) 
                                              | ((IData)(vlSelf->top__DOT__u_MEM__DOT__rdata_b) 
                                                 >> 0x14U)));
        bufp->chgWData(oldp+468,(__Vtemp_h2053dcec__0),175);
        bufp->chgQData(oldp+474,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+476,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+478,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+480,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+482,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+484,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+485,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+486,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+487,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+488,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+489,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+490,(vlSelf->top__DOT__u_MEM__DOT__get_rdata__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+491,((((QData)((IData)(
                                                   (0xffU 
                                                    & vlSelf->top__DOT__u_MEM__DOT__rdata_w))) 
                                   << 0x1eU) | (QData)((IData)(
                                                               (0x10080300U 
                                                                | ((0xff00000U 
                                                                    & (vlSelf->top__DOT__u_MEM__DOT__rdata_w 
                                                                       << 0xcU)) 
                                                                   | ((0x3fc00U 
                                                                       & (vlSelf->top__DOT__u_MEM__DOT__rdata_w 
                                                                          >> 6U)) 
                                                                      | (vlSelf->top__DOT__u_MEM__DOT__rdata_w 
                                                                         >> 0x18U)))))))),40);
        bufp->chgSData(oldp+493,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+494,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+495,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+496,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__pair_list[3]),10);
        bufp->chgCData(oldp+497,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+498,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+499,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+500,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__data_list[3]),8);
        bufp->chgCData(oldp+501,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+502,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_b__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+503,((0x400000000ULL | 
                                  (((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelf->top__DOT__u_MEM__DOT__rdata_w))) 
                                    << 0x24U) | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (vlSelf->top__DOT__u_MEM__DOT__rdata_w 
                                                                      >> 8U)))) 
                                                  << 0x12U) 
                                                 | (QData)((IData)(
                                                                   (0x20000U 
                                                                    | (vlSelf->top__DOT__u_MEM__DOT__rdata_w 
                                                                       >> 0x10U)))))))),54);
        bufp->chgIData(oldp+505,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__pair_list[0]),18);
        bufp->chgIData(oldp+506,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__pair_list[1]),18);
        bufp->chgIData(oldp+507,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__pair_list[2]),18);
        bufp->chgSData(oldp+508,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__data_list[0]),16);
        bufp->chgSData(oldp+509,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__data_list[1]),16);
        bufp->chgSData(oldp+510,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__data_list[2]),16);
        bufp->chgSData(oldp+511,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__lut_out),16);
        bufp->chgBit(oldp+512,(vlSelf->top__DOT__u_MEM__DOT__get_rdata_h__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+513,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0]),32);
        bufp->chgIData(oldp+514,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[1]),32);
        bufp->chgIData(oldp+515,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[2]),32);
        bufp->chgIData(oldp+516,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[3]),32);
        bufp->chgIData(oldp+517,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[4]),32);
        bufp->chgIData(oldp+518,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[5]),32);
        bufp->chgIData(oldp+519,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[6]),32);
        bufp->chgIData(oldp+520,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[7]),32);
        bufp->chgIData(oldp+521,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[8]),32);
        bufp->chgIData(oldp+522,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[9]),32);
        bufp->chgIData(oldp+523,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[10]),32);
        bufp->chgIData(oldp+524,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[11]),32);
        bufp->chgIData(oldp+525,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[12]),32);
        bufp->chgIData(oldp+526,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[13]),32);
        bufp->chgIData(oldp+527,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[14]),32);
        bufp->chgIData(oldp+528,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[15]),32);
        bufp->chgIData(oldp+529,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[16]),32);
        bufp->chgIData(oldp+530,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[17]),32);
        bufp->chgIData(oldp+531,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[18]),32);
        bufp->chgIData(oldp+532,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[19]),32);
        bufp->chgIData(oldp+533,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[20]),32);
        bufp->chgIData(oldp+534,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[21]),32);
        bufp->chgIData(oldp+535,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[22]),32);
        bufp->chgIData(oldp+536,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[23]),32);
        bufp->chgIData(oldp+537,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[24]),32);
        bufp->chgIData(oldp+538,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[25]),32);
        bufp->chgIData(oldp+539,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[26]),32);
        bufp->chgIData(oldp+540,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[27]),32);
        bufp->chgIData(oldp+541,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[28]),32);
        bufp->chgIData(oldp+542,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[29]),32);
        bufp->chgIData(oldp+543,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[30]),32);
        bufp->chgIData(oldp+544,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[31]),32);
        bufp->chgIData(oldp+545,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+546,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+547,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+548,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+549,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+550,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+551,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+552,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+553,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+554,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+555,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+556,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+557,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+558,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+559,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+560,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+561,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+562,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+563,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+564,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+565,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+566,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+567,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+568,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+569,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+570,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+571,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+572,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+573,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+574,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+575,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+576,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgCData(oldp+577,(vlSelf->top__DOT__u_WBU__DOT__fake_csr_write),6);
        bufp->chgCData(oldp+578,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out),6);
        bufp->chgBit(oldp+579,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+580,(vlSelf->rst));
    bufp->chgBit(oldp+581,(vlSelf->clk));
    bufp->chgIData(oldp+582,(vlSelf->outpc),32);
    bufp->chgIData(oldp+583,(vlSelf->out_dnpc),32);
    bufp->chgIData(oldp+584,(vlSelf->out_snpc),32);
    bufp->chgIData(oldp+585,(vlSelf->ins),32);
    bufp->chgIData(oldp+586,(vlSelf->gpr[0]),32);
    bufp->chgIData(oldp+587,(vlSelf->gpr[1]),32);
    bufp->chgIData(oldp+588,(vlSelf->gpr[2]),32);
    bufp->chgIData(oldp+589,(vlSelf->gpr[3]),32);
    bufp->chgIData(oldp+590,(vlSelf->gpr[4]),32);
    bufp->chgIData(oldp+591,(vlSelf->gpr[5]),32);
    bufp->chgIData(oldp+592,(vlSelf->gpr[6]),32);
    bufp->chgIData(oldp+593,(vlSelf->gpr[7]),32);
    bufp->chgIData(oldp+594,(vlSelf->gpr[8]),32);
    bufp->chgIData(oldp+595,(vlSelf->gpr[9]),32);
    bufp->chgIData(oldp+596,(vlSelf->gpr[10]),32);
    bufp->chgIData(oldp+597,(vlSelf->gpr[11]),32);
    bufp->chgIData(oldp+598,(vlSelf->gpr[12]),32);
    bufp->chgIData(oldp+599,(vlSelf->gpr[13]),32);
    bufp->chgIData(oldp+600,(vlSelf->gpr[14]),32);
    bufp->chgIData(oldp+601,(vlSelf->gpr[15]),32);
    bufp->chgIData(oldp+602,(vlSelf->gpr[16]),32);
    bufp->chgIData(oldp+603,(vlSelf->gpr[17]),32);
    bufp->chgIData(oldp+604,(vlSelf->gpr[18]),32);
    bufp->chgIData(oldp+605,(vlSelf->gpr[19]),32);
    bufp->chgIData(oldp+606,(vlSelf->gpr[20]),32);
    bufp->chgIData(oldp+607,(vlSelf->gpr[21]),32);
    bufp->chgIData(oldp+608,(vlSelf->gpr[22]),32);
    bufp->chgIData(oldp+609,(vlSelf->gpr[23]),32);
    bufp->chgIData(oldp+610,(vlSelf->gpr[24]),32);
    bufp->chgIData(oldp+611,(vlSelf->gpr[25]),32);
    bufp->chgIData(oldp+612,(vlSelf->gpr[26]),32);
    bufp->chgIData(oldp+613,(vlSelf->gpr[27]),32);
    bufp->chgIData(oldp+614,(vlSelf->gpr[28]),32);
    bufp->chgIData(oldp+615,(vlSelf->gpr[29]),32);
    bufp->chgIData(oldp+616,(vlSelf->gpr[30]),32);
    bufp->chgIData(oldp+617,(vlSelf->gpr[31]),32);
    bufp->chgIData(oldp+618,(vlSelf->csr_reg[0]),32);
    bufp->chgIData(oldp+619,(vlSelf->csr_reg[1]),32);
    bufp->chgIData(oldp+620,(vlSelf->csr_reg[2]),32);
    bufp->chgIData(oldp+621,(vlSelf->csr_reg[3]),32);
    bufp->chgIData(oldp+622,(vlSelf->csr_reg[4]),32);
    bufp->chgIData(oldp+623,(vlSelf->csr_reg[5]),32);
    bufp->chgBit(oldp+624,(vlSelf->valid));
    bufp->chgBit(oldp+625,(vlSelf->ready));
    bufp->chgIData(oldp+626,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                               ? vlSelf->out_snpc : vlSelf->top__DOT__fake_csr_wdata)),32);
    bufp->chgCData(oldp+627,((7U & (vlSelf->ins >> 0x14U))),3);
    __Vtemp_h63de71c0__0[0U] = (IData)((0x7300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__csr_rdata))));
    __Vtemp_h63de71c0__0[1U] = ((vlSelf->top__DOT__exu_res 
                                 << 7U) | (IData)((
                                                   (0x7300000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__csr_rdata))) 
                                                   >> 0x20U)));
    __Vtemp_h63de71c0__0[2U] = (0x1980U | ((vlSelf->top__DOT__exu_res 
                                            << 0xeU) 
                                           | (vlSelf->top__DOT__exu_res 
                                              >> 0x19U)));
    __Vtemp_h63de71c0__0[3U] = (0x4c000U | ((vlSelf->top__DOT__mem_rdata 
                                             << 0x15U) 
                                            | (vlSelf->top__DOT__exu_res 
                                               >> 0x12U)));
    __Vtemp_h63de71c0__0[4U] = (0x600000U | ((vlSelf->out_snpc 
                                              << 0x1cU) 
                                             | (vlSelf->top__DOT__mem_rdata 
                                                >> 0xbU)));
    __Vtemp_h63de71c0__0[5U] = (0x70000000U | (vlSelf->out_snpc 
                                               >> 4U));
    __Vtemp_h63de71c0__0[6U] = (6U | (vlSelf->out_snpc 
                                      << 3U));
    __Vtemp_h63de71c0__0[7U] = (0x378U | ((vlSelf->top__DOT__exu_res 
                                           << 0xaU) 
                                          | (vlSelf->out_snpc 
                                             >> 0x1dU)));
    __Vtemp_h63de71c0__0[8U] = (0x5c00U | ((vlSelf->top__DOT__exu_res 
                                            << 0x11U) 
                                           | (vlSelf->top__DOT__exu_res 
                                              >> 0x16U)));
    __Vtemp_h63de71c0__0[9U] = (0x6e0000U | (vlSelf->top__DOT__exu_res 
                                             >> 0xfU));
    bufp->chgWData(oldp+628,(__Vtemp_h63de71c0__0),312);
    bufp->chgIData(oldp+638,((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                               << 0xcU) | ((0xfffff800U 
                                            & (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0) 
                                                << 0xbU) 
                                               & (vlSelf->ins 
                                                  << 4U))) 
                                           | ((((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                 ? 
                                                (0x3fU 
                                                 & (vlSelf->ins 
                                                    >> 0x19U))
                                                 : 0U) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelf->ins 
                                                      >> 8U))
                                                   : 0U) 
                                                 << 1U))))),32);
    bufp->chgIData(oldp+639,((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                               << 0x14U) | ((((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                               ? (0xffU 
                                                  & (vlSelf->ins 
                                                     >> 0xcU))
                                               : 0U) 
                                             << 0xcU) 
                                            | ((0x7ff800U 
                                                & (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0) 
                                                    << 0xbU) 
                                                   & (vlSelf->ins 
                                                      >> 9U))) 
                                               | (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                    ? 
                                                   (0x3ffU 
                                                    & (vlSelf->ins 
                                                       >> 0x15U))
                                                    : 0U) 
                                                  << 1U))))),32);
    __Vtemp_h6ae7bc82__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI))));
    __Vtemp_h6ae7bc82__0[1U] = ((0xffffff80U & (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelf->top__DOT__func7) 
                                                    << 0xcU) 
                                                   | ((IData)(vlSelf->top__DOT__rd) 
                                                      << 7U)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI))) 
                                           >> 0x20U)));
    __Vtemp_h6ae7bc82__0[2U] = (0x1180U | ((vlSelf->top__DOT__u_IDU__DOT__immI 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((0x7fU 
                                                  & ((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                                                     >> 0xdU)) 
                                                 | ((0x7fU 
                                                     & ((IData)(vlSelf->top__DOT__func7) 
                                                        >> 0x14U)) 
                                                    | ((IData)(vlSelf->top__DOT__rd) 
                                                       >> 0x19U))))));
    __Vtemp_h6ae7bc82__0[3U] = (0xc000U | ((0xffe00000U 
                                            & ((((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                  ? 
                                                 (0x3fU 
                                                  & (vlSelf->ins 
                                                     >> 0x19U))
                                                  : 0U) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelf->ins 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 0x16U))) 
                                           | (vlSelf->top__DOT__u_IDU__DOT__immI 
                                              >> 0x12U)));
    __Vtemp_h6ae7bc82__0[4U] = (0xc600000U | ((vlSelf->top__DOT__u_IDU__DOT__immI 
                                               << 0x1cU) 
                                              | (0x1fffffU 
                                                 & ((0x1ffffeU 
                                                     & ((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                                                        << 1U)) 
                                                    | (0x1fffffU 
                                                       & (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0) 
                                                           & (vlSelf->ins 
                                                              >> 7U)) 
                                                          | ((((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                                ? 
                                                               (0x3fU 
                                                                & (vlSelf->ins 
                                                                   >> 0x19U))
                                                                : 0U) 
                                                              >> 6U) 
                                                             | (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                                  ? 
                                                                 (0xfU 
                                                                  & (vlSelf->ins 
                                                                     >> 8U))
                                                                  : 0U) 
                                                                >> 0xaU))))))));
    __Vtemp_h6ae7bc82__0[5U] = (0x70000000U | (vlSelf->top__DOT__u_IDU__DOT__immI 
                                               >> 4U));
    __Vtemp_h6ae7bc82__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                                        << 0x17U) | 
                                       ((((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                           ? (0xffU 
                                              & (vlSelf->ins 
                                                 >> 0xcU))
                                           : 0U) << 0xfU) 
                                        | ((0x3ffc000U 
                                            & (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0) 
                                                << 0xeU) 
                                               & (vlSelf->ins 
                                                  >> 6U))) 
                                           | (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                ? (0x3ffU 
                                                   & (vlSelf->ins 
                                                      >> 0x15U))
                                                : 0U) 
                                              << 4U))))));
    __Vtemp_h6ae7bc82__0[7U] = (0x378U | ((vlSelf->top__DOT__u_IDU__DOT__immU 
                                           << 0xaU) 
                                          | (7U & (
                                                   ((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h56fb3be9__0))) 
                                                    >> 9U) 
                                                   | ((((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                         ? 
                                                        (0xffU 
                                                         & (vlSelf->ins 
                                                            >> 0xcU))
                                                         : 0U) 
                                                       >> 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h918cedc8__0)
                                                           ? 
                                                          (0x3ffU 
                                                           & (vlSelf->ins 
                                                              >> 0x15U))
                                                           : 0U) 
                                                         >> 0x1cU))))));
    __Vtemp_h6ae7bc82__0[8U] = (0x5c00U | ((vlSelf->top__DOT__u_IDU__DOT__immU 
                                            << 0x11U) 
                                           | (vlSelf->top__DOT__u_IDU__DOT__immU 
                                              >> 0x16U)));
    __Vtemp_h6ae7bc82__0[9U] = (0x6e0000U | (vlSelf->top__DOT__u_IDU__DOT__immU 
                                             >> 0xfU));
    bufp->chgWData(oldp+640,(__Vtemp_h6ae7bc82__0),312);
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
