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
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[0U] = 0x13U;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[1U] = 0x23U;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[3U] = 0x63U;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[4U] = 0x67U;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[5U] = 0x6fU;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[6U] = 0x17U;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[7U] = 0x37U;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[0U] = 0x73U;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[1U] = 0x33U;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[2U] = 0x13U;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[4U] = 0x67U;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[5U] = 0x6fU;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[6U] = 0x17U;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[7U] = 0x37U;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[3U] = 2U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[4U] = 9U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[5U] = 5U;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[6U] = 6U;
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[4U] = 0x63U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[5U] = 0x67U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[6U] = 0x6fU;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[8U] = 0x37U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[0U] = 2U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[1U] = 2U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[2U] = 2U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[3U] = 2U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[4U] = 2U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[5U] = 2U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[3U] = 3U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[4U] = 0x63U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[5U] = 0x67U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[6U] = 0x6fU;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[8U] = 0x37U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[8U] = 1U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[0U] = 0xaU;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[1U] = 9U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[3U] = 7U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[4U] = 6U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[5U] = 5U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[6U] = 4U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[7U] = 3U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[8U] = 2U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[9U] = 1U;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[0xaU] = 0U;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[0U] = 0x33U;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[1U] = 0x13U;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[2U] = 0x63U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[0U] = 9U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[1U] = 9U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[2U] = 5U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[3U] = 5U;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[4U] = 0xaU;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[5U] = 0xaU;
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[0U] = 0xfU;
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[3U] = 0U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list[0U] = 2U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list[1U] = 1U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list[2U] = 0U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[0U] = 5U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[4U] = 1U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[5U] = 0U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[0U] = 0x20U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[1U] = 0x10U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[2U] = 8U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[3U] = 4U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[4U] = 2U;
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[5U] = 1U;
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
                VL_FATAL_MT("/home/talps/gitrepo/ysyx-workbench/npc/myrtl/vsrc_multicycle/top.sv", 2, "", "Settle region did not converge.");
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
    vlSelf->outpc = vlSelf->top__DOT__u_IFU__DOT__pc;
    vlSelf->ins = vlSelf->top__DOT__u_IFU__DOT__ins_reg;
    vlSelf->valid = vlSelf->top__DOT__ifu_valid;
    vlSelf->csr_reg[0U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [0U];
    vlSelf->csr_reg[1U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [1U];
    vlSelf->csr_reg[2U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [2U];
    vlSelf->csr_reg[3U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [3U];
    vlSelf->csr_reg[4U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [4U];
    vlSelf->csr_reg[5U] = vlSelf->top__DOT__u_CSR__DOT__rf
        [5U];
    vlSelf->out_snpc = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    if (vlSelf->top__DOT__idu_ready) {
        vlSelf->top__DOT__csr_waddr = 0U;
        vlSelf->top__DOT__u_IDU__DOT__ins = 0U;
        vlSelf->top__DOT__func3 = 0U;
        vlSelf->top__DOT__rs2 = 0U;
        vlSelf->top__DOT__rd = 0U;
        vlSelf->top__DOT__func7 = 0U;
        vlSelf->top__DOT__rs1 = 0U;
        vlSelf->__VdfgTmp_h42421429__0 = 0U;
        vlSelf->__VdfgTmp_h48e54a70__0 = 0U;
        vlSelf->__VdfgTmp_h7f7c0b77__0 = 0U;
        vlSelf->__VdfgTmp_h4248ee9c__0 = 0U;
        vlSelf->top__DOT__opcode = 0U;
    } else {
        vlSelf->top__DOT__csr_waddr = (7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                             >> 0x14U));
        vlSelf->top__DOT__u_IDU__DOT__ins = vlSelf->top__DOT__u_IFU__DOT__ins_reg;
        vlSelf->top__DOT__func3 = (7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                         >> 0xcU));
        vlSelf->top__DOT__rs2 = (0x1fU & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                          >> 0x14U));
        vlSelf->top__DOT__rd = (0x1fU & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                         >> 7U));
        vlSelf->top__DOT__func7 = (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                   >> 0x19U);
        vlSelf->top__DOT__rs1 = (0x1fU & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                          >> 0xfU));
        vlSelf->__VdfgTmp_h42421429__0 = (0xffU & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                                   >> 0xcU));
        vlSelf->__VdfgTmp_h48e54a70__0 = (0x3ffU & 
                                          (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                           >> 0x15U));
        vlSelf->__VdfgTmp_h7f7c0b77__0 = (0x3fU & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                                   >> 0x19U));
        vlSelf->__VdfgTmp_h4248ee9c__0 = (0xfU & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                                  >> 8U));
        vlSelf->top__DOT__opcode = (0x7fU & vlSelf->top__DOT__u_IFU__DOT__ins_reg);
    }
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5U] 
        = ((IData)(4U) + vlSelf->top__DOT__u_IFU__DOT__pc);
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_w;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[5U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[4U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[3U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[2U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[1U];
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[5U] 
        = vlSelf->top__DOT__u_CSR__DOT__rf[0U];
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__u_mem__DOT__rdata_w >> 0x10U);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[1U] 
        = (0xffffU & (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                      >> 8U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[2U] 
        = (0xffffU & vlSelf->top__DOT__u_mem__DOT__rdata_w);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[0U] 
        = (vlSelf->top__DOT__u_mem__DOT__rdata_w >> 0x18U);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[1U] 
        = (0xffU & (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                    >> 0x10U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[2U] 
        = (0xffU & (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                    >> 8U));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->top__DOT__u_mem__DOT__rdata_w);
    vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0 
        = (1U & ((~ (IData)(vlSelf->top__DOT__idu_ready)) 
                 & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                    >> 0x1eU)));
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1fU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1fU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1eU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1eU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1dU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1dU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1cU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1cU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1bU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1bU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x1aU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x1aU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x19U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x19U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x18U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x18U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x17U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x17U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x16U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x16U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x15U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x15U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x14U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x14U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x13U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x13U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x12U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x12U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x11U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x11U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0x10U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0x10U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xfU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xfU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xeU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xeU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xdU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xdU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xcU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xcU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xbU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xbU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0xaU] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0xaU];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[9U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [9U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[8U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [8U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[7U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [7U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[6U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [6U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[5U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [5U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[4U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [4U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[3U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [3U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[2U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [2U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[1U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [1U];
    vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [0U];
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_IFU__DOT__pc;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6U] 
        = (((IData)(vlSelf->top__DOT__idu_ready) ? 0U
             : (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                >> 0xcU)) << 0xcU);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7U] 
        = (((IData)(vlSelf->top__DOT__idu_ready) ? 0U
             : (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                >> 0xcU)) << 0xcU);
    vlSelf->__VdfgTmp_h545dc1e6__0 = (1U & ((~ (IData)(vlSelf->top__DOT__idu_ready)) 
                                            & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                               >> 0x14U)));
    vlSelf->__VdfgTmp_h546ef0ac__0 = (1U & ((~ (IData)(vlSelf->top__DOT__idu_ready)) 
                                            & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                               >> 7U)));
    vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0 
        = ((~ (IData)(vlSelf->top__DOT__idu_ready)) 
           & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
              >> 0x1fU));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                       == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__csr_waddr) 
                          == vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_WBU__DOT__fake_csr_write = vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                              >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)) == vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__csr_rdata = vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__rdata_h = vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_mem__DOT__pos) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__rdata_b = vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2U] 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0)
            ? 8U : 7U);
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__mem_wmask = vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__B_aluop = vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out;
    vlSelf->gpr[0x1fU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1fU];
    vlSelf->gpr[0x1eU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1eU];
    vlSelf->gpr[0x1dU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1dU];
    vlSelf->gpr[0x1cU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1cU];
    vlSelf->gpr[0x1bU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1bU];
    vlSelf->gpr[0x1aU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x1aU];
    vlSelf->gpr[0x19U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x19U];
    vlSelf->gpr[0x18U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x18U];
    vlSelf->gpr[0x17U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x17U];
    vlSelf->gpr[0x16U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x16U];
    vlSelf->gpr[0x15U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x15U];
    vlSelf->gpr[0x14U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x14U];
    vlSelf->gpr[0x13U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x13U];
    vlSelf->gpr[0x12U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x12U];
    vlSelf->gpr[0x11U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x11U];
    vlSelf->gpr[0x10U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0x10U];
    vlSelf->gpr[0xfU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xfU];
    vlSelf->gpr[0xeU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xeU];
    vlSelf->gpr[0xdU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xdU];
    vlSelf->gpr[0xcU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xcU];
    vlSelf->gpr[0xbU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xbU];
    vlSelf->gpr[0xaU] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0xaU];
    vlSelf->gpr[9U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [9U];
    vlSelf->gpr[8U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [8U];
    vlSelf->gpr[7U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [7U];
    vlSelf->gpr[6U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [6U];
    vlSelf->gpr[5U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [5U];
    vlSelf->gpr[4U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [4U];
    vlSelf->gpr[3U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [3U];
    vlSelf->gpr[2U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [2U];
    vlSelf->gpr[1U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [1U];
    vlSelf->gpr[0U] = vlSelf->top__DOT____Vcellout__u_RegisterFile__data
        [0U];
    vlSelf->top__DOT__reg_rdata2 = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs2];
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs2];
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__reg_rdata1 = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_RegisterFile__DOT__rf
        [vlSelf->top__DOT__rs1];
    vlSelf->top__DOT__mem_access = ((~ (IData)(vlSelf->top__DOT__mem_finish)) 
                                    & ((3U == (IData)(vlSelf->top__DOT__opcode)) 
                                       | (0x23U == (IData)(vlSelf->top__DOT__opcode))));
    vlSelf->top__DOT__is_csr = ((0x73U == (IData)(vlSelf->top__DOT__opcode)) 
                                & (0U != (IData)(vlSelf->top__DOT__func3)));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7U] 
        = (((0x33U == (IData)(vlSelf->top__DOT__opcode)) 
            & (IData)(vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0))
            ? 1U : 0U);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand1 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__select_oprand2 = vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__idu_ready)
                         ? 0U : (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0))) 
            << 0xcU) | (((IData)(vlSelf->top__DOT__func7) 
                         << 5U) | (IData)(vlSelf->top__DOT__rd)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__idu_ready)
                         ? 0U : (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0))) 
            << 0xcU) | ((IData)(vlSelf->top__DOT__idu_ready)
                         ? 0U : (vlSelf->top__DOT__u_IFU__DOT__ins_reg 
                                 >> 0x14U)));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0))) 
            << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h546ef0ac__0) 
                         << 0xbU) | (((IData)(vlSelf->__VdfgTmp_h7f7c0b77__0) 
                                      << 5U) | ((IData)(vlSelf->__VdfgTmp_h4248ee9c__0) 
                                                << 1U))));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0))) 
            << 0x14U) | (((IData)(vlSelf->__VdfgTmp_h42421429__0) 
                          << 0xcU) | (((IData)(vlSelf->__VdfgTmp_h545dc1e6__0) 
                                       << 0xbU) | ((IData)(vlSelf->__VdfgTmp_h48e54a70__0) 
                                                   << 1U))));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__csr_rdata;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_h;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                              >> 0xfU)))) << 0x10U) 
           | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_mem__DOT__rdata_b;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__u_EXU__DOT__B_aluop;
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__csr_rdata | vlSelf->top__DOT__reg_rdata1);
    vlSelf->top__DOT__csr_write = ((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                    ? 0U : ((0x73U 
                                             == vlSelf->top__DOT__u_IDU__DOT__ins)
                                             ? 6U : 
                                            ((IData)(vlSelf->top__DOT__is_csr)
                                              ? (IData)(vlSelf->top__DOT__u_WBU__DOT__fake_csr_write)
                                              : 0U)));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_EXU__DOT__IR_aluop = vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand1) 
                       == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand1) 
                          == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand1) 
                          == vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__oprand1 = vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__imm = vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__mem_rdata = vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                       == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__func3) 
                          == vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__fake_csr_wdata = vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__u_EXU__DOT__IR_aluop;
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__imm;
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3U] 
        = vlSelf->top__DOT__mem_rdata;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__opcode) == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__opcode) == 
              vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__aluop = ((IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit)
                                            ? (IData)(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out)
                                            : 0U);
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand2) 
                       == vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__select_oprand2) 
                          == vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__oprand2 = vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0U] 
        = ((vlSelf->top__DOT__oprand1 == vlSelf->top__DOT__oprand2)
            ? 1U : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[1U] 
        = ((vlSelf->top__DOT__oprand1 < vlSelf->top__DOT__oprand2)
            ? 1U : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                         (0x1fU & vlSelf->top__DOT__oprand2));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3U] 
        = (vlSelf->top__DOT__oprand1 >> (0x1fU & vlSelf->top__DOT__oprand2));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4U] 
        = ((0x1fU >= vlSelf->top__DOT__oprand2) ? (vlSelf->top__DOT__oprand1 
                                                   << vlSelf->top__DOT__oprand2)
            : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[5U] 
        = (VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
            ? 1U : 0U);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[6U] 
        = (vlSelf->top__DOT__oprand1 & vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->top__DOT__oprand1 | vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[8U] 
        = (vlSelf->top__DOT__oprand1 ^ vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->top__DOT__oprand1 - vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->top__DOT__oprand1 + vlSelf->top__DOT__oprand2);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                       == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__u_EXU__DOT__aluop) 
                          == vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__u_EXU__DOT__alu_res = vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out;
    if (((0x63U == (IData)(vlSelf->top__DOT__opcode)) 
         & ((1U == (IData)(vlSelf->top__DOT__func3)) 
            | ((5U == (IData)(vlSelf->top__DOT__func3)) 
               | (7U == (IData)(vlSelf->top__DOT__func3)))))) {
        vlSelf->top__DOT__exu_res = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
                                     | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7U] 
            = ((0xfffffffeU & vlSelf->top__DOT__u_EXU__DOT__alu_res) 
               | (1U & (~ vlSelf->top__DOT__u_EXU__DOT__alu_res)));
    } else {
        vlSelf->top__DOT__exu_res = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7U] 
            = vlSelf->top__DOT__u_EXU__DOT__alu_res;
    }
    vlSelf->out_dnpc = ((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                         ? vlSelf->top__DOT__u_CSR__DOT__rf
                        [5U] : ((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                 ? vlSelf->top__DOT__u_CSR__DOT__rf
                                [1U] : (((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                                         | (0x67U == (IData)(vlSelf->top__DOT__opcode)))
                                         ? vlSelf->top__DOT__exu_res
                                         : (((0x63U 
                                              == (IData)(vlSelf->top__DOT__opcode)) 
                                             & vlSelf->top__DOT__exu_res)
                                             ? (vlSelf->top__DOT__imm 
                                                + vlSelf->top__DOT__u_IFU__DOT__pc)
                                             : vlSelf->out_snpc))));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                       == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__opcode) 
                          == vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__reg_wdata = vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out;
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
    vlSelf->rst = 0;
    vlSelf->clk = 0;
    vlSelf->outpc = 0;
    vlSelf->out_dnpc = 0;
    vlSelf->out_snpc = 0;
    vlSelf->ins = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->gpr[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->csr_reg[__Vi0] = 0;
    }
    vlSelf->valid = 0;
    vlSelf->top__DOT__idu_ready = 0;
    vlSelf->top__DOT__ifu_valid = 0;
    vlSelf->top__DOT__rs1 = 0;
    vlSelf->top__DOT__rs2 = 0;
    vlSelf->top__DOT__rd = 0;
    vlSelf->top__DOT__imm = 0;
    vlSelf->top__DOT__func7 = 0;
    vlSelf->top__DOT__opcode = 0;
    vlSelf->top__DOT__func3 = 0;
    vlSelf->top__DOT__select_oprand1 = 0;
    vlSelf->top__DOT__select_oprand2 = 0;
    vlSelf->top__DOT__is_csr = 0;
    vlSelf->top__DOT__csr_waddr = 0;
    vlSelf->top__DOT__mem_access = 0;
    vlSelf->top__DOT__reg_wdata = 0;
    vlSelf->top__DOT__reg_rdata1 = 0;
    vlSelf->top__DOT__reg_rdata2 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__u_RegisterFile__data[__Vi0] = 0;
    }
    vlSelf->top__DOT__oprand1 = 0;
    vlSelf->top__DOT__oprand2 = 0;
    vlSelf->top__DOT__exu_res = 0;
    vlSelf->top__DOT__mem_rdata = 0;
    vlSelf->top__DOT__mem_wmask = 0;
    vlSelf->top__DOT__fake_csr_wdata = 0;
    vlSelf->top__DOT__mem_finish = 0;
    vlSelf->top__DOT__csr_write = 0;
    vlSelf->top__DOT__csr_rdata = 0;
    vlSelf->top__DOT__u_IFU__DOT__pc = 0;
    vlSelf->top__DOT__u_IFU__DOT__ins_reg = 0;
    vlSelf->top__DOT__u_IFU__DOT__ins_temp = 0;
    vlSelf->top__DOT__u_IDU__DOT__ins = 0;
    vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h61d98cf8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__u_RegisterFile__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__u_EXU__DOT__aluop = 0;
    vlSelf->top__DOT__u_EXU__DOT__B_aluop = 0;
    vlSelf->top__DOT__u_EXU__DOT__IR_aluop = 0;
    vlSelf->top__DOT__u_EXU__DOT__alu_res = 0;
    vlSelf->top__DOT__u_EXU__DOT____VdfgTmp_h7d5bae86__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__u_mem__DOT__pos = 0;
    vlSelf->top__DOT__u_mem__DOT__rdata_w = 0;
    vlSelf->top__DOT__u_mem__DOT__rdata_b = 0;
    vlSelf->top__DOT__u_mem__DOT__rdata_h = 0;
    vlSelf->top__DOT__u_mem__DOT__delay_write = 0;
    vlSelf->top__DOT__u_mem__DOT__delay_waddr = 0;
    vlSelf->top__DOT__u_mem__DOT__delay_wdata = 0;
    vlSelf->top__DOT__u_mem__DOT__delay_wmask = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out = 0;
    vlSelf->top__DOT__u_WBU__DOT__fake_csr_write = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__u_CSR__DOT__rf[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out = 0;
    vlSelf->__VdfgTmp_h42421429__0 = 0;
    vlSelf->__VdfgTmp_h545dc1e6__0 = 0;
    vlSelf->__VdfgTmp_h48e54a70__0 = 0;
    vlSelf->__VdfgTmp_h546ef0ac__0 = 0;
    vlSelf->__VdfgTmp_h7f7c0b77__0 = 0;
    vlSelf->__VdfgTmp_h4248ee9c__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
}
