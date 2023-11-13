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
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBus(c+633,"outpc", false,-1, 31,0);
    tracep->declBus(c+634,"out_dnpc", false,-1, 31,0);
    tracep->declBus(c+635,"out_snpc", false,-1, 31,0);
    tracep->declBus(c+636,"ins", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+637+i*1,"gpr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+669+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+675,"valid", false,-1);
    tracep->declBit(c+676,"ready", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBus(c+633,"outpc", false,-1, 31,0);
    tracep->declBus(c+634,"out_dnpc", false,-1, 31,0);
    tracep->declBus(c+635,"out_snpc", false,-1, 31,0);
    tracep->declBus(c+636,"ins", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+637+i*1,"gpr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+669+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+675,"valid", false,-1);
    tracep->declBit(c+676,"ready", false,-1);
    tracep->declBus(c+163,"dnpc", false,-1, 31,0);
    tracep->declBus(c+635,"snpc", false,-1, 31,0);
    tracep->declBit(c+164,"idu_ready", false,-1);
    tracep->declBit(c+165,"ifu_valid", false,-1);
    tracep->declBus(c+166,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+167,"ifu_arvalid", false,-1);
    tracep->declBus(c+168,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+169,"ifu_rvalid", false,-1);
    tracep->declBus(c+170,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+171,"ifu_rready", false,-1);
    tracep->declBus(c+677,"rs1", false,-1, 4,0);
    tracep->declBus(c+678,"rs2", false,-1, 4,0);
    tracep->declBus(c+172,"rd", false,-1, 4,0);
    tracep->declBus(c+173,"imm", false,-1, 31,0);
    tracep->declBus(c+174,"func7", false,-1, 6,0);
    tracep->declBus(c+175,"opcode", false,-1, 6,0);
    tracep->declBus(c+176,"func3", false,-1, 2,0);
    tracep->declBus(c+177,"select_oprand1", false,-1, 2,0);
    tracep->declBus(c+178,"select_oprand2", false,-1, 2,0);
    tracep->declBit(c+179,"reg_write", false,-1);
    tracep->declBit(c+692,"pc_write", false,-1);
    tracep->declBit(c+180,"mem_write", false,-1);
    tracep->declBit(c+181,"mem_read", false,-1);
    tracep->declBit(c+182,"is_csr", false,-1);
    tracep->declBus(c+183,"csr_waddr", false,-1, 2,0);
    tracep->declBit(c+184,"mem_access", false,-1);
    tracep->declBit(c+185,"is_branch", false,-1);
    tracep->declBus(c+186,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+187,"reg_rdata1", false,-1, 31,0);
    tracep->declBus(c+188,"reg_rdata2", false,-1, 31,0);
    tracep->declBus(c+172,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+677,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+678,"reg_raddr2", false,-1, 4,0);
    tracep->declBit(c+693,"reg_ren1", false,-1);
    tracep->declBit(c+693,"reg_ren2", false,-1);
    tracep->declBus(c+189,"oprand1", false,-1, 31,0);
    tracep->declBus(c+190,"oprand2", false,-1, 31,0);
    tracep->declBus(c+191,"exu_res", false,-1, 31,0);
    tracep->declBit(c+694,"mem_valid", false,-1);
    tracep->declBus(c+176,"mem_readop", false,-1, 2,0);
    tracep->declBus(c+695,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+192,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+696,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+193,"mem_wmask", false,-1, 7,0);
    tracep->declBit(c+194,"mem_awvalid", false,-1);
    tracep->declBit(c+195,"mem_awready", false,-1);
    tracep->declBus(c+196,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+197,"mem_wvalid", false,-1);
    tracep->declBus(c+198,"mem_wstrb", false,-1, 7,0);
    tracep->declBus(c+188,"idu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+199,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+200,"mem_wready", false,-1);
    tracep->declBit(c+201,"mem_bready", false,-1);
    tracep->declBit(c+202,"mem_bvalid", false,-1);
    tracep->declBus(c+203,"mem_bresp", false,-1, 1,0);
    tracep->declBit(c+204,"mem_arvalid", false,-1);
    tracep->declBit(c+205,"mem_arready", false,-1);
    tracep->declBus(c+206,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+207,"mem_rvalid", false,-1);
    tracep->declBit(c+208,"mem_rready", false,-1);
    tracep->declBus(c+209,"mem_rresp", false,-1, 1,0);
    tracep->declBus(c+210,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+211,"fake_csr_wdata", false,-1, 31,0);
    tracep->declBit(c+212,"branch_flag", false,-1);
    tracep->declBit(c+213,"is_mret", false,-1);
    tracep->declBit(c+214,"is_ecall", false,-1);
    tracep->declBit(c+215,"mem_finish", false,-1);
    tracep->declBit(c+216,"idu_jump_flag", false,-1);
    tracep->declBit(c+216,"wbu_jump_flag", false,-1);
    tracep->declBus(c+217,"csr_write", false,-1, 5,0);
    tracep->declBus(c+211,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+218,"csr_wdata1", false,-1, 31,0);
    tracep->declBus(c+219,"csr_wdata2", false,-1, 31,0);
    tracep->declBus(c+211,"csr_wdata3", false,-1, 31,0);
    tracep->declBus(c+211,"csr_wdata4", false,-1, 31,0);
    tracep->declBus(c+211,"csr_wdata5", false,-1, 31,0);
    tracep->declBus(c+220,"csr_rdata0", false,-1, 31,0);
    tracep->declBus(c+221,"csr_rdata1", false,-1, 31,0);
    tracep->declBus(c+222,"csr_rdata2", false,-1, 31,0);
    tracep->declBus(c+223,"csr_rdata3", false,-1, 31,0);
    tracep->declBus(c+224,"csr_rdata4", false,-1, 31,0);
    tracep->declBus(c+225,"csr_rdata5", false,-1, 31,0);
    tracep->declBus(c+226,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+227,"mem_pos", false,-1, 1,0);
    tracep->declBus(c+228,"mem_rdata_final", false,-1, 31,0);
    tracep->pushNamePrefix("RDATA ");
    tracep->declBus(c+227,"mem_pos", false,-1, 1,0);
    tracep->declBus(c+176,"mem_readop", false,-1, 2,0);
    tracep->declBus(c+192,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+228,"mem_rdata_final", false,-1, 31,0);
    tracep->declBus(c+229,"rdata_b", false,-1, 7,0);
    tracep->declBus(c+230,"rdata_h", false,-1, 15,0);
    tracep->pushNamePrefix("get_rdata ");
    tracep->declBus(c+697,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+228,"out", false,-1, 31,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declArray(c+231,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+697,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+228,"out", false,-1, 31,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+231,"lut", false,-1, 174,0);
    tracep->declBus(c+702,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+237+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+247+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+252,"lut_out", false,-1, 31,0);
    tracep->declBit(c+253,"hit", false,-1);
    tracep->declBus(c+703,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_rdata_b ");
    tracep->declBus(c+704,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+705,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+706,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+229,"out", false,-1, 7,0);
    tracep->declBus(c+227,"key", false,-1, 1,0);
    tracep->declQuad(c+254,"lut", false,-1, 39,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+704,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+705,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+706,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+229,"out", false,-1, 7,0);
    tracep->declBus(c+227,"key", false,-1, 1,0);
    tracep->declBus(c+707,"default_out", false,-1, 7,0);
    tracep->declQuad(c+254,"lut", false,-1, 39,0);
    tracep->declBus(c+708,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+256+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+6+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+260+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+264,"lut_out", false,-1, 7,0);
    tracep->declBit(c+265,"hit", false,-1);
    tracep->declBus(c+709,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_rdata_h ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+705,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+710,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+230,"out", false,-1, 15,0);
    tracep->declBus(c+227,"key", false,-1, 1,0);
    tracep->declQuad(c+266,"lut", false,-1, 53,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+705,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+710,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+230,"out", false,-1, 15,0);
    tracep->declBus(c+227,"key", false,-1, 1,0);
    tracep->declBus(c+711,"default_out", false,-1, 15,0);
    tracep->declQuad(c+266,"lut", false,-1, 53,0);
    tracep->declBus(c+712,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+268+i*1,"pair_list", true,(i+0), 17,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+271+i*1,"data_list", true,(i+0), 15,0);
    }
    tracep->declBus(c+274,"lut_out", false,-1, 15,0);
    tracep->declBit(c+275,"hit", false,-1);
    tracep->declBus(c+713,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("get_csr_rdata ");
    tracep->declBus(c+714,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+226,"out", false,-1, 31,0);
    tracep->declBus(c+679,"key", false,-1, 2,0);
    tracep->declArray(c+276,"lut", false,-1, 209,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+714,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+226,"out", false,-1, 31,0);
    tracep->declBus(c+679,"key", false,-1, 2,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+276,"lut", false,-1, 209,0);
    tracep->declBus(c+702,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+283+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+13+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+295+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+301,"lut_out", false,-1, 31,0);
    tracep->declBit(c+302,"hit", false,-1);
    tracep->declBus(c+715,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_fake_csr_wdata ");
    tracep->declBus(c+705,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+211,"out", false,-1, 31,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declArray(c+303,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+705,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+211,"out", false,-1, 31,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+303,"lut", false,-1, 69,0);
    tracep->declBus(c+702,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+306+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+19+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+310+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+312,"lut_out", false,-1, 31,0);
    tracep->declBit(c+313,"hit", false,-1);
    tracep->declBus(c+716,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_oprand1 ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+177,"key", false,-1, 2,0);
    tracep->declArray(c+314,"lut", false,-1, 104,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+177,"key", false,-1, 2,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+314,"lut", false,-1, 104,0);
    tracep->declBus(c+702,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+318+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+21+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+324+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+327,"lut_out", false,-1, 31,0);
    tracep->declBit(c+328,"hit", false,-1);
    tracep->declBus(c+713,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_oprand2 ");
    tracep->declBus(c+705,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+190,"out", false,-1, 31,0);
    tracep->declBus(c+178,"key", false,-1, 2,0);
    tracep->declArray(c+329,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+705,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+190,"out", false,-1, 31,0);
    tracep->declBus(c+178,"key", false,-1, 2,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+329,"lut", false,-1, 69,0);
    tracep->declBus(c+702,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+332+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+24+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+336+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+338,"lut_out", false,-1, 31,0);
    tracep->declBit(c+339,"hit", false,-1);
    tracep->declBus(c+716,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_reg_wdata ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+186,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declArray(c+680,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+186,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+680,"lut", false,-1, 311,0);
    tracep->declBus(c+718,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+340+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+26+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+356+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+364,"lut_out", false,-1, 31,0);
    tracep->declBit(c+365,"hit", false,-1);
    tracep->declBus(c+719,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_wmask ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+706,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+193,"out", false,-1, 7,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declQuad(c+720,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+706,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+193,"out", false,-1, 7,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declBus(c+707,"default_out", false,-1, 7,0);
    tracep->declQuad(c+720,"lut", false,-1, 32,0);
    tracep->declBus(c+722,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+34+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+37+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+40+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+366,"lut_out", false,-1, 7,0);
    tracep->declBit(c+367,"hit", false,-1);
    tracep->declBus(c+713,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ARBITER ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBus(c+166,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+167,"ifu_arvalid", false,-1);
    tracep->declBit(c+368,"ifu_arready", false,-1);
    tracep->declBit(c+171,"ifu_rready", false,-1);
    tracep->declBit(c+169,"ifu_rvalid", false,-1);
    tracep->declBus(c+168,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+170,"ifu_rresp", false,-1, 1,0);
    tracep->declBus(c+700,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+723,"ifu_awvalid", false,-1);
    tracep->declBit(c+369,"ifu_awready", false,-1);
    tracep->declBus(c+700,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+723,"ifu_wvalid", false,-1);
    tracep->declBus(c+707,"ifu_wstrb", false,-1, 7,0);
    tracep->declBit(c+370,"ifu_wready", false,-1);
    tracep->declBit(c+723,"ifu_bready", false,-1);
    tracep->declBit(c+371,"ifu_bvalid", false,-1);
    tracep->declBus(c+372,"ifu_bresp", false,-1, 1,0);
    tracep->declBit(c+194,"mem_awvalid", false,-1);
    tracep->declBus(c+196,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+195,"mem_awready", false,-1);
    tracep->declBit(c+197,"mem_wvalid", false,-1);
    tracep->declBus(c+198,"mem_wstrb", false,-1, 7,0);
    tracep->declBus(c+199,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+200,"mem_wready", false,-1);
    tracep->declBit(c+201,"mem_bready", false,-1);
    tracep->declBit(c+202,"mem_bvalid", false,-1);
    tracep->declBus(c+203,"mem_bresp", false,-1, 1,0);
    tracep->declBit(c+204,"mem_arvalid", false,-1);
    tracep->declBus(c+206,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+205,"mem_arready", false,-1);
    tracep->declBit(c+208,"mem_rready", false,-1);
    tracep->declBit(c+207,"mem_rvalid", false,-1);
    tracep->declBus(c+192,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+209,"mem_rresp", false,-1, 1,0);
    tracep->declBit(c+724,"awvalid_temp", false,-1);
    tracep->declBus(c+373,"awaddr_temp", false,-1, 31,0);
    tracep->declBit(c+374,"wvalid_temp", false,-1);
    tracep->declBus(c+375,"wstrb_temp", false,-1, 7,0);
    tracep->declBus(c+376,"wdata_temp", false,-1, 31,0);
    tracep->declBit(c+377,"bready_temp", false,-1);
    tracep->declBit(c+378,"arvalid_temp", false,-1);
    tracep->declBus(c+379,"araddr_temp", false,-1, 31,0);
    tracep->declBit(c+380,"rready_temp", false,-1);
    tracep->declBus(c+381,"araddr", false,-1, 31,0);
    tracep->declBit(c+382,"arvalid", false,-1);
    tracep->declBit(c+383,"arready", false,-1);
    tracep->declBit(c+384,"rready", false,-1);
    tracep->declBus(c+385,"rresp", false,-1, 1,0);
    tracep->declBus(c+386,"rdata", false,-1, 31,0);
    tracep->declBit(c+387,"rvalid", false,-1);
    tracep->declBus(c+388,"awaddr", false,-1, 31,0);
    tracep->declBit(c+389,"awvalid", false,-1);
    tracep->declBit(c+390,"awready", false,-1);
    tracep->declBus(c+391,"wdata", false,-1, 31,0);
    tracep->declBit(c+392,"wvalid", false,-1);
    tracep->declBus(c+393,"wstrb", false,-1, 7,0);
    tracep->declBit(c+394,"wready", false,-1);
    tracep->declBit(c+395,"bready", false,-1);
    tracep->declBus(c+396,"bresp", false,-1, 1,0);
    tracep->declBit(c+397,"bvalid", false,-1);
    tracep->declBus(c+398,"state", false,-1, 2,0);
    tracep->declBit(c+399,"mem_access", false,-1);
    tracep->declBit(c+167,"ifu_access", false,-1);
    tracep->pushNamePrefix("u_MEM ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBit(c+389,"mem_awvalid", false,-1);
    tracep->declBit(c+390,"mem_awready", false,-1);
    tracep->declBus(c+388,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+392,"mem_wvalid", false,-1);
    tracep->declBus(c+393,"mem_wstrb", false,-1, 7,0);
    tracep->declBus(c+391,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+394,"mem_wready", false,-1);
    tracep->declBit(c+397,"mem_bvalid", false,-1);
    tracep->declBit(c+395,"mem_bready", false,-1);
    tracep->declBus(c+396,"mem_bresp", false,-1, 1,0);
    tracep->declBit(c+382,"mem_arvalid", false,-1);
    tracep->declBit(c+383,"mem_arready", false,-1);
    tracep->declBus(c+381,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+387,"mem_rvalid", false,-1);
    tracep->declBit(c+384,"mem_rready", false,-1);
    tracep->declBus(c+385,"mem_rresp", false,-1, 1,0);
    tracep->declBus(c+386,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+400,"mem_wstrb_reg", false,-1, 7,0);
    tracep->declBus(c+401,"mem_araddr_reg", false,-1, 31,0);
    tracep->declBit(c+725,"write_flag", false,-1);
    tracep->declBit(c+726,"read_flag", false,-1);
    tracep->declBus(c+402,"write_state", false,-1, 1,0);
    tracep->declBus(c+403,"read_state", false,-1, 1,0);
    tracep->declBus(c+404,"mem_wdata_reg", false,-1, 31,0);
    tracep->declBus(c+405,"mem_awaddr_reg", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_CSR ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBus(c+211,"wdata0", false,-1, 31,0);
    tracep->declBus(c+218,"wdata1", false,-1, 31,0);
    tracep->declBus(c+219,"wdata2", false,-1, 31,0);
    tracep->declBus(c+211,"wdata3", false,-1, 31,0);
    tracep->declBus(c+211,"wdata4", false,-1, 31,0);
    tracep->declBus(c+211,"wdata5", false,-1, 31,0);
    tracep->declBus(c+217,"wen", false,-1, 5,0);
    tracep->declBus(c+220,"rdata0", false,-1, 31,0);
    tracep->declBus(c+221,"rdata1", false,-1, 31,0);
    tracep->declBus(c+222,"rdata2", false,-1, 31,0);
    tracep->declBus(c+223,"rdata3", false,-1, 31,0);
    tracep->declBus(c+224,"rdata4", false,-1, 31,0);
    tracep->declBus(c+225,"rdata5", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+406+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_DNPC ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBit(c+216,"jump_flag", false,-1);
    tracep->declBit(c+212,"branch_flag", false,-1);
    tracep->declBit(c+213,"is_mret", false,-1);
    tracep->declBit(c+214,"is_ecall", false,-1);
    tracep->declBit(c+165,"valid", false,-1);
    tracep->declBit(c+164,"ready", false,-1);
    tracep->declBus(c+210,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+191,"exu_res", false,-1, 31,0);
    tracep->declBus(c+635,"snpc", false,-1, 31,0);
    tracep->declBus(c+225,"mtvec", false,-1, 31,0);
    tracep->declBus(c+221,"mepc", false,-1, 31,0);
    tracep->declBus(c+163,"dnpc", false,-1, 31,0);
    tracep->declBus(c+412,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EXU ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBus(c+189,"oprand1", false,-1, 31,0);
    tracep->declBus(c+190,"oprand2", false,-1, 31,0);
    tracep->declBus(c+176,"func3", false,-1, 2,0);
    tracep->declBus(c+174,"func7", false,-1, 6,0);
    tracep->declBus(c+175,"opcode", false,-1, 6,0);
    tracep->declBus(c+191,"res", false,-1, 31,0);
    tracep->declBus(c+413,"aluop", false,-1, 3,0);
    tracep->declBus(c+414,"B_aluop", false,-1, 3,0);
    tracep->declBus(c+415,"IR_aluop", false,-1, 3,0);
    tracep->declBus(c+416,"alu_res", false,-1, 31,0);
    tracep->declBit(c+417,"neg", false,-1);
    tracep->declBit(c+418,"wen", false,-1);
    tracep->pushNamePrefix("get_B_aluop ");
    tracep->declBus(c+714,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+704,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+414,"out", false,-1, 3,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declQuad(c+727,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+714,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+704,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+414,"out", false,-1, 3,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declBus(c+729,"default_out", false,-1, 3,0);
    tracep->declQuad(c+727,"lut", false,-1, 41,0);
    tracep->declBus(c+717,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+43+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+49+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+55+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+419,"lut_out", false,-1, 3,0);
    tracep->declBit(c+420,"hit", false,-1);
    tracep->declBus(c+715,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_IR_aluop ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+704,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+415,"out", false,-1, 3,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declQuad(c+421,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+704,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+415,"out", false,-1, 3,0);
    tracep->declBus(c+176,"key", false,-1, 2,0);
    tracep->declBus(c+729,"default_out", false,-1, 3,0);
    tracep->declQuad(c+421,"lut", false,-1, 55,0);
    tracep->declBus(c+717,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+423+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+61+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+431+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+439,"lut_out", false,-1, 3,0);
    tracep->declBit(c+440,"hit", false,-1);
    tracep->declBus(c+719,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_aluop ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+704,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+413,"out", false,-1, 3,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declBus(c+729,"default_out", false,-1, 3,0);
    tracep->declQuad(c+441,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+698,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+704,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+730,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+413,"out", false,-1, 3,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declBus(c+729,"default_out", false,-1, 3,0);
    tracep->declQuad(c+441,"lut", false,-1, 32,0);
    tracep->declBus(c+722,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+443+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+69+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+446+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+449,"lut_out", false,-1, 3,0);
    tracep->declBit(c+450,"hit", false,-1);
    tracep->declBus(c+713,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBus(c+413,"aluop", false,-1, 3,0);
    tracep->declBus(c+189,"num1", false,-1, 31,0);
    tracep->declBus(c+190,"num2", false,-1, 31,0);
    tracep->declBus(c+416,"res", false,-1, 31,0);
    tracep->declBus(c+451,"res_sub", false,-1, 31,0);
    tracep->declBus(c+452,"res_add", false,-1, 31,0);
    tracep->declBus(c+453,"res_xor", false,-1, 31,0);
    tracep->declBus(c+454,"res_or", false,-1, 31,0);
    tracep->declBus(c+455,"res_and", false,-1, 31,0);
    tracep->declBus(c+456,"res_lower_signed", false,-1, 31,0);
    tracep->declBus(c+457,"res_lower_unsigned", false,-1, 31,0);
    tracep->declBus(c+458,"res_left", false,-1, 31,0);
    tracep->declBus(c+459,"res_right_unsigned", false,-1, 31,0);
    tracep->declBus(c+460,"res_right_signed", false,-1, 31,0);
    tracep->declBus(c+461,"res_eq", false,-1, 31,0);
    tracep->declBus(c+189,"signed_num1", false,-1, 31,0);
    tracep->declBus(c+190,"signed_num2", false,-1, 31,0);
    tracep->pushNamePrefix("get_res ");
    tracep->declBus(c+722,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+704,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+416,"out", false,-1, 31,0);
    tracep->declBus(c+413,"key", false,-1, 3,0);
    tracep->declArray(c+462,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+722,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+704,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+416,"out", false,-1, 31,0);
    tracep->declBus(c+413,"key", false,-1, 3,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+462,"lut", false,-1, 395,0);
    tracep->declBus(c+731,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+475+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+72+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+497+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+508,"lut_out", false,-1, 31,0);
    tracep->declBit(c+509,"hit", false,-1);
    tracep->declBus(c+732,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_IDU ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBus(c+636,"real_ins", false,-1, 31,0);
    tracep->declBit(c+165,"ifu_valid", false,-1);
    tracep->declBit(c+207,"mem_rvalid", false,-1);
    tracep->declBit(c+215,"mem_finish", false,-1);
    tracep->declBus(c+677,"rs1", false,-1, 4,0);
    tracep->declBus(c+678,"rs2", false,-1, 4,0);
    tracep->declBus(c+172,"rd", false,-1, 4,0);
    tracep->declBus(c+173,"imm", false,-1, 31,0);
    tracep->declBus(c+174,"func7", false,-1, 6,0);
    tracep->declBus(c+175,"opcode", false,-1, 6,0);
    tracep->declBus(c+176,"func3", false,-1, 2,0);
    tracep->declBus(c+177,"select_oprand1", false,-1, 2,0);
    tracep->declBus(c+178,"select_oprand2", false,-1, 2,0);
    tracep->declBit(c+179,"reg_write", false,-1);
    tracep->declBit(c+181,"mem_read", false,-1);
    tracep->declBit(c+180,"mem_write", false,-1);
    tracep->declBit(c+184,"mem_access", false,-1);
    tracep->declBit(c+214,"is_ecall", false,-1);
    tracep->declBit(c+213,"is_mret", false,-1);
    tracep->declBit(c+182,"is_csr", false,-1);
    tracep->declBit(c+216,"jump_flag", false,-1);
    tracep->declBit(c+185,"is_branch", false,-1);
    tracep->declBit(c+164,"idu_ready", false,-1);
    tracep->declBus(c+183,"csr_waddr", false,-1, 2,0);
    tracep->declBit(c+510,"fake_reg_write", false,-1);
    tracep->declBus(c+511,"ins", false,-1, 31,0);
    tracep->declBus(c+512,"state", false,-1, 1,0);
    tracep->declBit(c+513,"read_flag", false,-1);
    tracep->declBit(c+514,"write_flag", false,-1);
    tracep->declBit(c+690,"pre_mem_access", false,-1);
    tracep->declBus(c+691,"pre_opcode", false,-1, 6,0);
    tracep->declBus(c+515,"immI", false,-1, 31,0);
    tracep->declBus(c+516,"immU", false,-1, 31,0);
    tracep->declBus(c+517,"immB", false,-1, 31,0);
    tracep->declBus(c+518,"immS", false,-1, 31,0);
    tracep->declBus(c+519,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("get_select_oprand1 ");
    tracep->declBus(c+733,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 2,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declArray(c+734,"lut", false,-1, 89,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+733,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 2,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declBus(c+737,"default_out", false,-1, 2,0);
    tracep->declArray(c+734,"lut", false,-1, 89,0);
    tracep->declBus(c+708,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+83+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+92+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+101+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+520,"lut_out", false,-1, 2,0);
    tracep->declBit(c+521,"hit", false,-1);
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_select_oprand2 ");
    tracep->declBus(c+733,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 2,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declArray(c+739,"lut", false,-1, 89,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+733,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+698,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+178,"out", false,-1, 2,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declBus(c+737,"default_out", false,-1, 2,0);
    tracep->declArray(c+739,"lut", false,-1, 89,0);
    tracep->declBus(c+708,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+110+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+119+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+128+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+522,"lut_out", false,-1, 2,0);
    tracep->declBit(c+523,"hit", false,-1);
    tracep->declBus(c+738,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_MuxKey ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declArray(c+524,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+706,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+717,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+699,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+173,"out", false,-1, 31,0);
    tracep->declBus(c+175,"key", false,-1, 6,0);
    tracep->declBus(c+701,"default_out", false,-1, 31,0);
    tracep->declArray(c+524,"lut", false,-1, 311,0);
    tracep->declBus(c+718,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+534+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+137+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+550+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+558,"lut_out", false,-1, 31,0);
    tracep->declBit(c+559,"hit", false,-1);
    tracep->declBus(c+719,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_IFU ");
    tracep->declBus(c+699,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBus(c+163,"in", false,-1, 31,0);
    tracep->declBit(c+164,"idu_ready", false,-1);
    tracep->declBus(c+633,"out", false,-1, 31,0);
    tracep->declBus(c+636,"ins", false,-1, 31,0);
    tracep->declBit(c+165,"ifu_valid", false,-1);
    tracep->declBus(c+166,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+167,"ifu_arvalid", false,-1);
    tracep->declBus(c+168,"ifu_rdata", false,-1, 31,0);
    tracep->declBit(c+169,"ifu_rvalid", false,-1);
    tracep->declBus(c+170,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+171,"ifu_rready", false,-1);
    tracep->declBus(c+560,"pc", false,-1, 31,0);
    tracep->declBus(c+561,"state", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBus(c+186,"wdata", false,-1, 31,0);
    tracep->declBus(c+172,"waddr", false,-1, 4,0);
    tracep->declBus(c+677,"raddr1", false,-1, 4,0);
    tracep->declBus(c+678,"raddr2", false,-1, 4,0);
    tracep->declBit(c+179,"wen", false,-1);
    tracep->declBit(c+693,"ren1", false,-1);
    tracep->declBit(c+693,"ren2", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+562+i*1,"data", true,(i+0), 31,0);
    }
    tracep->declBus(c+187,"rdata1", false,-1, 31,0);
    tracep->declBus(c+188,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+594+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_WBU ");
    tracep->declBit(c+632,"clk", false,-1);
    tracep->declBit(c+631,"rst", false,-1);
    tracep->declBus(c+175,"opcode", false,-1, 6,0);
    tracep->declBus(c+191,"exu_res", false,-1, 31,0);
    tracep->declBus(c+173,"imm", false,-1, 31,0);
    tracep->declBus(c+633,"outpc", false,-1, 31,0);
    tracep->declBus(c+211,"fake_csr_wdata", false,-1, 31,0);
    tracep->declBit(c+214,"is_ecall", false,-1);
    tracep->declBit(c+181,"mem_read", false,-1);
    tracep->declBit(c+180,"mem_write", false,-1);
    tracep->declBit(c+213,"is_mret", false,-1);
    tracep->declBit(c+182,"is_csr", false,-1);
    tracep->declBit(c+216,"idu_jump_flag", false,-1);
    tracep->declBit(c+185,"is_branch", false,-1);
    tracep->declBus(c+183,"csr_waddr", false,-1, 2,0);
    tracep->declBus(c+188,"idu_mem_wdata", false,-1, 31,0);
    tracep->declBus(c+193,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+210,"branch_pc", false,-1, 31,0);
    tracep->declBit(c+216,"wbu_jump_flag", false,-1);
    tracep->declBit(c+212,"branch_flag", false,-1);
    tracep->declBit(c+215,"mem_finish", false,-1);
    tracep->declBus(c+211,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+218,"csr_wdata1", false,-1, 31,0);
    tracep->declBus(c+219,"csr_wdata2", false,-1, 31,0);
    tracep->declBus(c+211,"csr_wdata3", false,-1, 31,0);
    tracep->declBus(c+211,"csr_wdata4", false,-1, 31,0);
    tracep->declBus(c+211,"csr_wdata5", false,-1, 31,0);
    tracep->declBus(c+217,"csr_write", false,-1, 5,0);
    tracep->declBus(c+227,"mem_pos", false,-1, 1,0);
    tracep->declBit(c+204,"mem_arvalid", false,-1);
    tracep->declBit(c+205,"mem_arready", false,-1);
    tracep->declBus(c+206,"mem_araddr", false,-1, 31,0);
    tracep->declBit(c+208,"mem_rready", false,-1);
    tracep->declBit(c+207,"mem_rvalid", false,-1);
    tracep->declBus(c+209,"mem_rresp", false,-1, 1,0);
    tracep->declBit(c+197,"mem_wvalid", false,-1);
    tracep->declBit(c+200,"mem_wready", false,-1);
    tracep->declBus(c+199,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+198,"mem_wstrb", false,-1, 7,0);
    tracep->declBit(c+194,"mem_awvalid", false,-1);
    tracep->declBit(c+195,"mem_awready", false,-1);
    tracep->declBus(c+196,"mem_awaddr", false,-1, 31,0);
    tracep->declBit(c+202,"mem_bvalid", false,-1);
    tracep->declBit(c+201,"mem_bready", false,-1);
    tracep->declBus(c+203,"mem_bresp", false,-1, 1,0);
    tracep->declBus(c+626,"fake_csr_write", false,-1, 5,0);
    tracep->declBus(c+627,"read_state", false,-1, 1,0);
    tracep->declBus(c+628,"write_state", false,-1, 1,0);
    tracep->pushNamePrefix("get_fake_csr_write ");
    tracep->declBus(c+714,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+714,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+626,"out", false,-1, 5,0);
    tracep->declBus(c+183,"key", false,-1, 2,0);
    tracep->declQuad(c+742,"lut", false,-1, 53,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+714,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+698,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+714,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+700,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+626,"out", false,-1, 5,0);
    tracep->declBus(c+183,"key", false,-1, 2,0);
    tracep->declBus(c+744,"default_out", false,-1, 5,0);
    tracep->declQuad(c+742,"lut", false,-1, 53,0);
    tracep->declBus(c+733,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+145+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+151+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+157+i*1,"data_list", true,(i+0), 5,0);
    }
    tracep->declBus(c+629,"lut_out", false,-1, 5,0);
    tracep->declBit(c+630,"hit", false,-1);
    tracep->declBus(c+715,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
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
    VlWide<6>/*191:0*/ __Vtemp_ha014259e__0;
    VlWide<7>/*223:0*/ __Vtemp_h81eb4d05__0;
    VlWide<3>/*95:0*/ __Vtemp_h98da5384__0;
    VlWide<4>/*127:0*/ __Vtemp_h20b531de__0;
    VlWide<3>/*95:0*/ __Vtemp_hf743ae85__0;
    VlWide<13>/*415:0*/ __Vtemp_h9368837c__0;
    VlWide<10>/*319:0*/ __Vtemp_hcfee3fac__0;
    VlWide<10>/*319:0*/ __Vtemp_h34867a30__0;
    VlWide<3>/*95:0*/ __Vtemp_hd76f35b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h97869814__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[7]),7);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[10]),4);
    bufp->fullSData(oldp+83,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+84,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+85,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+86,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+87,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+88,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+89,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+90,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+91,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[8]),10);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+106,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[8]),3);
    bufp->fullSData(oldp+110,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+111,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+112,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+113,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+114,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+115,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+116,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+117,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+118,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[8]),10);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[8]),3);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[7]),7);
    bufp->fullSData(oldp+145,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+146,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+147,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+148,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+149,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+150,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+152,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[0]),6);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[1]),6);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[2]),6);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[3]),6);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[4]),6);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[5]),6);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__dnpc),32);
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__idu_ready));
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__ifu_valid));
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__ifu_araddr),32);
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__ifu_arvalid));
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+169,(vlSelf->top__DOT__ifu_rvalid));
    bufp->fullCData(oldp+170,(vlSelf->top__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__ifu_rready));
    bufp->fullCData(oldp+172,((0x1fU & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                        >> 7U))),5);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__imm),32);
    bufp->fullCData(oldp+174,((vlSelf->top__DOT__u_IDU__DOT__ins 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+175,((0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)),7);
    bufp->fullCData(oldp+176,((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__select_oprand1),3);
    bufp->fullCData(oldp+178,(vlSelf->top__DOT__select_oprand2),3);
    bufp->fullBit(oldp+179,((1U & (((3U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->top__DOT__u_IDU__DOT__ins)))
                                    ? ((IData)(vlSelf->top__DOT__mem_rvalid)
                                        ? (IData)(vlSelf->top__DOT__u_IDU__DOT__fake_reg_write)
                                        : 0U) : (IData)(vlSelf->top__DOT__u_IDU__DOT__fake_reg_write)))));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__mem_write));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__mem_read));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__is_csr));
    bufp->fullCData(oldp+183,((7U & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                     >> 0x14U))),3);
    bufp->fullBit(oldp+184,(((3U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                             | (0x23U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)))));
    bufp->fullBit(oldp+185,((0x63U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins))));
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__reg_wdata),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__reg_rdata1),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__reg_rdata2),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__oprand1),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__oprand2),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__exu_res),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__mem_wmask),8);
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__mem_awvalid));
    bufp->fullBit(oldp+195,(vlSelf->top__DOT__mem_awready));
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__mem_awaddr),32);
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__mem_wvalid));
    bufp->fullCData(oldp+198,(vlSelf->top__DOT__mem_wstrb),8);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__mem_wdata),32);
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__mem_wready));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__mem_bready));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__mem_bvalid));
    bufp->fullCData(oldp+203,(vlSelf->top__DOT__mem_bresp),2);
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__mem_arvalid));
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__mem_arready));
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__mem_araddr),32);
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__mem_rvalid));
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__mem_rready));
    bufp->fullCData(oldp+209,(vlSelf->top__DOT__mem_rresp),2);
    bufp->fullIData(oldp+210,((vlSelf->top__DOT__imm 
                               + vlSelf->top__DOT__u_IFU__DOT__pc)),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__fake_csr_wdata),32);
    bufp->fullBit(oldp+212,(((0x63U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                             & vlSelf->top__DOT__exu_res)));
    bufp->fullBit(oldp+213,((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)));
    bufp->fullBit(oldp+214,((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)));
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__mem_finish));
    bufp->fullBit(oldp+216,(((0x6fU == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                             | (0x67U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)))));
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__csr_write),6);
    bufp->fullIData(oldp+218,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                ? vlSelf->top__DOT__u_IFU__DOT__pc
                                : vlSelf->top__DOT__fake_csr_wdata)),32);
    bufp->fullIData(oldp+219,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                ? 1U : vlSelf->top__DOT__fake_csr_wdata)),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [0U]),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [1U]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [2U]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [3U]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [4U]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [5U]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__csr_rdata),32);
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__mem_pos),2);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__mem_rdata_final),32);
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__RDATA__DOT__rdata_b),8);
    bufp->fullSData(oldp+230,(vlSelf->top__DOT__RDATA__DOT__rdata_h),16);
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
    __Vtemp_ha014259e__0[5U] = (0xfffU & ((0xfffU & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b) 
                                                           >> 7U)))) 
                                            >> 0xcU)) 
                                          | ((IData)(vlSelf->top__DOT__RDATA__DOT__rdata_b) 
                                             >> 0x14U)));
    bufp->fullWData(oldp+231,(__Vtemp_ha014259e__0),175);
    bufp->fullQData(oldp+237,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+239,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+241,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+243,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+245,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+253,(vlSelf->top__DOT__RDATA__DOT__get_rdata__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+254,((((QData)((IData)((0xffU 
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
    bufp->fullSData(oldp+256,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+257,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+258,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+259,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullCData(oldp+260,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+261,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+262,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+263,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__data_list[3]),8);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__RDATA__DOT__get_rdata_b__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+266,((0x400000000ULL | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->top__DOT__mem_rdata))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (vlSelf->top__DOT__mem_rdata 
                                                                         >> 8U)))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x20000U 
                                                                       | (vlSelf->top__DOT__mem_rdata 
                                                                          >> 0x10U)))))))),54);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__pair_list[0]),18);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__pair_list[1]),18);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__pair_list[2]),18);
    bufp->fullSData(oldp+271,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[0]),16);
    bufp->fullSData(oldp+272,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[1]),16);
    bufp->fullSData(oldp+273,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__data_list[2]),16);
    bufp->fullSData(oldp+274,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__lut_out),16);
    bufp->fullBit(oldp+275,(vlSelf->top__DOT__RDATA__DOT__get_rdata_h__DOT__i0__DOT__hit));
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
                                          [3U] << 6U) 
                                         | (vlSelf->top__DOT__u_CSR__DOT__rf
                                            [4U] >> 0x1dU)));
    __Vtemp_h81eb4d05__0[3U] = (0xc0U | ((vlSelf->top__DOT__u_CSR__DOT__rf
                                          [2U] << 9U) 
                                         | (vlSelf->top__DOT__u_CSR__DOT__rf
                                            [3U] >> 0x1aU)));
    __Vtemp_h81eb4d05__0[4U] = (0x400U | ((vlSelf->top__DOT__u_CSR__DOT__rf
                                           [1U] << 0xcU) 
                                          | (vlSelf->top__DOT__u_CSR__DOT__rf
                                             [2U] >> 0x17U)));
    __Vtemp_h81eb4d05__0[5U] = (0x1000U | ((vlSelf->top__DOT__u_CSR__DOT__rf
                                            [0U] << 0xfU) 
                                           | (vlSelf->top__DOT__u_CSR__DOT__rf
                                              [1U] 
                                              >> 0x14U)));
    __Vtemp_h81eb4d05__0[6U] = (vlSelf->top__DOT__u_CSR__DOT__rf
                                [0U] >> 0x11U);
    bufp->fullWData(oldp+276,(__Vtemp_h81eb4d05__0),210);
    bufp->fullQData(oldp+283,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+285,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+287,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+289,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+291,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+293,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+295,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit));
    __Vtemp_h98da5384__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))));
    __Vtemp_h98da5384__0[1U] = (((vlSelf->top__DOT__csr_rdata 
                                  | vlSelf->top__DOT__reg_rdata1) 
                                 << 3U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))) 
                                                   >> 0x20U)));
    __Vtemp_h98da5384__0[2U] = (0x10U | ((vlSelf->top__DOT__csr_rdata 
                                          | vlSelf->top__DOT__reg_rdata1) 
                                         >> 0x1dU));
    bufp->fullWData(oldp+303,(__Vtemp_h98da5384__0),70);
    bufp->fullQData(oldp+306,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+308,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullIData(oldp+310,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+311,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+312,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+313,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit));
    __Vtemp_h20b531de__0[0U] = (IData)((0x200000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))));
    __Vtemp_h20b531de__0[1U] = ((vlSelf->top__DOT__u_IFU__DOT__pc 
                                 << 3U) | (IData)((
                                                   (0x200000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__reg_rdata1))) 
                                                   >> 0x20U)));
    __Vtemp_h20b531de__0[2U] = (8U | (vlSelf->top__DOT__u_IFU__DOT__pc 
                                      >> 0x1dU));
    __Vtemp_h20b531de__0[3U] = 0U;
    bufp->fullWData(oldp+314,(__Vtemp_h20b531de__0),105);
    bufp->fullQData(oldp+318,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+320,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+322,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullIData(oldp+324,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+325,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+326,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+327,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+328,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit));
    __Vtemp_hf743ae85__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__imm))));
    __Vtemp_hf743ae85__0[1U] = ((vlSelf->top__DOT__reg_rdata2 
                                 << 3U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_hf743ae85__0[2U] = (vlSelf->top__DOT__reg_rdata2 
                                >> 0x1dU);
    bufp->fullWData(oldp+329,(__Vtemp_hf743ae85__0),70);
    bufp->fullQData(oldp+332,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+334,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullIData(oldp+336,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+337,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+338,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+339,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+340,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+342,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+344,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+346,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+348,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+350,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+352,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+354,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+356,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+357,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+358,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+359,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+360,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+361,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+362,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+363,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+364,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+366,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+367,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+368,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_arready));
    bufp->fullBit(oldp+369,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_awready));
    bufp->fullBit(oldp+370,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_wready));
    bufp->fullBit(oldp+371,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_bvalid));
    bufp->fullCData(oldp+372,(vlSelf->top__DOT__u_ARBITER__DOT__ifu_bresp),2);
    bufp->fullIData(oldp+373,(vlSelf->top__DOT__u_ARBITER__DOT__awaddr_temp),32);
    bufp->fullBit(oldp+374,(vlSelf->top__DOT__u_ARBITER__DOT__wvalid_temp));
    bufp->fullCData(oldp+375,(vlSelf->top__DOT__u_ARBITER__DOT__wstrb_temp),8);
    bufp->fullIData(oldp+376,(vlSelf->top__DOT__u_ARBITER__DOT__wdata_temp),32);
    bufp->fullBit(oldp+377,(vlSelf->top__DOT__u_ARBITER__DOT__bready_temp));
    bufp->fullBit(oldp+378,(vlSelf->top__DOT__u_ARBITER__DOT__arvalid_temp));
    bufp->fullIData(oldp+379,(vlSelf->top__DOT__u_ARBITER__DOT__araddr_temp),32);
    bufp->fullBit(oldp+380,(vlSelf->top__DOT__u_ARBITER__DOT__rready_temp));
    bufp->fullIData(oldp+381,(vlSelf->top__DOT__u_ARBITER__DOT__araddr),32);
    bufp->fullBit(oldp+382,(vlSelf->top__DOT__u_ARBITER__DOT__arvalid));
    bufp->fullBit(oldp+383,(vlSelf->top__DOT__u_ARBITER__DOT__arready));
    bufp->fullBit(oldp+384,(vlSelf->top__DOT__u_ARBITER__DOT__rready));
    bufp->fullCData(oldp+385,(vlSelf->top__DOT__u_ARBITER__DOT__rresp),2);
    bufp->fullIData(oldp+386,(vlSelf->top__DOT__u_ARBITER__DOT__rdata),32);
    bufp->fullBit(oldp+387,(vlSelf->top__DOT__u_ARBITER__DOT__rvalid));
    bufp->fullIData(oldp+388,(vlSelf->top__DOT__u_ARBITER__DOT__awaddr),32);
    bufp->fullBit(oldp+389,(vlSelf->top__DOT__u_ARBITER__DOT__awvalid));
    bufp->fullBit(oldp+390,(vlSelf->top__DOT__u_ARBITER__DOT__awready));
    bufp->fullIData(oldp+391,(vlSelf->top__DOT__u_ARBITER__DOT__wdata),32);
    bufp->fullBit(oldp+392,(vlSelf->top__DOT__u_ARBITER__DOT__wvalid));
    bufp->fullCData(oldp+393,(vlSelf->top__DOT__u_ARBITER__DOT__wstrb),8);
    bufp->fullBit(oldp+394,(vlSelf->top__DOT__u_ARBITER__DOT__wready));
    bufp->fullBit(oldp+395,(vlSelf->top__DOT__u_ARBITER__DOT__bready));
    bufp->fullCData(oldp+396,(vlSelf->top__DOT__u_ARBITER__DOT__bresp),2);
    bufp->fullBit(oldp+397,(vlSelf->top__DOT__u_ARBITER__DOT__bvalid));
    bufp->fullCData(oldp+398,(vlSelf->top__DOT__u_ARBITER__DOT__state),3);
    bufp->fullBit(oldp+399,(vlSelf->top__DOT__u_ARBITER__DOT__mem_access));
    bufp->fullCData(oldp+400,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wstrb_reg),8);
    bufp->fullIData(oldp+401,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_araddr_reg),32);
    bufp->fullCData(oldp+402,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_state),2);
    bufp->fullCData(oldp+403,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_state),2);
    bufp->fullIData(oldp+404,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_wdata_reg),32);
    bufp->fullIData(oldp+405,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__mem_awaddr_reg),32);
    bufp->fullIData(oldp+406,(vlSelf->top__DOT__u_CSR__DOT__rf[0]),32);
    bufp->fullIData(oldp+407,(vlSelf->top__DOT__u_CSR__DOT__rf[1]),32);
    bufp->fullIData(oldp+408,(vlSelf->top__DOT__u_CSR__DOT__rf[2]),32);
    bufp->fullIData(oldp+409,(vlSelf->top__DOT__u_CSR__DOT__rf[3]),32);
    bufp->fullIData(oldp+410,(vlSelf->top__DOT__u_CSR__DOT__rf[4]),32);
    bufp->fullIData(oldp+411,(vlSelf->top__DOT__u_CSR__DOT__rf[5]),32);
    bufp->fullCData(oldp+412,(vlSelf->top__DOT__u_DNPC__DOT__state),2);
    bufp->fullCData(oldp+413,(vlSelf->top__DOT__u_EXU__DOT__aluop),4);
    bufp->fullCData(oldp+414,(vlSelf->top__DOT__u_EXU__DOT__B_aluop),4);
    bufp->fullCData(oldp+415,(vlSelf->top__DOT__u_EXU__DOT__IR_aluop),4);
    bufp->fullIData(oldp+416,(vlSelf->top__DOT__u_EXU__DOT__alu_res),32);
    bufp->fullBit(oldp+417,(vlSelf->top__DOT__u_EXU__DOT__neg));
    bufp->fullBit(oldp+418,(((0x37U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)) 
                             | (0x17U == (0x7fU & vlSelf->top__DOT__u_IDU__DOT__ins)))));
    bufp->fullCData(oldp+419,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+420,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+421,((0x592b98540000ULL | 
                               (((QData)((IData)(((IData)(
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
    bufp->fullCData(oldp+423,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+424,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+425,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+426,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+427,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+428,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+429,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+430,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+431,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+432,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+433,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+434,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+435,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+436,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+437,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+438,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+439,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+440,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+441,((0x18c000000ULL | (QData)((IData)(
                                                                (0x98330U 
                                                                 | (((IData)(vlSelf->top__DOT__u_EXU__DOT__B_aluop) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop) 
                                                                        << 0xbU) 
                                                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop)))))))),33);
    bufp->fullSData(oldp+443,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+444,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+445,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+446,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+447,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+448,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+449,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+450,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+451,((vlSelf->top__DOT__oprand1 
                               - vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+452,((vlSelf->top__DOT__oprand1 
                               + vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+453,((vlSelf->top__DOT__oprand1 
                               ^ vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+454,((vlSelf->top__DOT__oprand1 
                               | vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+455,((vlSelf->top__DOT__oprand1 
                               & vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+456,((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+457,(((vlSelf->top__DOT__oprand1 
                                < vlSelf->top__DOT__oprand2)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+458,((vlSelf->top__DOT__oprand1 
                               << (0x1fU & vlSelf->top__DOT__oprand2))),32);
    bufp->fullIData(oldp+459,((vlSelf->top__DOT__oprand1 
                               >> (0x1fU & vlSelf->top__DOT__oprand2))),32);
    bufp->fullIData(oldp+460,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                             (0x1fU 
                                              & vlSelf->top__DOT__oprand2))),32);
    bufp->fullIData(oldp+461,(((vlSelf->top__DOT__oprand1 
                                == vlSelf->top__DOT__oprand2)
                                ? 1U : 0U)),32);
    __Vtemp_h9368837c__0[0U] = (IData)((0xa00000000ULL 
                                        | (QData)((IData)(
                                                          ((vlSelf->top__DOT__oprand1 
                                                            == vlSelf->top__DOT__oprand2)
                                                            ? 1U
                                                            : 0U)))));
    __Vtemp_h9368837c__0[1U] = ((((vlSelf->top__DOT__oprand1 
                                   < vlSelf->top__DOT__oprand2)
                                   ? 1U : 0U) << 4U) 
                                | (IData)(((0xa00000000ULL 
                                            | (QData)((IData)(
                                                              ((vlSelf->top__DOT__oprand1 
                                                                == vlSelf->top__DOT__oprand2)
                                                                ? 1U
                                                                : 0U)))) 
                                           >> 0x20U)));
    __Vtemp_h9368837c__0[2U] = (0x90U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                         (0x1fU 
                                                          & vlSelf->top__DOT__oprand2)) 
                                          << 8U) | 
                                         (((vlSelf->top__DOT__oprand1 
                                            < vlSelf->top__DOT__oprand2)
                                            ? 1U : 0U) 
                                          >> 0x1cU)));
    __Vtemp_h9368837c__0[3U] = (0x800U | (((vlSelf->top__DOT__oprand1 
                                            >> (0x1fU 
                                                & vlSelf->top__DOT__oprand2)) 
                                           << 0xcU) 
                                          | (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                            (0x1fU 
                                                             & vlSelf->top__DOT__oprand2)) 
                                             >> 0x18U)));
    __Vtemp_h9368837c__0[4U] = (0x7000U | (((vlSelf->top__DOT__oprand1 
                                             << (0x1fU 
                                                 & vlSelf->top__DOT__oprand2)) 
                                            << 0x10U) 
                                           | ((vlSelf->top__DOT__oprand1 
                                               >> (0x1fU 
                                                   & vlSelf->top__DOT__oprand2)) 
                                              >> 0x14U)));
    __Vtemp_h9368837c__0[5U] = (0x60000U | (((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                               ? 1U
                                               : 0U) 
                                             << 0x14U) 
                                            | ((vlSelf->top__DOT__oprand1 
                                                << 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__oprand2)) 
                                               >> 0x10U)));
    __Vtemp_h9368837c__0[6U] = (0x500000U | (((vlSelf->top__DOT__oprand1 
                                               & vlSelf->top__DOT__oprand2) 
                                              << 0x18U) 
                                             | ((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                                  ? 1U
                                                  : 0U) 
                                                >> 0xcU)));
    __Vtemp_h9368837c__0[7U] = (0x4000000U | (((vlSelf->top__DOT__oprand1 
                                                | vlSelf->top__DOT__oprand2) 
                                               << 0x1cU) 
                                              | ((vlSelf->top__DOT__oprand1 
                                                  & vlSelf->top__DOT__oprand2) 
                                                 >> 8U)));
    __Vtemp_h9368837c__0[8U] = (0x30000000U | ((vlSelf->top__DOT__oprand1 
                                                | vlSelf->top__DOT__oprand2) 
                                               >> 4U));
    __Vtemp_h9368837c__0[9U] = (vlSelf->top__DOT__oprand1 
                                ^ vlSelf->top__DOT__oprand2);
    __Vtemp_h9368837c__0[0xaU] = (2U | ((vlSelf->top__DOT__oprand1 
                                         - vlSelf->top__DOT__oprand2) 
                                        << 4U));
    __Vtemp_h9368837c__0[0xbU] = (0x10U | (((vlSelf->top__DOT__oprand1 
                                             + vlSelf->top__DOT__oprand2) 
                                            << 8U) 
                                           | ((vlSelf->top__DOT__oprand1 
                                               - vlSelf->top__DOT__oprand2) 
                                              >> 0x1cU)));
    __Vtemp_h9368837c__0[0xcU] = ((vlSelf->top__DOT__oprand1 
                                   + vlSelf->top__DOT__oprand2) 
                                  >> 0x18U);
    bufp->fullWData(oldp+462,(__Vtemp_h9368837c__0),396);
    bufp->fullQData(oldp+475,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+477,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+479,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+481,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+483,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+485,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+487,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+489,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+491,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+493,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+495,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+497,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+498,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+499,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+500,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+501,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+502,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+503,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+504,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+505,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+506,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+507,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+508,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+509,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+510,(vlSelf->top__DOT__u_IDU__DOT__fake_reg_write));
    bufp->fullIData(oldp+511,(vlSelf->top__DOT__u_IDU__DOT__ins),32);
    bufp->fullCData(oldp+512,(vlSelf->top__DOT__u_IDU__DOT__state),2);
    bufp->fullBit(oldp+513,(vlSelf->top__DOT__u_IDU__DOT__read_flag));
    bufp->fullBit(oldp+514,(vlSelf->top__DOT__u_IDU__DOT__write_flag));
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__u_IDU__DOT__immI),32);
    bufp->fullIData(oldp+516,((0xfffff000U & vlSelf->top__DOT__u_IDU__DOT__ins)),32);
    bufp->fullIData(oldp+517,((((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
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
    bufp->fullIData(oldp+518,((((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+519,((((- (IData)((vlSelf->top__DOT__u_IDU__DOT__ins 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->top__DOT__u_IDU__DOT__ins) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                      >> 0x14U)))))),32);
    bufp->fullCData(oldp+520,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+521,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+522,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+523,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit));
    __Vtemp_hcfee3fac__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI))));
    __Vtemp_hcfee3fac__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->top__DOT__u_IDU__DOT__ins)))) 
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
    __Vtemp_hcfee3fac__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->top__DOT__u_IDU__DOT__ins 
                                                    >> 0x1fU))) 
                                        << 0x17U) | 
                                       ((0x7f8000U 
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
                                          | (7U & (
                                                   (- (IData)(
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
    bufp->fullWData(oldp+524,(__Vtemp_hcfee3fac__0),312);
    bufp->fullQData(oldp+534,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+536,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+538,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+540,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+542,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+544,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+546,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+548,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+550,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+551,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+552,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+553,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+554,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+555,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+556,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+557,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+558,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+559,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+560,(vlSelf->top__DOT__u_IFU__DOT__pc),32);
    bufp->fullCData(oldp+561,(vlSelf->top__DOT__u_IFU__DOT__state),2);
    bufp->fullIData(oldp+562,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0]),32);
    bufp->fullIData(oldp+563,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[1]),32);
    bufp->fullIData(oldp+564,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[2]),32);
    bufp->fullIData(oldp+565,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[3]),32);
    bufp->fullIData(oldp+566,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[4]),32);
    bufp->fullIData(oldp+567,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[5]),32);
    bufp->fullIData(oldp+568,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[6]),32);
    bufp->fullIData(oldp+569,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[7]),32);
    bufp->fullIData(oldp+570,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[8]),32);
    bufp->fullIData(oldp+571,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[9]),32);
    bufp->fullIData(oldp+572,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[10]),32);
    bufp->fullIData(oldp+573,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[11]),32);
    bufp->fullIData(oldp+574,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[12]),32);
    bufp->fullIData(oldp+575,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[13]),32);
    bufp->fullIData(oldp+576,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[14]),32);
    bufp->fullIData(oldp+577,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[15]),32);
    bufp->fullIData(oldp+578,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[16]),32);
    bufp->fullIData(oldp+579,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[17]),32);
    bufp->fullIData(oldp+580,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[18]),32);
    bufp->fullIData(oldp+581,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[19]),32);
    bufp->fullIData(oldp+582,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[20]),32);
    bufp->fullIData(oldp+583,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[21]),32);
    bufp->fullIData(oldp+584,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[22]),32);
    bufp->fullIData(oldp+585,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[23]),32);
    bufp->fullIData(oldp+586,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[24]),32);
    bufp->fullIData(oldp+587,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[25]),32);
    bufp->fullIData(oldp+588,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[26]),32);
    bufp->fullIData(oldp+589,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[27]),32);
    bufp->fullIData(oldp+590,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[28]),32);
    bufp->fullIData(oldp+591,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[29]),32);
    bufp->fullIData(oldp+592,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[30]),32);
    bufp->fullIData(oldp+593,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[31]),32);
    bufp->fullIData(oldp+594,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+595,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+596,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+597,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+598,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+599,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+600,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+601,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+602,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+603,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+604,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+605,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+606,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+607,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+608,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+609,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+610,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+611,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+612,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+613,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+614,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+615,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+616,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+617,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+618,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+619,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+620,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+621,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+622,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+623,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+624,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+625,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullCData(oldp+626,(vlSelf->top__DOT__u_WBU__DOT__fake_csr_write),6);
    bufp->fullCData(oldp+627,(vlSelf->top__DOT__u_WBU__DOT__read_state),2);
    bufp->fullCData(oldp+628,(vlSelf->top__DOT__u_WBU__DOT__write_state),2);
    bufp->fullCData(oldp+629,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out),6);
    bufp->fullBit(oldp+630,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+631,(vlSelf->rst));
    bufp->fullBit(oldp+632,(vlSelf->clk));
    bufp->fullIData(oldp+633,(vlSelf->outpc),32);
    bufp->fullIData(oldp+634,(vlSelf->out_dnpc),32);
    bufp->fullIData(oldp+635,(vlSelf->out_snpc),32);
    bufp->fullIData(oldp+636,(vlSelf->ins),32);
    bufp->fullIData(oldp+637,(vlSelf->gpr[0]),32);
    bufp->fullIData(oldp+638,(vlSelf->gpr[1]),32);
    bufp->fullIData(oldp+639,(vlSelf->gpr[2]),32);
    bufp->fullIData(oldp+640,(vlSelf->gpr[3]),32);
    bufp->fullIData(oldp+641,(vlSelf->gpr[4]),32);
    bufp->fullIData(oldp+642,(vlSelf->gpr[5]),32);
    bufp->fullIData(oldp+643,(vlSelf->gpr[6]),32);
    bufp->fullIData(oldp+644,(vlSelf->gpr[7]),32);
    bufp->fullIData(oldp+645,(vlSelf->gpr[8]),32);
    bufp->fullIData(oldp+646,(vlSelf->gpr[9]),32);
    bufp->fullIData(oldp+647,(vlSelf->gpr[10]),32);
    bufp->fullIData(oldp+648,(vlSelf->gpr[11]),32);
    bufp->fullIData(oldp+649,(vlSelf->gpr[12]),32);
    bufp->fullIData(oldp+650,(vlSelf->gpr[13]),32);
    bufp->fullIData(oldp+651,(vlSelf->gpr[14]),32);
    bufp->fullIData(oldp+652,(vlSelf->gpr[15]),32);
    bufp->fullIData(oldp+653,(vlSelf->gpr[16]),32);
    bufp->fullIData(oldp+654,(vlSelf->gpr[17]),32);
    bufp->fullIData(oldp+655,(vlSelf->gpr[18]),32);
    bufp->fullIData(oldp+656,(vlSelf->gpr[19]),32);
    bufp->fullIData(oldp+657,(vlSelf->gpr[20]),32);
    bufp->fullIData(oldp+658,(vlSelf->gpr[21]),32);
    bufp->fullIData(oldp+659,(vlSelf->gpr[22]),32);
    bufp->fullIData(oldp+660,(vlSelf->gpr[23]),32);
    bufp->fullIData(oldp+661,(vlSelf->gpr[24]),32);
    bufp->fullIData(oldp+662,(vlSelf->gpr[25]),32);
    bufp->fullIData(oldp+663,(vlSelf->gpr[26]),32);
    bufp->fullIData(oldp+664,(vlSelf->gpr[27]),32);
    bufp->fullIData(oldp+665,(vlSelf->gpr[28]),32);
    bufp->fullIData(oldp+666,(vlSelf->gpr[29]),32);
    bufp->fullIData(oldp+667,(vlSelf->gpr[30]),32);
    bufp->fullIData(oldp+668,(vlSelf->gpr[31]),32);
    bufp->fullIData(oldp+669,(vlSelf->csr_reg[0]),32);
    bufp->fullIData(oldp+670,(vlSelf->csr_reg[1]),32);
    bufp->fullIData(oldp+671,(vlSelf->csr_reg[2]),32);
    bufp->fullIData(oldp+672,(vlSelf->csr_reg[3]),32);
    bufp->fullIData(oldp+673,(vlSelf->csr_reg[4]),32);
    bufp->fullIData(oldp+674,(vlSelf->csr_reg[5]),32);
    bufp->fullBit(oldp+675,(vlSelf->valid));
    bufp->fullBit(oldp+676,(vlSelf->ready));
    bufp->fullCData(oldp+677,((0x1fU & (vlSelf->ins 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+678,((0x1fU & (vlSelf->ins 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+679,((7U & (vlSelf->ins >> 0x14U))),3);
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
    bufp->fullWData(oldp+680,(__Vtemp_h34867a30__0),312);
    bufp->fullBit(oldp+690,(((3U == (0x7fU & vlSelf->ins)) 
                             | (0x23U == (0x7fU & vlSelf->ins)))));
    bufp->fullCData(oldp+691,((0x7fU & vlSelf->ins)),7);
    bufp->fullBit(oldp+692,(vlSelf->top__DOT__pc_write));
    bufp->fullBit(oldp+693,(1U));
    bufp->fullBit(oldp+694,(vlSelf->top__DOT__mem_valid));
    bufp->fullIData(oldp+695,(vlSelf->top__DOT__mem_raddr),32);
    bufp->fullIData(oldp+696,(vlSelf->top__DOT__mem_waddr),32);
    bufp->fullIData(oldp+697,(5U),32);
    bufp->fullIData(oldp+698,(3U),32);
    bufp->fullIData(oldp+699,(0x20U),32);
    bufp->fullIData(oldp+700,(0U),32);
    bufp->fullIData(oldp+701,(0U),32);
    bufp->fullIData(oldp+702,(0x23U),32);
    bufp->fullIData(oldp+703,(5U),32);
    bufp->fullIData(oldp+704,(4U),32);
    bufp->fullIData(oldp+705,(2U),32);
    bufp->fullIData(oldp+706,(8U),32);
    bufp->fullCData(oldp+707,(0U),8);
    bufp->fullIData(oldp+708,(0xaU),32);
    bufp->fullIData(oldp+709,(4U),32);
    bufp->fullIData(oldp+710,(0x10U),32);
    bufp->fullSData(oldp+711,(0U),16);
    bufp->fullIData(oldp+712,(0x12U),32);
    bufp->fullIData(oldp+713,(3U),32);
    bufp->fullIData(oldp+714,(6U),32);
    bufp->fullIData(oldp+715,(6U),32);
    bufp->fullIData(oldp+716,(2U),32);
    bufp->fullIData(oldp+717,(7U),32);
    bufp->fullIData(oldp+718,(0x27U),32);
    bufp->fullIData(oldp+719,(8U),32);
    bufp->fullQData(oldp+720,(0x481a0fULL),33);
    bufp->fullIData(oldp+722,(0xbU),32);
    bufp->fullBit(oldp+723,(0U));
    bufp->fullBit(oldp+724,(vlSelf->top__DOT__u_ARBITER__DOT__awvalid_temp));
    bufp->fullBit(oldp+725,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__write_flag));
    bufp->fullBit(oldp+726,(vlSelf->top__DOT__u_ARBITER__DOT__u_MEM__DOT__read_flag));
    bufp->fullQData(oldp+727,(0x51a8b574f9ULL),42);
    bufp->fullCData(oldp+729,(0U),4);
    bufp->fullIData(oldp+730,(1U),32);
    bufp->fullIData(oldp+731,(0x24U),32);
    bufp->fullIData(oldp+732,(0xbU),32);
    bufp->fullIData(oldp+733,(9U),32);
    __Vtemp_hd76f35b7__0[0U] = 0x91a2699aU;
    __Vtemp_hd76f35b7__0[1U] = 0x9ceb1a06U;
    __Vtemp_hd76f35b7__0[2U] = 0x1b82e77U;
    bufp->fullWData(oldp+734,(__Vtemp_hd76f35b7__0),90);
    bufp->fullCData(oldp+737,(0U),3);
    bufp->fullIData(oldp+738,(9U),32);
    __Vtemp_h97869814__0[0U] = 0x51926598U;
    __Vtemp_h97869814__0[1U] = 0x9ce71806U;
    __Vtemp_h97869814__0[2U] = 0x1b92e77U;
    bufp->fullWData(oldp+739,(__Vtemp_h97869814__0),90);
    bufp->fullQData(oldp+742,(0x242423222160ULL),54);
    bufp->fullCData(oldp+744,(0U),6);
}
