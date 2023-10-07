// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+292,"outpc", false,-1, 31,0);
    tracep->declBus(c+293,"out_dnpc", false,-1, 31,0);
    tracep->declBus(c+294,"ins", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+295+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+292,"outpc", false,-1, 31,0);
    tracep->declBus(c+293,"out_dnpc", false,-1, 31,0);
    tracep->declBus(c+294,"ins", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+295+i*1,"gpr", true,(i+0), 31,0);
    }
    tracep->declBus(c+293,"dnpc", false,-1, 31,0);
    tracep->declBus(c+94,"imm", false,-1, 31,0);
    tracep->declBus(c+95,"res", false,-1, 31,0);
    tracep->declBus(c+96,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+97,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+327,"rs1", false,-1, 4,0);
    tracep->declBus(c+328,"rs2", false,-1, 4,0);
    tracep->declBus(c+98,"extop", false,-1, 3,0);
    tracep->declBit(c+99,"pc_write", false,-1);
    tracep->declBit(c+100,"select_num2", false,-1);
    tracep->declBit(c+329,"arith", false,-1);
    tracep->declBit(c+101,"sub", false,-1);
    tracep->declBit(c+102,"isbranch", false,-1);
    tracep->declBus(c+103,"select_num1", false,-1, 1,0);
    tracep->declBus(c+104,"aluop", false,-1, 2,0);
    tracep->declBus(c+330,"func3", false,-1, 2,0);
    tracep->declBus(c+331,"func7", false,-1, 6,0);
    tracep->declBus(c+105,"rs1_value", false,-1, 31,0);
    tracep->declBus(c+97,"rs2_value", false,-1, 31,0);
    tracep->declBus(c+332,"snpc", false,-1, 31,0);
    tracep->declBus(c+106,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+333,"branch_pc", false,-1, 31,0);
    tracep->declBit(c+352,"valid", false,-1);
    tracep->declBit(c+107,"mem_read", false,-1);
    tracep->declBit(c+108,"mem_write", false,-1);
    tracep->declBus(c+109,"mem_mask", false,-1, 7,0);
    tracep->declBus(c+110,"reg_waddr", false,-1, 4,0);
    tracep->declBit(c+111,"reg_write", false,-1);
    tracep->pushNamePrefix("cu ");
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+330,"func3", false,-1, 2,0);
    tracep->declBus(c+331,"func7", false,-1, 6,0);
    tracep->declBus(c+98,"extop", false,-1, 3,0);
    tracep->declBit(c+99,"pc_write", false,-1);
    tracep->declBus(c+103,"select_num1", false,-1, 1,0);
    tracep->declBit(c+100,"select_num2", false,-1);
    tracep->declBit(c+111,"reg_write", false,-1);
    tracep->declBus(c+104,"aluop", false,-1, 2,0);
    tracep->declBit(c+329,"arith", false,-1);
    tracep->declBit(c+101,"sub", false,-1);
    tracep->declBit(c+352,"valid", false,-1);
    tracep->declBit(c+102,"isbranch", false,-1);
    tracep->declBit(c+107,"mem_read", false,-1);
    tracep->declBit(c+108,"mem_write", false,-1);
    tracep->declBus(c+109,"mem_mask", false,-1, 7,0);
    tracep->declBus(c+112,"fake_aluop", false,-1, 2,0);
    tracep->pushNamePrefix("get_aluop ");
    tracep->declBus(c+353,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+354,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+104,"out", false,-1, 2,0);
    tracep->declBus(c+98,"key", false,-1, 3,0);
    tracep->declBus(c+356,"default_out", false,-1, 2,0);
    tracep->declBus(c+113,"lut", false,-1, 13,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+353,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+354,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+104,"out", false,-1, 2,0);
    tracep->declBus(c+98,"key", false,-1, 3,0);
    tracep->declBus(c+356,"default_out", false,-1, 2,0);
    tracep->declBus(c+113,"lut", false,-1, 13,0);
    tracep->declBus(c+358,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+114+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+116+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+118,"lut_out", false,-1, 2,0);
    tracep->declBit(c+119,"hit", false,-1);
    tracep->declBus(c+359,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("get_fakeop ");
    tracep->declBus(c+360,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 2,0);
    tracep->declBus(c+330,"key", false,-1, 2,0);
    tracep->declQuad(c+361,"lut", false,-1, 47,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+360,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+355,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+363,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+112,"out", false,-1, 2,0);
    tracep->declBus(c+330,"key", false,-1, 2,0);
    tracep->declBus(c+356,"default_out", false,-1, 2,0);
    tracep->declQuad(c+361,"lut", false,-1, 47,0);
    tracep->declBus(c+364,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+3+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+11+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+19+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+120,"lut_out", false,-1, 2,0);
    tracep->declBit(c+121,"hit", false,-1);
    tracep->declBus(c+365,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("get_mem_mask ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+360,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 7,0);
    tracep->declBus(c+122,"key", false,-1, 6,0);
    tracep->declBus(c+366,"default_out", false,-1, 7,0);
    tracep->declQuad(c+367,"lut", false,-1, 44,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+360,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+109,"out", false,-1, 7,0);
    tracep->declBus(c+122,"key", false,-1, 6,0);
    tracep->declBus(c+366,"default_out", false,-1, 7,0);
    tracep->declQuad(c+367,"lut", false,-1, 44,0);
    tracep->declBus(c+369,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+27+i*1,"pair_list", true,(i+0), 14,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+30+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+33+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+123,"lut_out", false,-1, 7,0);
    tracep->declBit(c+124,"hit", false,-1);
    tracep->declBus(c+370,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("get_selectnum1 ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+354,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+353,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 1,0);
    tracep->declBus(c+98,"key", false,-1, 3,0);
    tracep->declBus(c+371,"default_out", false,-1, 1,0);
    tracep->declBus(c+372,"lut", false,-1, 17,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+354,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+353,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 1,0);
    tracep->declBus(c+98,"key", false,-1, 3,0);
    tracep->declBus(c+371,"default_out", false,-1, 1,0);
    tracep->declBus(c+372,"lut", false,-1, 17,0);
    tracep->declBus(c+364,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+36+i*1,"pair_list", true,(i+0), 5,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+39+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+42+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+125,"lut_out", false,-1, 1,0);
    tracep->declBit(c+126,"hit", false,-1);
    tracep->declBus(c+370,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+103,"select_num1", false,-1, 1,0);
    tracep->declBit(c+100,"select_num2", false,-1);
    tracep->declBit(c+329,"arith", false,-1);
    tracep->declBit(c+101,"sub", false,-1);
    tracep->declBus(c+104,"aluop", false,-1, 2,0);
    tracep->declBus(c+105,"rs1_value", false,-1, 31,0);
    tracep->declBus(c+97,"rs2_value", false,-1, 31,0);
    tracep->declBus(c+94,"imm", false,-1, 31,0);
    tracep->declBus(c+292,"pc", false,-1, 31,0);
    tracep->declBus(c+95,"result", false,-1, 31,0);
    tracep->declBus(c+333,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+127,"num1", false,-1, 31,0);
    tracep->declBus(c+128,"num2", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+329,"arith", false,-1);
    tracep->declBit(c+101,"sub", false,-1);
    tracep->declBus(c+104,"op", false,-1, 2,0);
    tracep->declBus(c+127,"num1", false,-1, 31,0);
    tracep->declBus(c+128,"num2", false,-1, 31,0);
    tracep->declBus(c+95,"result", false,-1, 31,0);
    tracep->declBus(c+129,"res_add", false,-1, 31,0);
    tracep->declBus(c+130,"res_left", false,-1, 31,0);
    tracep->declBus(c+131,"res_right", false,-1, 31,0);
    tracep->declBus(c+132,"res_set", false,-1, 31,0);
    tracep->declBus(c+133,"res_or", false,-1, 31,0);
    tracep->declBus(c+134,"res_xor", false,-1, 31,0);
    tracep->declBus(c+135,"res_and", false,-1, 31,0);
    tracep->pushNamePrefix("get_res ");
    tracep->declBus(c+358,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+95,"out", false,-1, 31,0);
    tracep->declBus(c+104,"key", false,-1, 2,0);
    tracep->declBus(c+374,"default_out", false,-1, 31,0);
    tracep->declArray(c+136,"lut", false,-1, 244,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+358,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+355,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+95,"out", false,-1, 31,0);
    tracep->declBus(c+104,"key", false,-1, 2,0);
    tracep->declBus(c+374,"default_out", false,-1, 31,0);
    tracep->declArray(c+136,"lut", false,-1, 244,0);
    tracep->declBus(c+375,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+144+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+45+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+158+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+165,"lut_out", false,-1, 31,0);
    tracep->declBit(c+166,"hit", false,-1);
    tracep->declBus(c+376,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("oprand1 ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+353,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+127,"out", false,-1, 31,0);
    tracep->declBus(c+103,"key", false,-1, 1,0);
    tracep->declArray(c+334,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+355,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+353,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+363,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+127,"out", false,-1, 31,0);
    tracep->declBus(c+103,"key", false,-1, 1,0);
    tracep->declBus(c+374,"default_out", false,-1, 31,0);
    tracep->declArray(c+334,"lut", false,-1, 101,0);
    tracep->declBus(c+377,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+167+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+52+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+173+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+176,"lut_out", false,-1, 31,0);
    tracep->declBit(c+177,"hit", false,-1);
    tracep->declBus(c+370,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("oprand2 ");
    tracep->declBus(c+353,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+357,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+128,"out", false,-1, 31,0);
    tracep->declBus(c+100,"key", false,-1, 0,0);
    tracep->declBus(c+374,"default_out", false,-1, 31,0);
    tracep->declArray(c+178,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+353,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+357,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+128,"out", false,-1, 31,0);
    tracep->declBus(c+100,"key", false,-1, 0,0);
    tracep->declBus(c+374,"default_out", false,-1, 31,0);
    tracep->declArray(c+178,"lut", false,-1, 65,0);
    tracep->declBus(c+378,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+181+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+55+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+185+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+187,"lut_out", false,-1, 31,0);
    tracep->declBit(c+188,"hit", false,-1);
    tracep->declBus(c+359,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+373,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+294,"instr", false,-1, 31,0);
    tracep->declBus(c+327,"rs1", false,-1, 4,0);
    tracep->declBus(c+328,"rs2", false,-1, 4,0);
    tracep->declBus(c+110,"waddr", false,-1, 4,0);
    tracep->declBus(c+94,"imm", false,-1, 31,0);
    tracep->declBus(c+98,"extop", false,-1, 3,0);
    tracep->declBus(c+330,"func3", false,-1, 2,0);
    tracep->declBus(c+331,"func7", false,-1, 6,0);
    tracep->declBus(c+189,"immJ", false,-1, 31,0);
    tracep->declBus(c+190,"immB", false,-1, 31,0);
    tracep->declBus(c+191,"immI", false,-1, 31,0);
    tracep->declBus(c+192,"immS", false,-1, 31,0);
    tracep->declBus(c+338,"immU", false,-1, 31,0);
    tracep->declBus(c+339,"op", false,-1, 6,0);
    tracep->pushNamePrefix("get_extop ");
    tracep->declBus(c+339,"op", false,-1, 6,0);
    tracep->declBus(c+98,"extop", false,-1, 3,0);
    tracep->pushNamePrefix("gen_extop ");
    tracep->declBus(c+379,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+354,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+98,"out", false,-1, 3,0);
    tracep->declBus(c+339,"key", false,-1, 6,0);
    tracep->declBus(c+380,"default_out", false,-1, 3,0);
    tracep->declArray(c+381,"lut", false,-1, 98,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+379,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+358,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+354,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+98,"out", false,-1, 3,0);
    tracep->declBus(c+339,"key", false,-1, 6,0);
    tracep->declBus(c+380,"default_out", false,-1, 3,0);
    tracep->declArray(c+381,"lut", false,-1, 98,0);
    tracep->declBus(c+385,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+57+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+66+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+75+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+193,"lut_out", false,-1, 3,0);
    tracep->declBit(c+194,"hit", false,-1);
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("get_imm ");
    tracep->declBus(c+98,"extop", false,-1, 3,0);
    tracep->declBus(c+189,"immJ", false,-1, 31,0);
    tracep->declBus(c+190,"immB", false,-1, 31,0);
    tracep->declBus(c+191,"immI", false,-1, 31,0);
    tracep->declBus(c+192,"immS", false,-1, 31,0);
    tracep->declBus(c+338,"immU", false,-1, 31,0);
    tracep->declBus(c+94,"imm", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+354,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+94,"out", false,-1, 31,0);
    tracep->declBus(c+98,"key", false,-1, 3,0);
    tracep->declBus(c+374,"default_out", false,-1, 31,0);
    tracep->declArray(c+340,"lut", false,-1, 359,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+387,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+354,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+373,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+357,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+94,"out", false,-1, 31,0);
    tracep->declBus(c+98,"key", false,-1, 3,0);
    tracep->declBus(c+374,"default_out", false,-1, 31,0);
    tracep->declArray(c+340,"lut", false,-1, 359,0);
    tracep->declBus(c+388,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declQuad(c+195+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+84+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+215+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+225,"lut_out", false,-1, 31,0);
    tracep->declBit(c+226,"hit", false,-1);
    tracep->declBus(c+389,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(5);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+106,"wdata", false,-1, 31,0);
    tracep->declBus(c+110,"waddr", false,-1, 4,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+227+i*1,"data", true,(i+0), 31,0);
    }
    tracep->declBit(c+111,"wen", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+259+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_IFU ");
    tracep->declBus(c+373,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+293,"in", false,-1, 31,0);
    tracep->declBus(c+292,"out", false,-1, 31,0);
    tracep->declBus(c+294,"ins", false,-1, 31,0);
    tracep->pushNamePrefix("pc ");
    tracep->declBit(c+291,"clk", false,-1);
    tracep->declBus(c+293,"in", false,-1, 31,0);
    tracep->declBus(c+292,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_mem ");
    tracep->declBit(c+352,"valid", false,-1);
    tracep->declBit(c+108,"wen", false,-1);
    tracep->declBus(c+109,"wmask", false,-1, 7,0);
    tracep->declBus(c+95,"raddr", false,-1, 31,0);
    tracep->declBus(c+95,"waddr", false,-1, 31,0);
    tracep->declBus(c+97,"wdata", false,-1, 31,0);
    tracep->declBus(c+96,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_hae78bde6__0;
    VlWide<3>/*95:0*/ __Vtemp_h45b37386__0;
    VlWide<4>/*127:0*/ __Vtemp_hc96ce21a__0;
    VlWide<12>/*383:0*/ __Vtemp_h319a5eb8__0;
    VlWide<4>/*127:0*/ __Vtemp_h94011e41__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[3]),6);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[4]),6);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[5]),6);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[6]),6);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__pair_list[7]),6);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__data_list[7]),3);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__pair_list[0]),15);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__pair_list[1]),15);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__pair_list[2]),15);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__pair_list[0]),6);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__pair_list[1]),6);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__pair_list[2]),6);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__key_list[1]));
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullSData(oldp+60,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[3]),11);
    bufp->fullSData(oldp+61,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[4]),11);
    bufp->fullSData(oldp+62,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[5]),11);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[6]),11);
    bufp->fullSData(oldp+64,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[7]),11);
    bufp->fullSData(oldp+65,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__pair_list[8]),11);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__data_list[8]),4);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__key_list[9]),4);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__imm),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__res),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__extop),4);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__pc_write));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__select_num2));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__sub));
    bufp->fullBit(oldp+102,((6U == (IData)(vlSelf->top__DOT__extop))));
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__select_num1),2);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__aluop),3);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__rs1_value),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__reg_wdata),32);
    bufp->fullBit(oldp+107,((1U == (IData)(vlSelf->top__DOT__extop))));
    bufp->fullBit(oldp+108,((5U == (IData)(vlSelf->top__DOT__extop))));
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__mem_mask),8);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__reg_waddr),5);
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__reg_write));
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__cu__DOT__fake_aluop),3);
    bufp->fullSData(oldp+113,((0x850U | (((IData)(vlSelf->top__DOT__cu__DOT__fake_aluop) 
                                          << 7U) | (IData)(vlSelf->top__DOT__cu__DOT__fake_aluop)))),14);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__cu__DOT__get_aluop__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__cu__DOT__get_fakeop__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__cu__DOT____Vcellinp__get_mem_mask__key),7);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__cu__DOT__get_mem_mask__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__cu__DOT__get_selectnum1__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__exu__DOT__num1),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__exu__DOT__num2),32);
    bufp->fullIData(oldp+129,(((IData)(vlSelf->top__DOT__sub)
                                ? vlSelf->top__DOT__exu__DOT__alu__DOT__res_set
                                : (vlSelf->top__DOT__exu__DOT__num1 
                                   + vlSelf->top__DOT__exu__DOT__num2))),32);
    bufp->fullIData(oldp+130,(((0x1fU >= (0x1fU & vlSelf->top__DOT__exu__DOT__num2))
                                ? (vlSelf->top__DOT__exu__DOT__num1 
                                   << (0x1fU & vlSelf->top__DOT__exu__DOT__num2))
                                : 0U)),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__exu__DOT__alu__DOT__res_set),32);
    bufp->fullIData(oldp+133,((vlSelf->top__DOT__exu__DOT__num1 
                               | vlSelf->top__DOT__exu__DOT__num2)),32);
    bufp->fullIData(oldp+134,((vlSelf->top__DOT__exu__DOT__num1 
                               ^ vlSelf->top__DOT__exu__DOT__num2)),32);
    bufp->fullIData(oldp+135,((vlSelf->top__DOT__exu__DOT__num1 
                               & vlSelf->top__DOT__exu__DOT__num2)),32);
    __Vtemp_hae78bde6__0[0U] = (IData)((0x600000000ULL 
                                        | (QData)((IData)(
                                                          (vlSelf->top__DOT__exu__DOT__num1 
                                                           & vlSelf->top__DOT__exu__DOT__num2)))));
    __Vtemp_hae78bde6__0[1U] = (((vlSelf->top__DOT__exu__DOT__num1 
                                  ^ vlSelf->top__DOT__exu__DOT__num2) 
                                 << 3U) | (IData)((
                                                   (0x600000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->top__DOT__exu__DOT__num1 
                                                                       & vlSelf->top__DOT__exu__DOT__num2)))) 
                                                   >> 0x20U)));
    __Vtemp_hae78bde6__0[2U] = (0x28U | (((vlSelf->top__DOT__exu__DOT__num1 
                                           | vlSelf->top__DOT__exu__DOT__num2) 
                                          << 6U) | 
                                         ((vlSelf->top__DOT__exu__DOT__num1 
                                           ^ vlSelf->top__DOT__exu__DOT__num2) 
                                          >> 0x1dU)));
    __Vtemp_hae78bde6__0[3U] = (0x100U | ((vlSelf->top__DOT__exu__DOT__alu__DOT__res_set 
                                           << 9U) | 
                                          ((vlSelf->top__DOT__exu__DOT__num1 
                                            | vlSelf->top__DOT__exu__DOT__num2) 
                                           >> 0x1aU)));
    __Vtemp_hae78bde6__0[4U] = (0x600U | ((vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__exu__DOT__alu__DOT__res_set 
                                             >> 0x17U)));
    __Vtemp_hae78bde6__0[5U] = (0x2000U | ((((0x1fU 
                                              >= (0x1fU 
                                                  & vlSelf->top__DOT__exu__DOT__num2))
                                              ? (vlSelf->top__DOT__exu__DOT__num1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__exu__DOT__num2))
                                              : 0U) 
                                            << 0xfU) 
                                           | (vlSelf->top__DOT__exu__DOT__alu__DOT____VdfgTmp_h170331db__0 
                                              >> 0x14U)));
    __Vtemp_hae78bde6__0[6U] = (0x8000U | ((((IData)(vlSelf->top__DOT__sub)
                                              ? vlSelf->top__DOT__exu__DOT__alu__DOT__res_set
                                              : (vlSelf->top__DOT__exu__DOT__num1 
                                                 + vlSelf->top__DOT__exu__DOT__num2)) 
                                            << 0x12U) 
                                           | (((0x1fU 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__exu__DOT__num2))
                                                ? (vlSelf->top__DOT__exu__DOT__num1 
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
    bufp->fullWData(oldp+136,(__Vtemp_hae78bde6__0),245);
    bufp->fullQData(oldp+144,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+146,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+148,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+150,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+152,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullQData(oldp+156,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__pair_list[6]),35);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__exu__DOT__alu__DOT__get_res__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+167,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+169,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+171,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__exu__DOT__oprand1__DOT__i0__DOT__hit));
    __Vtemp_h45b37386__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__mem_wdata))));
    __Vtemp_h45b37386__0[1U] = ((vlSelf->top__DOT__imm 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__mem_wdata))) 
                                                   >> 0x20U)));
    __Vtemp_h45b37386__0[2U] = (vlSelf->top__DOT__imm 
                                >> 0x1fU);
    bufp->fullWData(oldp+178,(__Vtemp_h45b37386__0),66);
    bufp->fullQData(oldp+181,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+183,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__exu__DOT__oprand2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__idu__DOT__immJ),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__idu__DOT__immB),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__idu__DOT__immI),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__idu__DOT__immS),32);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__idu__DOT__get_extop__DOT__gen_extop__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+195,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+197,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+199,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+201,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+203,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+205,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+207,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+209,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+211,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+213,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__idu__DOT__get_imm__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+227,(vlSelf->top__DOT____Vcellout__regfile__data[0]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT____Vcellout__regfile__data[1]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT____Vcellout__regfile__data[2]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT____Vcellout__regfile__data[3]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT____Vcellout__regfile__data[4]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT____Vcellout__regfile__data[5]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT____Vcellout__regfile__data[6]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT____Vcellout__regfile__data[7]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT____Vcellout__regfile__data[8]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT____Vcellout__regfile__data[9]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT____Vcellout__regfile__data[10]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT____Vcellout__regfile__data[11]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT____Vcellout__regfile__data[12]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT____Vcellout__regfile__data[13]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT____Vcellout__regfile__data[14]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT____Vcellout__regfile__data[15]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT____Vcellout__regfile__data[16]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT____Vcellout__regfile__data[17]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT____Vcellout__regfile__data[18]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT____Vcellout__regfile__data[19]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT____Vcellout__regfile__data[20]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT____Vcellout__regfile__data[21]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT____Vcellout__regfile__data[22]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT____Vcellout__regfile__data[23]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT____Vcellout__regfile__data[24]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT____Vcellout__regfile__data[25]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT____Vcellout__regfile__data[26]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT____Vcellout__regfile__data[27]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT____Vcellout__regfile__data[28]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT____Vcellout__regfile__data[29]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT____Vcellout__regfile__data[30]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT____Vcellout__regfile__data[31]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+291,(vlSelf->clk));
    bufp->fullIData(oldp+292,(vlSelf->outpc),32);
    bufp->fullIData(oldp+293,(vlSelf->out_dnpc),32);
    bufp->fullIData(oldp+294,(vlSelf->ins),32);
    bufp->fullIData(oldp+295,(vlSelf->gpr[0]),32);
    bufp->fullIData(oldp+296,(vlSelf->gpr[1]),32);
    bufp->fullIData(oldp+297,(vlSelf->gpr[2]),32);
    bufp->fullIData(oldp+298,(vlSelf->gpr[3]),32);
    bufp->fullIData(oldp+299,(vlSelf->gpr[4]),32);
    bufp->fullIData(oldp+300,(vlSelf->gpr[5]),32);
    bufp->fullIData(oldp+301,(vlSelf->gpr[6]),32);
    bufp->fullIData(oldp+302,(vlSelf->gpr[7]),32);
    bufp->fullIData(oldp+303,(vlSelf->gpr[8]),32);
    bufp->fullIData(oldp+304,(vlSelf->gpr[9]),32);
    bufp->fullIData(oldp+305,(vlSelf->gpr[10]),32);
    bufp->fullIData(oldp+306,(vlSelf->gpr[11]),32);
    bufp->fullIData(oldp+307,(vlSelf->gpr[12]),32);
    bufp->fullIData(oldp+308,(vlSelf->gpr[13]),32);
    bufp->fullIData(oldp+309,(vlSelf->gpr[14]),32);
    bufp->fullIData(oldp+310,(vlSelf->gpr[15]),32);
    bufp->fullIData(oldp+311,(vlSelf->gpr[16]),32);
    bufp->fullIData(oldp+312,(vlSelf->gpr[17]),32);
    bufp->fullIData(oldp+313,(vlSelf->gpr[18]),32);
    bufp->fullIData(oldp+314,(vlSelf->gpr[19]),32);
    bufp->fullIData(oldp+315,(vlSelf->gpr[20]),32);
    bufp->fullIData(oldp+316,(vlSelf->gpr[21]),32);
    bufp->fullIData(oldp+317,(vlSelf->gpr[22]),32);
    bufp->fullIData(oldp+318,(vlSelf->gpr[23]),32);
    bufp->fullIData(oldp+319,(vlSelf->gpr[24]),32);
    bufp->fullIData(oldp+320,(vlSelf->gpr[25]),32);
    bufp->fullIData(oldp+321,(vlSelf->gpr[26]),32);
    bufp->fullIData(oldp+322,(vlSelf->gpr[27]),32);
    bufp->fullIData(oldp+323,(vlSelf->gpr[28]),32);
    bufp->fullIData(oldp+324,(vlSelf->gpr[29]),32);
    bufp->fullIData(oldp+325,(vlSelf->gpr[30]),32);
    bufp->fullIData(oldp+326,(vlSelf->gpr[31]),32);
    bufp->fullCData(oldp+327,((0x1fU & (vlSelf->ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+328,((0x1fU & (vlSelf->ins 
                                        >> 0x14U))),5);
    bufp->fullBit(oldp+329,((IData)(((0x40005000U == 
                                      (0x40007000U 
                                       & vlSelf->ins)) 
                                     & ((2U == (IData)(vlSelf->top__DOT__extop)) 
                                        | (0xaU == (IData)(vlSelf->top__DOT__extop)))))));
    bufp->fullCData(oldp+330,((7U & (vlSelf->ins >> 0xcU))),3);
    bufp->fullCData(oldp+331,((vlSelf->ins >> 0x19U)),7);
    bufp->fullIData(oldp+332,(((IData)(4U) + vlSelf->outpc)),32);
    bufp->fullIData(oldp+333,((vlSelf->outpc + vlSelf->top__DOT__imm)),32);
    __Vtemp_hc96ce21a__0[0U] = 0U;
    __Vtemp_hc96ce21a__0[1U] = (2U | (vlSelf->outpc 
                                      << 2U));
    __Vtemp_hc96ce21a__0[2U] = (4U | ((vlSelf->top__DOT__rs1_value 
                                       << 4U) | (vlSelf->outpc 
                                                 >> 0x1eU)));
    __Vtemp_hc96ce21a__0[3U] = (vlSelf->top__DOT__rs1_value 
                                >> 0x1cU);
    bufp->fullWData(oldp+334,(__Vtemp_hc96ce21a__0),102);
    bufp->fullIData(oldp+338,((0xfffff000U & vlSelf->ins)),32);
    bufp->fullCData(oldp+339,((0x7fU & vlSelf->ins)),7);
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
    bufp->fullWData(oldp+340,(__Vtemp_h319a5eb8__0),360);
    bufp->fullBit(oldp+352,(vlSelf->top__DOT__valid));
    bufp->fullIData(oldp+353,(2U),32);
    bufp->fullIData(oldp+354,(4U),32);
    bufp->fullIData(oldp+355,(3U),32);
    bufp->fullCData(oldp+356,(0U),3);
    bufp->fullIData(oldp+357,(1U),32);
    bufp->fullIData(oldp+358,(7U),32);
    bufp->fullIData(oldp+359,(2U),32);
    bufp->fullIData(oldp+360,(8U),32);
    bufp->fullQData(oldp+361,(0x94db96ad3eULL),48);
    bufp->fullIData(oldp+363,(0U),32);
    bufp->fullIData(oldp+364,(6U),32);
    bufp->fullIData(oldp+365,(8U),32);
    bufp->fullCData(oldp+366,(0U),8);
    bufp->fullQData(oldp+367,(0x1404a81a50fULL),45);
    bufp->fullIData(oldp+369,(0xfU),32);
    bufp->fullIData(oldp+370,(3U),32);
    bufp->fullCData(oldp+371,(0U),2);
    bufp->fullIData(oldp+372,(0x25762U),18);
    bufp->fullIData(oldp+373,(0x20U),32);
    bufp->fullIData(oldp+374,(0U),32);
    bufp->fullIData(oldp+375,(0x23U),32);
    bufp->fullIData(oldp+376,(7U),32);
    bufp->fullIData(oldp+377,(0x22U),32);
    bufp->fullIData(oldp+378,(0x21U),32);
    bufp->fullIData(oldp+379,(9U),32);
    bufp->fullCData(oldp+380,(0xfU),4);
    __Vtemp_h94011e41__0[0U] = 0x8d49933aU;
    __Vtemp_h94011e41__0[1U] = 0x38636062U;
    __Vtemp_h94011e41__0[2U] = 0x782f3bdfU;
    __Vtemp_h94011e41__0[3U] = 3U;
    bufp->fullWData(oldp+381,(__Vtemp_h94011e41__0),99);
    bufp->fullIData(oldp+385,(0xbU),32);
    bufp->fullIData(oldp+386,(9U),32);
    bufp->fullIData(oldp+387,(0xaU),32);
    bufp->fullIData(oldp+388,(0x24U),32);
    bufp->fullIData(oldp+389,(0xaU),32);
}
