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
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBus(c+586,"outpc", false,-1, 31,0);
    tracep->declBus(c+587,"out_dnpc", false,-1, 31,0);
    tracep->declBus(c+588,"out_snpc", false,-1, 31,0);
    tracep->declBus(c+589,"ins", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+590+i*1,"gpr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+622+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+628,"valid", false,-1);
    tracep->declBit(c+629,"ready", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBus(c+586,"outpc", false,-1, 31,0);
    tracep->declBus(c+587,"out_dnpc", false,-1, 31,0);
    tracep->declBus(c+588,"out_snpc", false,-1, 31,0);
    tracep->declBus(c+589,"ins", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+590+i*1,"gpr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+622+i*1,"csr_reg", true,(i+0), 31,0);
    }
    tracep->declBit(c+628,"valid", false,-1);
    tracep->declBit(c+629,"ready", false,-1);
    tracep->declBus(c+587,"dnpc", false,-1, 31,0);
    tracep->declBus(c+588,"snpc", false,-1, 31,0);
    tracep->declBit(c+163,"idu_ready", false,-1);
    tracep->declBit(c+628,"ifu_valid", false,-1);
    tracep->declBus(c+164,"rs1", false,-1, 4,0);
    tracep->declBus(c+165,"rs2", false,-1, 4,0);
    tracep->declBus(c+166,"rd", false,-1, 4,0);
    tracep->declBus(c+167,"imm", false,-1, 31,0);
    tracep->declBus(c+168,"func7", false,-1, 6,0);
    tracep->declBus(c+169,"opcode", false,-1, 6,0);
    tracep->declBus(c+170,"func3", false,-1, 2,0);
    tracep->declBus(c+171,"select_oprand1", false,-1, 2,0);
    tracep->declBus(c+172,"select_oprand2", false,-1, 2,0);
    tracep->declBit(c+173,"reg_write", false,-1);
    tracep->declBit(c+174,"pc_write", false,-1);
    tracep->declBit(c+175,"mem_write", false,-1);
    tracep->declBit(c+176,"mem_read", false,-1);
    tracep->declBit(c+177,"is_csr", false,-1);
    tracep->declBus(c+178,"csr_waddr", false,-1, 2,0);
    tracep->declBit(c+179,"mem_access", false,-1);
    tracep->declBus(c+180,"reg_wdata", false,-1, 31,0);
    tracep->declBus(c+181,"reg_rdata1", false,-1, 31,0);
    tracep->declBus(c+182,"reg_rdata2", false,-1, 31,0);
    tracep->declBus(c+166,"reg_waddr", false,-1, 4,0);
    tracep->declBus(c+164,"reg_raddr1", false,-1, 4,0);
    tracep->declBus(c+165,"reg_raddr2", false,-1, 4,0);
    tracep->declBit(c+641,"reg_ren1", false,-1);
    tracep->declBit(c+641,"reg_ren2", false,-1);
    tracep->declBus(c+183,"oprand1", false,-1, 31,0);
    tracep->declBus(c+184,"oprand2", false,-1, 31,0);
    tracep->declBus(c+185,"exu_res", false,-1, 31,0);
    tracep->declBit(c+642,"mem_valid", false,-1);
    tracep->declBus(c+170,"mem_readop", false,-1, 2,0);
    tracep->declBus(c+185,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+186,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+182,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+185,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+187,"mem_wmask", false,-1, 7,0);
    tracep->declBus(c+188,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+189,"fake_csr_wdata", false,-1, 31,0);
    tracep->declBit(c+190,"branch_flag", false,-1);
    tracep->declBit(c+191,"jump_flag", false,-1);
    tracep->declBit(c+192,"is_mret", false,-1);
    tracep->declBit(c+193,"is_ecall", false,-1);
    tracep->declBit(c+194,"mem_finish", false,-1);
    tracep->declBus(c+195,"csr_write", false,-1, 5,0);
    tracep->declBus(c+189,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+630,"csr_wdata1", false,-1, 31,0);
    tracep->declBus(c+196,"csr_wdata2", false,-1, 31,0);
    tracep->declBus(c+189,"csr_wdata3", false,-1, 31,0);
    tracep->declBus(c+189,"csr_wdata4", false,-1, 31,0);
    tracep->declBus(c+189,"csr_wdata5", false,-1, 31,0);
    tracep->declBus(c+197,"csr_rdata0", false,-1, 31,0);
    tracep->declBus(c+198,"csr_rdata1", false,-1, 31,0);
    tracep->declBus(c+199,"csr_rdata2", false,-1, 31,0);
    tracep->declBus(c+200,"csr_rdata3", false,-1, 31,0);
    tracep->declBus(c+201,"csr_rdata4", false,-1, 31,0);
    tracep->declBus(c+202,"csr_rdata5", false,-1, 31,0);
    tracep->declBus(c+203,"csr_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("get_csr_rdata ");
    tracep->declBus(c+643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+203,"out", false,-1, 31,0);
    tracep->declBus(c+204,"key", false,-1, 2,0);
    tracep->declArray(c+205,"lut", false,-1, 209,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+203,"out", false,-1, 31,0);
    tracep->declBus(c+204,"key", false,-1, 2,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+205,"lut", false,-1, 209,0);
    tracep->declBus(c+648,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+212+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+224+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+230,"lut_out", false,-1, 31,0);
    tracep->declBit(c+231,"hit", false,-1);
    tracep->declBus(c+649,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_fake_csr_wdata ");
    tracep->declBus(c+650,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declArray(c+232,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+650,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+189,"out", false,-1, 31,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+232,"lut", false,-1, 69,0);
    tracep->declBus(c+648,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+235+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+239+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+241,"lut_out", false,-1, 31,0);
    tracep->declBit(c+242,"hit", false,-1);
    tracep->declBus(c+651,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_oprand1 ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+183,"out", false,-1, 31,0);
    tracep->declBus(c+171,"key", false,-1, 2,0);
    tracep->declArray(c+243,"lut", false,-1, 104,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+183,"out", false,-1, 31,0);
    tracep->declBus(c+171,"key", false,-1, 2,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+243,"lut", false,-1, 104,0);
    tracep->declBus(c+648,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+247+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+9+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+253+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+256,"lut_out", false,-1, 31,0);
    tracep->declBit(c+257,"hit", false,-1);
    tracep->declBus(c+652,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_oprand2 ");
    tracep->declBus(c+650,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+184,"out", false,-1, 31,0);
    tracep->declBus(c+172,"key", false,-1, 2,0);
    tracep->declArray(c+258,"lut", false,-1, 69,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+650,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+184,"out", false,-1, 31,0);
    tracep->declBus(c+172,"key", false,-1, 2,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+258,"lut", false,-1, 69,0);
    tracep->declBus(c+648,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+261+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+12+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+265+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+267,"lut_out", false,-1, 31,0);
    tracep->declBit(c+268,"hit", false,-1);
    tracep->declBus(c+651,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_reg_wdata ");
    tracep->declBus(c+653,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+180,"out", false,-1, 31,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declArray(c+631,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+653,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+180,"out", false,-1, 31,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+631,"lut", false,-1, 311,0);
    tracep->declBus(c+655,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+269+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+14+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+285+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+293,"lut_out", false,-1, 31,0);
    tracep->declBit(c+294,"hit", false,-1);
    tracep->declBus(c+656,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_wmask ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+653,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+187,"out", false,-1, 7,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declQuad(c+657,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+653,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+187,"out", false,-1, 7,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declBus(c+659,"default_out", false,-1, 7,0);
    tracep->declQuad(c+657,"lut", false,-1, 32,0);
    tracep->declBus(c+660,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+22+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+25+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+28+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+295,"lut_out", false,-1, 7,0);
    tracep->declBit(c+296,"hit", false,-1);
    tracep->declBus(c+652,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_CSR ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBus(c+189,"wdata0", false,-1, 31,0);
    tracep->declBus(c+630,"wdata1", false,-1, 31,0);
    tracep->declBus(c+196,"wdata2", false,-1, 31,0);
    tracep->declBus(c+189,"wdata3", false,-1, 31,0);
    tracep->declBus(c+189,"wdata4", false,-1, 31,0);
    tracep->declBus(c+189,"wdata5", false,-1, 31,0);
    tracep->declBus(c+195,"wen", false,-1, 5,0);
    tracep->declBus(c+197,"rdata0", false,-1, 31,0);
    tracep->declBus(c+198,"rdata1", false,-1, 31,0);
    tracep->declBus(c+199,"rdata2", false,-1, 31,0);
    tracep->declBus(c+200,"rdata3", false,-1, 31,0);
    tracep->declBus(c+201,"rdata4", false,-1, 31,0);
    tracep->declBus(c+202,"rdata5", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+297+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_DNPC ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBit(c+191,"jump_flag", false,-1);
    tracep->declBit(c+190,"branch_flag", false,-1);
    tracep->declBit(c+192,"is_mret", false,-1);
    tracep->declBit(c+193,"is_ecall", false,-1);
    tracep->declBus(c+188,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+185,"exu_res", false,-1, 31,0);
    tracep->declBus(c+588,"snpc", false,-1, 31,0);
    tracep->declBus(c+202,"mtvec", false,-1, 31,0);
    tracep->declBus(c+198,"mepc", false,-1, 31,0);
    tracep->declBus(c+587,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_EXU ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBus(c+183,"oprand1", false,-1, 31,0);
    tracep->declBus(c+184,"oprand2", false,-1, 31,0);
    tracep->declBus(c+170,"func3", false,-1, 2,0);
    tracep->declBus(c+168,"func7", false,-1, 6,0);
    tracep->declBus(c+169,"opcode", false,-1, 6,0);
    tracep->declBus(c+185,"res", false,-1, 31,0);
    tracep->declBus(c+303,"aluop", false,-1, 3,0);
    tracep->declBus(c+304,"B_aluop", false,-1, 3,0);
    tracep->declBus(c+305,"IR_aluop", false,-1, 3,0);
    tracep->declBus(c+306,"alu_res", false,-1, 31,0);
    tracep->declBit(c+307,"neg", false,-1);
    tracep->declBit(c+308,"wen", false,-1);
    tracep->pushNamePrefix("get_B_aluop ");
    tracep->declBus(c+643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+661,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+304,"out", false,-1, 3,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declQuad(c+662,"lut", false,-1, 41,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+661,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+304,"out", false,-1, 3,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declBus(c+664,"default_out", false,-1, 3,0);
    tracep->declQuad(c+662,"lut", false,-1, 41,0);
    tracep->declBus(c+654,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+31+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+37+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+43+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+309,"lut_out", false,-1, 3,0);
    tracep->declBit(c+310,"hit", false,-1);
    tracep->declBus(c+649,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_IR_aluop ");
    tracep->declBus(c+653,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+661,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+305,"out", false,-1, 3,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declQuad(c+311,"lut", false,-1, 55,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+653,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+661,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+305,"out", false,-1, 3,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declBus(c+664,"default_out", false,-1, 3,0);
    tracep->declQuad(c+311,"lut", false,-1, 55,0);
    tracep->declBus(c+654,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+313+i*1,"pair_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+49+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+321+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+329,"lut_out", false,-1, 3,0);
    tracep->declBit(c+330,"hit", false,-1);
    tracep->declBus(c+656,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_aluop ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+661,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+303,"out", false,-1, 3,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declBus(c+664,"default_out", false,-1, 3,0);
    tracep->declQuad(c+331,"lut", false,-1, 32,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+661,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+665,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+303,"out", false,-1, 3,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declBus(c+664,"default_out", false,-1, 3,0);
    tracep->declQuad(c+331,"lut", false,-1, 32,0);
    tracep->declBus(c+660,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+333+i*1,"pair_list", true,(i+0), 10,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+57+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+336+i*1,"data_list", true,(i+0), 3,0);
    }
    tracep->declBus(c+339,"lut_out", false,-1, 3,0);
    tracep->declBit(c+340,"hit", false,-1);
    tracep->declBus(c+652,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ALU ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBus(c+303,"aluop", false,-1, 3,0);
    tracep->declBus(c+183,"num1", false,-1, 31,0);
    tracep->declBus(c+184,"num2", false,-1, 31,0);
    tracep->declBus(c+306,"res", false,-1, 31,0);
    tracep->declBus(c+341,"res_sub", false,-1, 31,0);
    tracep->declBus(c+342,"res_add", false,-1, 31,0);
    tracep->declBus(c+343,"res_xor", false,-1, 31,0);
    tracep->declBus(c+344,"res_or", false,-1, 31,0);
    tracep->declBus(c+345,"res_and", false,-1, 31,0);
    tracep->declBus(c+346,"res_lower_signed", false,-1, 31,0);
    tracep->declBus(c+347,"res_lower_unsigned", false,-1, 31,0);
    tracep->declBus(c+348,"res_left", false,-1, 31,0);
    tracep->declBus(c+349,"res_right_unsigned", false,-1, 31,0);
    tracep->declBus(c+350,"res_right_signed", false,-1, 31,0);
    tracep->declBus(c+351,"res_eq", false,-1, 31,0);
    tracep->declBus(c+183,"signed_num1", false,-1, 31,0);
    tracep->declBus(c+184,"signed_num2", false,-1, 31,0);
    tracep->pushNamePrefix("get_res ");
    tracep->declBus(c+660,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+661,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+306,"out", false,-1, 31,0);
    tracep->declBus(c+303,"key", false,-1, 3,0);
    tracep->declArray(c+352,"lut", false,-1, 395,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+660,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+661,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+306,"out", false,-1, 31,0);
    tracep->declBus(c+303,"key", false,-1, 3,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+352,"lut", false,-1, 395,0);
    tracep->declBus(c+666,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 11; ++i) {
        tracep->declQuad(c+365+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+60+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+387+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+398,"lut_out", false,-1, 31,0);
    tracep->declBit(c+399,"hit", false,-1);
    tracep->declBus(c+667,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_IDU ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBus(c+589,"real_ins", false,-1, 31,0);
    tracep->declBit(c+628,"ifu_valid", false,-1);
    tracep->declBit(c+194,"mem_finish", false,-1);
    tracep->declBus(c+164,"rs1", false,-1, 4,0);
    tracep->declBus(c+165,"rs2", false,-1, 4,0);
    tracep->declBus(c+166,"rd", false,-1, 4,0);
    tracep->declBus(c+167,"imm", false,-1, 31,0);
    tracep->declBus(c+168,"func7", false,-1, 6,0);
    tracep->declBus(c+169,"opcode", false,-1, 6,0);
    tracep->declBus(c+170,"func3", false,-1, 2,0);
    tracep->declBus(c+171,"select_oprand1", false,-1, 2,0);
    tracep->declBus(c+172,"select_oprand2", false,-1, 2,0);
    tracep->declBit(c+173,"reg_write", false,-1);
    tracep->declBit(c+174,"pc_write", false,-1);
    tracep->declBit(c+176,"mem_read", false,-1);
    tracep->declBit(c+175,"mem_write", false,-1);
    tracep->declBit(c+179,"mem_access", false,-1);
    tracep->declBit(c+193,"is_ecall", false,-1);
    tracep->declBit(c+192,"is_mret", false,-1);
    tracep->declBit(c+177,"is_csr", false,-1);
    tracep->declBit(c+163,"idu_ready", false,-1);
    tracep->declBus(c+178,"csr_waddr", false,-1, 2,0);
    tracep->declBus(c+400,"ins", false,-1, 31,0);
    tracep->declBus(c+401,"immI", false,-1, 31,0);
    tracep->declBus(c+402,"immU", false,-1, 31,0);
    tracep->declBus(c+403,"immB", false,-1, 31,0);
    tracep->declBus(c+404,"immS", false,-1, 31,0);
    tracep->declBus(c+405,"immJ", false,-1, 31,0);
    tracep->pushNamePrefix("get_select_oprand1 ");
    tracep->declBus(c+668,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+644,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 2,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declArray(c+669,"lut", false,-1, 89,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+668,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+644,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+171,"out", false,-1, 2,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declBus(c+672,"default_out", false,-1, 2,0);
    tracep->declArray(c+669,"lut", false,-1, 89,0);
    tracep->declBus(c+673,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+71+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+80+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+89+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+406,"lut_out", false,-1, 2,0);
    tracep->declBit(c+407,"hit", false,-1);
    tracep->declBus(c+674,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_select_oprand2 ");
    tracep->declBus(c+668,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+644,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+172,"out", false,-1, 2,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declArray(c+675,"lut", false,-1, 89,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+668,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+644,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+172,"out", false,-1, 2,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declBus(c+672,"default_out", false,-1, 2,0);
    tracep->declArray(c+675,"lut", false,-1, 89,0);
    tracep->declBus(c+673,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+98+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+107+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+116+i*1,"data_list", true,(i+0), 2,0);
    }
    tracep->declBus(c+408,"lut_out", false,-1, 2,0);
    tracep->declBit(c+409,"hit", false,-1);
    tracep->declBus(c+674,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_MuxKey ");
    tracep->declBus(c+653,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+167,"out", false,-1, 31,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declArray(c+410,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+653,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+654,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+167,"out", false,-1, 31,0);
    tracep->declBus(c+169,"key", false,-1, 6,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+410,"lut", false,-1, 311,0);
    tracep->declBus(c+655,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+420+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+125+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+436+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+444,"lut_out", false,-1, 31,0);
    tracep->declBit(c+445,"hit", false,-1);
    tracep->declBus(c+656,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_IFU ");
    tracep->declBus(c+645,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBus(c+587,"in", false,-1, 31,0);
    tracep->declBit(c+163,"ready", false,-1);
    tracep->declBus(c+586,"out", false,-1, 31,0);
    tracep->declBus(c+589,"ins", false,-1, 31,0);
    tracep->declBit(c+628,"valid", false,-1);
    tracep->declBus(c+446,"pc", false,-1, 31,0);
    tracep->declBus(c+678,"ins_reg", false,-1, 31,0);
    tracep->declBus(c+679,"ins_temp", false,-1, 31,0);
    tracep->declBus(c+447,"araddr", false,-1, 31,0);
    tracep->declBit(c+448,"arvalid", false,-1);
    tracep->declBit(c+449,"arready", false,-1);
    tracep->declBus(c+450,"rdata", false,-1, 31,0);
    tracep->declBit(c+451,"rvalid", false,-1);
    tracep->declBit(c+452,"rready", false,-1);
    tracep->declBus(c+453,"rresp", false,-1, 1,0);
    tracep->pushNamePrefix("u_INS_MEM ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBit(c+584,"rst", false,-1);
    tracep->declBus(c+447,"araddr", false,-1, 31,0);
    tracep->declBit(c+448,"arvalid", false,-1);
    tracep->declBit(c+449,"arready", false,-1);
    tracep->declBus(c+450,"rdata", false,-1, 31,0);
    tracep->declBit(c+451,"rvalid", false,-1);
    tracep->declBus(c+453,"rresp", false,-1, 1,0);
    tracep->declBit(c+452,"rready", false,-1);
    tracep->declBus(c+646,"awaddr", false,-1, 31,0);
    tracep->declBit(c+680,"awvalid", false,-1);
    tracep->declBit(c+454,"awready", false,-1);
    tracep->declBus(c+646,"wdata", false,-1, 31,0);
    tracep->declBus(c+659,"wstrb", false,-1, 7,0);
    tracep->declBit(c+680,"wvalid", false,-1);
    tracep->declBit(c+455,"wready", false,-1);
    tracep->declBus(c+456,"bresp", false,-1, 1,0);
    tracep->declBit(c+457,"bvalid", false,-1);
    tracep->declBit(c+680,"bready", false,-1);
    tracep->declBus(c+458,"awaddr_reg", false,-1, 31,0);
    tracep->declBus(c+459,"wdata_reg", false,-1, 31,0);
    tracep->declBus(c+460,"araddr_reg", false,-1, 31,0);
    tracep->declBus(c+681,"rdata_temp", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_RegisterFile ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBus(c+180,"wdata", false,-1, 31,0);
    tracep->declBus(c+166,"waddr", false,-1, 4,0);
    tracep->declBus(c+164,"raddr1", false,-1, 4,0);
    tracep->declBus(c+165,"raddr2", false,-1, 4,0);
    tracep->declBit(c+173,"wen", false,-1);
    tracep->declBit(c+641,"ren1", false,-1);
    tracep->declBit(c+641,"ren2", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+461+i*1,"data", true,(i+0), 31,0);
    }
    tracep->declBus(c+181,"rdata1", false,-1, 31,0);
    tracep->declBus(c+182,"rdata2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+493+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_WBU ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBus(c+169,"opcode", false,-1, 6,0);
    tracep->declBus(c+185,"exu_res", false,-1, 31,0);
    tracep->declBus(c+167,"imm", false,-1, 31,0);
    tracep->declBus(c+586,"outpc", false,-1, 31,0);
    tracep->declBus(c+189,"fake_csr_wdata", false,-1, 31,0);
    tracep->declBit(c+193,"is_ecall", false,-1);
    tracep->declBit(c+179,"mem_access", false,-1);
    tracep->declBit(c+192,"is_mret", false,-1);
    tracep->declBit(c+177,"is_csr", false,-1);
    tracep->declBus(c+178,"csr_waddr", false,-1, 2,0);
    tracep->declBus(c+185,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+188,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+185,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+182,"mem_wdata", false,-1, 31,0);
    tracep->declBit(c+191,"jump_flag", false,-1);
    tracep->declBit(c+190,"branch_flag", false,-1);
    tracep->declBit(c+194,"mem_finish", false,-1);
    tracep->declBus(c+189,"csr_wdata0", false,-1, 31,0);
    tracep->declBus(c+630,"csr_wdata1", false,-1, 31,0);
    tracep->declBus(c+196,"csr_wdata2", false,-1, 31,0);
    tracep->declBus(c+189,"csr_wdata3", false,-1, 31,0);
    tracep->declBus(c+189,"csr_wdata4", false,-1, 31,0);
    tracep->declBus(c+189,"csr_wdata5", false,-1, 31,0);
    tracep->declBus(c+195,"csr_write", false,-1, 5,0);
    tracep->declBus(c+525,"fake_csr_write", false,-1, 5,0);
    tracep->pushNamePrefix("get_fake_csr_write ");
    tracep->declBus(c+643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+643,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+525,"out", false,-1, 5,0);
    tracep->declBus(c+178,"key", false,-1, 2,0);
    tracep->declQuad(c+682,"lut", false,-1, 53,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+643,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+643,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+525,"out", false,-1, 5,0);
    tracep->declBus(c+178,"key", false,-1, 2,0);
    tracep->declBus(c+684,"default_out", false,-1, 5,0);
    tracep->declQuad(c+682,"lut", false,-1, 53,0);
    tracep->declBus(c+668,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+133+i*1,"pair_list", true,(i+0), 8,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+139+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+145+i*1,"data_list", true,(i+0), 5,0);
    }
    tracep->declBus(c+526,"lut_out", false,-1, 5,0);
    tracep->declBit(c+527,"hit", false,-1);
    tracep->declBus(c+649,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_mem ");
    tracep->declBit(c+585,"clk", false,-1);
    tracep->declBit(c+176,"read", false,-1);
    tracep->declBit(c+175,"wen", false,-1);
    tracep->declBit(c+179,"mem_access", false,-1);
    tracep->declBus(c+170,"readop", false,-1, 2,0);
    tracep->declBus(c+187,"wmask", false,-1, 7,0);
    tracep->declBus(c+185,"raddr", false,-1, 31,0);
    tracep->declBus(c+185,"waddr", false,-1, 31,0);
    tracep->declBus(c+182,"wdata", false,-1, 31,0);
    tracep->declBus(c+186,"rdata", false,-1, 31,0);
    tracep->declBus(c+528,"pos", false,-1, 1,0);
    tracep->declBus(c+529,"rdata_w", false,-1, 31,0);
    tracep->declBus(c+530,"rdata_b", false,-1, 7,0);
    tracep->declBus(c+531,"rdata_h", false,-1, 15,0);
    tracep->declBit(c+532,"delay_read", false,-1);
    tracep->declBit(c+533,"delay_write", false,-1);
    tracep->declBus(c+534,"delay_waddr", false,-1, 31,0);
    tracep->declBus(c+535,"delay_wdata", false,-1, 31,0);
    tracep->declBus(c+536,"delay_raddr", false,-1, 31,0);
    tracep->declBus(c+537,"delay_rdata", false,-1, 31,0);
    tracep->declBus(c+538,"delay_wmask", false,-1, 7,0);
    tracep->pushNamePrefix("get_rdata ");
    tracep->declBus(c+685,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+186,"out", false,-1, 31,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declArray(c+539,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+685,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+644,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+645,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+186,"out", false,-1, 31,0);
    tracep->declBus(c+170,"key", false,-1, 2,0);
    tracep->declBus(c+647,"default_out", false,-1, 31,0);
    tracep->declArray(c+539,"lut", false,-1, 174,0);
    tracep->declBus(c+648,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+545+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+151+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+555+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+560,"lut_out", false,-1, 31,0);
    tracep->declBit(c+561,"hit", false,-1);
    tracep->declBus(c+686,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_rdata_b ");
    tracep->declBus(c+661,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+650,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+653,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+530,"out", false,-1, 7,0);
    tracep->declBus(c+528,"key", false,-1, 1,0);
    tracep->declQuad(c+562,"lut", false,-1, 39,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+661,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+650,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+653,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+530,"out", false,-1, 7,0);
    tracep->declBus(c+528,"key", false,-1, 1,0);
    tracep->declBus(c+659,"default_out", false,-1, 7,0);
    tracep->declQuad(c+562,"lut", false,-1, 39,0);
    tracep->declBus(c+673,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+564+i*1,"pair_list", true,(i+0), 9,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+156+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+568+i*1,"data_list", true,(i+0), 7,0);
    }
    tracep->declBus(c+572,"lut_out", false,-1, 7,0);
    tracep->declBit(c+573,"hit", false,-1);
    tracep->declBus(c+687,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("get_rdata_h ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+650,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+688,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+531,"out", false,-1, 15,0);
    tracep->declBus(c+528,"key", false,-1, 1,0);
    tracep->declQuad(c+574,"lut", false,-1, 53,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+644,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+650,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+688,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+646,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+531,"out", false,-1, 15,0);
    tracep->declBus(c+528,"key", false,-1, 1,0);
    tracep->declBus(c+689,"default_out", false,-1, 15,0);
    tracep->declQuad(c+574,"lut", false,-1, 53,0);
    tracep->declBus(c+690,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+576+i*1,"pair_list", true,(i+0), 17,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+160+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+579+i*1,"data_list", true,(i+0), 15,0);
    }
    tracep->declBus(c+582,"lut_out", false,-1, 15,0);
    tracep->declBit(c+583,"hit", false,-1);
    tracep->declBus(c+652,"i", false,-1, 31,0);
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
    VlWide<7>/*223:0*/ __Vtemp_h81eb4d05__0;
    VlWide<3>/*95:0*/ __Vtemp_h98da5384__0;
    VlWide<4>/*127:0*/ __Vtemp_h20b531de__0;
    VlWide<3>/*95:0*/ __Vtemp_hf743ae85__0;
    VlWide<13>/*415:0*/ __Vtemp_h74205673__0;
    VlWide<10>/*319:0*/ __Vtemp_h95013dd8__0;
    VlWide<6>/*191:0*/ __Vtemp_habeb126f__0;
    VlWide<10>/*319:0*/ __Vtemp_h63de71c0__0;
    VlWide<3>/*95:0*/ __Vtemp_hd76f35b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h97869814__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__key_list[7]),7);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[6]),3);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__key_list[7]),3);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__key_list[10]),4);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+73,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+75,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+76,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+77,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+78,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+79,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__pair_list[8]),10);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__data_list[8]),3);
    bufp->fullSData(oldp+98,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+99,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+100,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+101,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullSData(oldp+102,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[4]),10);
    bufp->fullSData(oldp+103,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[5]),10);
    bufp->fullSData(oldp+104,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[6]),10);
    bufp->fullSData(oldp+105,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[7]),10);
    bufp->fullSData(oldp+106,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__pair_list[8]),10);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[7]),7);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__key_list[8]),7);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[0]),3);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[1]),3);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[2]),3);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[3]),3);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[4]),3);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[5]),3);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[6]),3);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[7]),3);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__data_list[8]),3);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__key_list[7]),7);
    bufp->fullSData(oldp+133,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+134,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+135,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+136,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+137,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+138,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__key_list[5]),3);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[0]),6);
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[1]),6);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[2]),6);
    bufp->fullCData(oldp+148,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[3]),6);
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[4]),6);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__data_list[5]),6);
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+152,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__idu_ready));
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__rs1),5);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__rs2),5);
    bufp->fullCData(oldp+166,(vlSelf->top__DOT__rd),5);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__imm),32);
    bufp->fullCData(oldp+168,(vlSelf->top__DOT__func7),7);
    bufp->fullCData(oldp+169,(vlSelf->top__DOT__opcode),7);
    bufp->fullCData(oldp+170,(vlSelf->top__DOT__func3),3);
    bufp->fullCData(oldp+171,(vlSelf->top__DOT__select_oprand1),3);
    bufp->fullCData(oldp+172,(vlSelf->top__DOT__select_oprand2),3);
    bufp->fullBit(oldp+173,(((0x37U == (IData)(vlSelf->top__DOT__opcode)) 
                             | ((0x17U == (IData)(vlSelf->top__DOT__opcode)) 
                                | ((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                                   | ((0x67U == (IData)(vlSelf->top__DOT__opcode)) 
                                      | ((3U == (IData)(vlSelf->top__DOT__opcode)) 
                                         | ((0x13U 
                                             == (IData)(vlSelf->top__DOT__opcode)) 
                                            | ((0x33U 
                                                == (IData)(vlSelf->top__DOT__opcode)) 
                                               | (IData)(vlSelf->top__DOT__is_csr))))))))));
    bufp->fullBit(oldp+174,(((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                             | ((0x67U == (IData)(vlSelf->top__DOT__opcode)) 
                                | (0x63U == (IData)(vlSelf->top__DOT__opcode))))));
    bufp->fullBit(oldp+175,((0x23U == (IData)(vlSelf->top__DOT__opcode))));
    bufp->fullBit(oldp+176,((3U == (IData)(vlSelf->top__DOT__opcode))));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__is_csr));
    bufp->fullCData(oldp+178,(vlSelf->top__DOT__csr_waddr),3);
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__mem_access));
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__reg_wdata),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__reg_rdata1),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__reg_rdata2),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__oprand1),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__oprand2),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__exu_res),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__mem_rdata),32);
    bufp->fullCData(oldp+187,(vlSelf->top__DOT__mem_wmask),8);
    bufp->fullIData(oldp+188,((vlSelf->top__DOT__imm 
                               + vlSelf->top__DOT__u_IFU__DOT__pc)),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__fake_csr_wdata),32);
    bufp->fullBit(oldp+190,(((0x63U == (IData)(vlSelf->top__DOT__opcode)) 
                             & vlSelf->top__DOT__exu_res)));
    bufp->fullBit(oldp+191,(((0x6fU == (IData)(vlSelf->top__DOT__opcode)) 
                             | (0x67U == (IData)(vlSelf->top__DOT__opcode)))));
    bufp->fullBit(oldp+192,((0x30200073U == vlSelf->top__DOT__u_IDU__DOT__ins)));
    bufp->fullBit(oldp+193,((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__mem_finish));
    bufp->fullCData(oldp+195,(vlSelf->top__DOT__csr_write),6);
    bufp->fullIData(oldp+196,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                ? 1U : vlSelf->top__DOT__fake_csr_wdata)),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [0U]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [1U]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [2U]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [3U]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [4U]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__u_CSR__DOT__rf
                              [5U]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__csr_rdata),32);
    bufp->fullCData(oldp+204,((7U & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                     >> 0x14U))),3);
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
    bufp->fullWData(oldp+205,(__Vtemp_h81eb4d05__0),210);
    bufp->fullQData(oldp+212,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+214,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+216,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+218,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+220,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullQData(oldp+222,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__pair_list[5]),35);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__get_csr_rdata__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+232,(__Vtemp_h98da5384__0),70);
    bufp->fullQData(oldp+235,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+237,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__get_fake_csr_wdata__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+243,(__Vtemp_h20b531de__0),105);
    bufp->fullQData(oldp+247,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+249,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+251,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__get_oprand1__DOT__i0__DOT__hit));
    __Vtemp_hf743ae85__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__imm))));
    __Vtemp_hf743ae85__0[1U] = ((vlSelf->top__DOT__reg_rdata2 
                                 << 3U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_hf743ae85__0[2U] = (vlSelf->top__DOT__reg_rdata2 
                                >> 0x1dU);
    bufp->fullWData(oldp+258,(__Vtemp_hf743ae85__0),70);
    bufp->fullQData(oldp+261,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+263,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+268,(vlSelf->top__DOT__get_oprand2__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+269,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+271,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+273,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+275,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+277,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+279,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+281,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+283,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+291,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+292,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+294,(vlSelf->top__DOT__get_reg_wdata__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+295,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+296,(vlSelf->top__DOT__get_wmask__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+297,(vlSelf->top__DOT__u_CSR__DOT__rf[0]),32);
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__u_CSR__DOT__rf[1]),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__u_CSR__DOT__rf[2]),32);
    bufp->fullIData(oldp+300,(vlSelf->top__DOT__u_CSR__DOT__rf[3]),32);
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__u_CSR__DOT__rf[4]),32);
    bufp->fullIData(oldp+302,(vlSelf->top__DOT__u_CSR__DOT__rf[5]),32);
    bufp->fullCData(oldp+303,(vlSelf->top__DOT__u_EXU__DOT__aluop),4);
    bufp->fullCData(oldp+304,(vlSelf->top__DOT__u_EXU__DOT__B_aluop),4);
    bufp->fullCData(oldp+305,(vlSelf->top__DOT__u_EXU__DOT__IR_aluop),4);
    bufp->fullIData(oldp+306,(vlSelf->top__DOT__u_EXU__DOT__alu_res),32);
    bufp->fullBit(oldp+307,(vlSelf->top__DOT__u_EXU__DOT__neg));
    bufp->fullBit(oldp+308,(((0x37U == (IData)(vlSelf->top__DOT__opcode)) 
                             | (0x17U == (IData)(vlSelf->top__DOT__opcode)))));
    bufp->fullCData(oldp+309,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+310,(vlSelf->top__DOT__u_EXU__DOT__get_B_aluop__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+311,((0x592b98540000ULL | 
                               (((QData)((IData)(((
                                                   (0x33U 
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
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[0]),7);
    bufp->fullCData(oldp+314,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[1]),7);
    bufp->fullCData(oldp+315,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[2]),7);
    bufp->fullCData(oldp+316,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[3]),7);
    bufp->fullCData(oldp+317,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[4]),7);
    bufp->fullCData(oldp+318,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[5]),7);
    bufp->fullCData(oldp+319,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[6]),7);
    bufp->fullCData(oldp+320,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__pair_list[7]),7);
    bufp->fullCData(oldp+321,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+322,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+323,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+324,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+325,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+326,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+327,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+328,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__data_list[7]),4);
    bufp->fullCData(oldp+329,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+330,(vlSelf->top__DOT__u_EXU__DOT__get_IR_aluop__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+331,((0x18c000000ULL | (QData)((IData)(
                                                                (0x98330U 
                                                                 | (((IData)(vlSelf->top__DOT__u_EXU__DOT__B_aluop) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop) 
                                                                        << 0xbU) 
                                                                       | (IData)(vlSelf->top__DOT__u_EXU__DOT__IR_aluop)))))))),33);
    bufp->fullSData(oldp+333,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+334,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+335,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullCData(oldp+336,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+337,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+338,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+339,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+340,(vlSelf->top__DOT__u_EXU__DOT__get_aluop__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+341,((vlSelf->top__DOT__oprand1 
                               - vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+342,((vlSelf->top__DOT__oprand1 
                               + vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+343,((vlSelf->top__DOT__oprand1 
                               ^ vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+344,((vlSelf->top__DOT__oprand1 
                               | vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+345,((vlSelf->top__DOT__oprand1 
                               & vlSelf->top__DOT__oprand2)),32);
    bufp->fullIData(oldp+346,((VL_LTS_III(32, vlSelf->top__DOT__oprand1, vlSelf->top__DOT__oprand2)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+347,(((vlSelf->top__DOT__oprand1 
                                < vlSelf->top__DOT__oprand2)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+348,(((0x1fU >= vlSelf->top__DOT__oprand2)
                                ? (vlSelf->top__DOT__oprand1 
                                   << vlSelf->top__DOT__oprand2)
                                : 0U)),32);
    bufp->fullIData(oldp+349,((vlSelf->top__DOT__oprand1 
                               >> (0x1fU & vlSelf->top__DOT__oprand2))),32);
    bufp->fullIData(oldp+350,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                             (0x1fU 
                                              & vlSelf->top__DOT__oprand2))),32);
    bufp->fullIData(oldp+351,(((vlSelf->top__DOT__oprand1 
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
                                          << 8U) | 
                                         (((vlSelf->top__DOT__oprand1 
                                            < vlSelf->top__DOT__oprand2)
                                            ? 1U : 0U) 
                                          >> 0x1cU)));
    __Vtemp_h74205673__0[3U] = (0x800U | (((vlSelf->top__DOT__oprand1 
                                            >> (0x1fU 
                                                & vlSelf->top__DOT__oprand2)) 
                                           << 0xcU) 
                                          | (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__oprand1, 
                                                            (0x1fU 
                                                             & vlSelf->top__DOT__oprand2)) 
                                             >> 0x18U)));
    __Vtemp_h74205673__0[4U] = (0x7000U | ((((0x1fU 
                                              >= vlSelf->top__DOT__oprand2)
                                              ? (vlSelf->top__DOT__oprand1 
                                                 << vlSelf->top__DOT__oprand2)
                                              : 0U) 
                                            << 0x10U) 
                                           | ((vlSelf->top__DOT__oprand1 
                                               >> (0x1fU 
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
    __Vtemp_h74205673__0[7U] = (0x4000000U | (((vlSelf->top__DOT__oprand1 
                                                | vlSelf->top__DOT__oprand2) 
                                               << 0x1cU) 
                                              | ((vlSelf->top__DOT__oprand1 
                                                  & vlSelf->top__DOT__oprand2) 
                                                 >> 8U)));
    __Vtemp_h74205673__0[8U] = (0x30000000U | ((vlSelf->top__DOT__oprand1 
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
    bufp->fullWData(oldp+352,(__Vtemp_h74205673__0),396);
    bufp->fullQData(oldp+365,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+367,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+369,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+371,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+373,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+375,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+377,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+379,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+381,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+383,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+385,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullIData(oldp+387,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+388,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+389,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+390,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+391,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+392,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+393,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+394,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+395,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+396,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+397,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+398,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+399,(vlSelf->top__DOT__u_EXU__DOT__u_ALU__DOT__get_res__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+400,(vlSelf->top__DOT__u_IDU__DOT__ins),32);
    bufp->fullIData(oldp+401,(vlSelf->top__DOT__u_IDU__DOT__immI),32);
    bufp->fullIData(oldp+402,(vlSelf->top__DOT__u_IDU__DOT__immU),32);
    bufp->fullIData(oldp+403,((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                << 0xcU) | ((0xfffff800U 
                                             & (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                                 << 0xbU) 
                                                & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                   << 4U))) 
                                            | ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                  ? 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                     >> 0x19U))
                                                  : 0U) 
                                                << 5U) 
                                               | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 1U))))),32);
    bufp->fullIData(oldp+404,((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                << 0xcU) | (((IData)(vlSelf->top__DOT__func7) 
                                             << 5U) 
                                            | (IData)(vlSelf->top__DOT__rd)))),32);
    bufp->fullIData(oldp+405,((((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                << 0x14U) | ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                ? (0xffU 
                                                   & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                      >> 0xcU))
                                                : 0U) 
                                              << 0xcU) 
                                             | ((0x7ff800U 
                                                 & (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                                     << 0xbU) 
                                                    & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                       >> 9U))) 
                                                | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                     ? 
                                                    (0x3ffU 
                                                     & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                        >> 0x15U))
                                                     : 0U) 
                                                   << 1U))))),32);
    bufp->fullCData(oldp+406,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+407,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand1__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+408,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__lut_out),3);
    bufp->fullBit(oldp+409,(vlSelf->top__DOT__u_IDU__DOT__get_select_oprand2__DOT__i0__DOT__hit));
    __Vtemp_h95013dd8__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI))));
    __Vtemp_h95013dd8__0[1U] = ((0xffffff80U & (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                                 << 0x13U) 
                                                | (((IData)(vlSelf->top__DOT__func7) 
                                                    << 0xcU) 
                                                   | ((IData)(vlSelf->top__DOT__rd) 
                                                      << 7U)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__u_IDU__DOT__immI))) 
                                           >> 0x20U)));
    __Vtemp_h95013dd8__0[2U] = (0x1180U | ((vlSelf->top__DOT__u_IDU__DOT__immI 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((0x7fU 
                                                  & ((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                                     >> 0xdU)) 
                                                 | ((0x7fU 
                                                     & ((IData)(vlSelf->top__DOT__func7) 
                                                        >> 0x14U)) 
                                                    | ((IData)(vlSelf->top__DOT__rd) 
                                                       >> 0x19U))))));
    __Vtemp_h95013dd8__0[3U] = (0xc000U | ((0xffe00000U 
                                            & ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                  ? 
                                                 (0x3fU 
                                                  & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                     >> 0x19U))
                                                  : 0U) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                       >> 8U))
                                                    : 0U) 
                                                  << 0x16U))) 
                                           | (vlSelf->top__DOT__u_IDU__DOT__immI 
                                              >> 0x12U)));
    __Vtemp_h95013dd8__0[4U] = (0xc600000U | ((vlSelf->top__DOT__u_IDU__DOT__immI 
                                               << 0x1cU) 
                                              | (0x1fffffU 
                                                 & ((0x1ffffeU 
                                                     & ((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                                        << 1U)) 
                                                    | (0x1fffffU 
                                                       & (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                                           & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                              >> 7U)) 
                                                          | ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                                ? 
                                                               (0x3fU 
                                                                & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                                   >> 0x19U))
                                                                : 0U) 
                                                              >> 6U) 
                                                             | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                                  ? 
                                                                 (0xfU 
                                                                  & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                                     >> 8U))
                                                                  : 0U) 
                                                                >> 0xaU))))))));
    __Vtemp_h95013dd8__0[5U] = (0x70000000U | (vlSelf->top__DOT__u_IDU__DOT__immI 
                                               >> 4U));
    __Vtemp_h95013dd8__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                        << 0x17U) | 
                                       ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                           ? (0xffU 
                                              & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                 >> 0xcU))
                                           : 0U) << 0xfU) 
                                        | ((0x3ffc000U 
                                            & (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid) 
                                                << 0xeU) 
                                               & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                  >> 6U))) 
                                           | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                ? (0x3ffU 
                                                   & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                      >> 0x15U))
                                                : 0U) 
                                              << 4U))))));
    __Vtemp_h95013dd8__0[7U] = (0x378U | ((vlSelf->top__DOT__u_IDU__DOT__immU 
                                           << 0xaU) 
                                          | (7U & (
                                                   ((- (IData)((IData)(vlSelf->top__DOT__u_IDU__DOT____VdfgTmp_h775b0371__0))) 
                                                    >> 9U) 
                                                   | ((((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                         ? 
                                                        (0xffU 
                                                         & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                            >> 0xcU))
                                                         : 0U) 
                                                       >> 0x11U) 
                                                      | (((IData)(vlSelf->top__DOT__u_IFU__DOT__rvalid)
                                                           ? 
                                                          (0x3ffU 
                                                           & (vlSelf->top__DOT__u_IFU__DOT__rdata 
                                                              >> 0x15U))
                                                           : 0U) 
                                                         >> 0x1cU))))));
    __Vtemp_h95013dd8__0[8U] = (0x5c00U | ((vlSelf->top__DOT__u_IDU__DOT__immU 
                                            << 0x11U) 
                                           | (vlSelf->top__DOT__u_IDU__DOT__immU 
                                              >> 0x16U)));
    __Vtemp_h95013dd8__0[9U] = (0x6e0000U | (vlSelf->top__DOT__u_IDU__DOT__immU 
                                             >> 0xfU));
    bufp->fullWData(oldp+410,(__Vtemp_h95013dd8__0),312);
    bufp->fullQData(oldp+420,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+422,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+424,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+426,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+428,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+430,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+432,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+434,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+436,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+437,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+438,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+439,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+440,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+441,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+442,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+443,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+444,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+445,(vlSelf->top__DOT__u_IDU__DOT__u_MuxKey__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+446,(vlSelf->top__DOT__u_IFU__DOT__pc),32);
    bufp->fullIData(oldp+447,(vlSelf->top__DOT__u_IFU__DOT__araddr),32);
    bufp->fullBit(oldp+448,(vlSelf->top__DOT__u_IFU__DOT__arvalid));
    bufp->fullBit(oldp+449,(vlSelf->top__DOT__u_IFU__DOT__arready));
    bufp->fullIData(oldp+450,(vlSelf->top__DOT__u_IFU__DOT__rdata),32);
    bufp->fullBit(oldp+451,(vlSelf->top__DOT__u_IFU__DOT__rvalid));
    bufp->fullBit(oldp+452,(vlSelf->top__DOT__u_IFU__DOT__rready));
    bufp->fullCData(oldp+453,(vlSelf->top__DOT__u_IFU__DOT__rresp),2);
    bufp->fullBit(oldp+454,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__awready));
    bufp->fullBit(oldp+455,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__wready));
    bufp->fullCData(oldp+456,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__bresp),2);
    bufp->fullBit(oldp+457,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__bvalid));
    bufp->fullIData(oldp+458,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__awaddr_reg),32);
    bufp->fullIData(oldp+459,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__wdata_reg),32);
    bufp->fullIData(oldp+460,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__araddr_reg),32);
    bufp->fullIData(oldp+461,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[0]),32);
    bufp->fullIData(oldp+462,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[1]),32);
    bufp->fullIData(oldp+463,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[2]),32);
    bufp->fullIData(oldp+464,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[3]),32);
    bufp->fullIData(oldp+465,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[4]),32);
    bufp->fullIData(oldp+466,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[5]),32);
    bufp->fullIData(oldp+467,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[6]),32);
    bufp->fullIData(oldp+468,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[7]),32);
    bufp->fullIData(oldp+469,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[8]),32);
    bufp->fullIData(oldp+470,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[9]),32);
    bufp->fullIData(oldp+471,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[10]),32);
    bufp->fullIData(oldp+472,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[11]),32);
    bufp->fullIData(oldp+473,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[12]),32);
    bufp->fullIData(oldp+474,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[13]),32);
    bufp->fullIData(oldp+475,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[14]),32);
    bufp->fullIData(oldp+476,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[15]),32);
    bufp->fullIData(oldp+477,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[16]),32);
    bufp->fullIData(oldp+478,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[17]),32);
    bufp->fullIData(oldp+479,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[18]),32);
    bufp->fullIData(oldp+480,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[19]),32);
    bufp->fullIData(oldp+481,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[20]),32);
    bufp->fullIData(oldp+482,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[21]),32);
    bufp->fullIData(oldp+483,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[22]),32);
    bufp->fullIData(oldp+484,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[23]),32);
    bufp->fullIData(oldp+485,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[24]),32);
    bufp->fullIData(oldp+486,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[25]),32);
    bufp->fullIData(oldp+487,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[26]),32);
    bufp->fullIData(oldp+488,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[27]),32);
    bufp->fullIData(oldp+489,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[28]),32);
    bufp->fullIData(oldp+490,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[29]),32);
    bufp->fullIData(oldp+491,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[30]),32);
    bufp->fullIData(oldp+492,(vlSelf->top__DOT____Vcellout__u_RegisterFile__data[31]),32);
    bufp->fullIData(oldp+493,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[0]),32);
    bufp->fullIData(oldp+494,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[1]),32);
    bufp->fullIData(oldp+495,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[2]),32);
    bufp->fullIData(oldp+496,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[3]),32);
    bufp->fullIData(oldp+497,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[4]),32);
    bufp->fullIData(oldp+498,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[5]),32);
    bufp->fullIData(oldp+499,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[6]),32);
    bufp->fullIData(oldp+500,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[7]),32);
    bufp->fullIData(oldp+501,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[8]),32);
    bufp->fullIData(oldp+502,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[9]),32);
    bufp->fullIData(oldp+503,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[10]),32);
    bufp->fullIData(oldp+504,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[11]),32);
    bufp->fullIData(oldp+505,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[12]),32);
    bufp->fullIData(oldp+506,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[13]),32);
    bufp->fullIData(oldp+507,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[14]),32);
    bufp->fullIData(oldp+508,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[15]),32);
    bufp->fullIData(oldp+509,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[16]),32);
    bufp->fullIData(oldp+510,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[17]),32);
    bufp->fullIData(oldp+511,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[18]),32);
    bufp->fullIData(oldp+512,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[19]),32);
    bufp->fullIData(oldp+513,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[20]),32);
    bufp->fullIData(oldp+514,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[21]),32);
    bufp->fullIData(oldp+515,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[22]),32);
    bufp->fullIData(oldp+516,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[23]),32);
    bufp->fullIData(oldp+517,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[24]),32);
    bufp->fullIData(oldp+518,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[25]),32);
    bufp->fullIData(oldp+519,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[26]),32);
    bufp->fullIData(oldp+520,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[27]),32);
    bufp->fullIData(oldp+521,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[28]),32);
    bufp->fullIData(oldp+522,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[29]),32);
    bufp->fullIData(oldp+523,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[30]),32);
    bufp->fullIData(oldp+524,(vlSelf->top__DOT__u_RegisterFile__DOT__rf[31]),32);
    bufp->fullCData(oldp+525,(vlSelf->top__DOT__u_WBU__DOT__fake_csr_write),6);
    bufp->fullCData(oldp+526,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__lut_out),6);
    bufp->fullBit(oldp+527,(vlSelf->top__DOT__u_WBU__DOT__get_fake_csr_write__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+528,(vlSelf->top__DOT__u_mem__DOT__pos),2);
    bufp->fullIData(oldp+529,(vlSelf->top__DOT__u_mem__DOT__rdata_w),32);
    bufp->fullCData(oldp+530,(vlSelf->top__DOT__u_mem__DOT__rdata_b),8);
    bufp->fullSData(oldp+531,(vlSelf->top__DOT__u_mem__DOT__rdata_h),16);
    bufp->fullBit(oldp+532,(vlSelf->top__DOT__u_mem__DOT__delay_read));
    bufp->fullBit(oldp+533,(vlSelf->top__DOT__u_mem__DOT__delay_write));
    bufp->fullIData(oldp+534,(vlSelf->top__DOT__u_mem__DOT__delay_waddr),32);
    bufp->fullIData(oldp+535,(vlSelf->top__DOT__u_mem__DOT__delay_wdata),32);
    bufp->fullIData(oldp+536,(vlSelf->top__DOT__u_mem__DOT__delay_raddr),32);
    bufp->fullIData(oldp+537,(vlSelf->top__DOT__u_mem__DOT__delay_rdata),32);
    bufp->fullCData(oldp+538,(vlSelf->top__DOT__u_mem__DOT__delay_wmask),8);
    __Vtemp_habeb126f__0[0U] = (IData)((0x500000000ULL 
                                        | (((QData)((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b)) 
                                            << 0x23U) 
                                           | (QData)((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h)))));
    __Vtemp_habeb126f__0[1U] = (IData)(((0x500000000ULL 
                                         | (((QData)((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b)) 
                                             << 0x23U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h)))) 
                                        >> 0x20U));
    __Vtemp_habeb126f__0[2U] = (0x20U | (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                                         << 6U));
    __Vtemp_habeb126f__0[3U] = (0x80U | ((0xfffffe00U 
                                          & (((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                                                             >> 0xfU)))) 
                                              << 0x19U) 
                                             | ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                                                << 9U))) 
                                         | (vlSelf->top__DOT__u_mem__DOT__rdata_w 
                                            >> 0x1aU)));
    __Vtemp_habeb126f__0[4U] = (0x200U | ((0xfffff000U 
                                           & (((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                                                              >> 7U)))) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                                                 << 0xcU))) 
                                          | (0x1ffU 
                                             & ((0x1ffU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                                                                   >> 0xfU)))) 
                                                    >> 7U)) 
                                                | ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_h) 
                                                   >> 0x17U)))));
    __Vtemp_habeb126f__0[5U] = (0xfffU & ((0xfffU & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                                                           >> 7U)))) 
                                            >> 0xcU)) 
                                          | ((IData)(vlSelf->top__DOT__u_mem__DOT__rdata_b) 
                                             >> 0x14U)));
    bufp->fullWData(oldp+539,(__Vtemp_habeb126f__0),175);
    bufp->fullQData(oldp+545,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+547,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+549,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+551,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+553,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+555,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+556,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+557,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+558,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+559,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+560,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+561,(vlSelf->top__DOT__u_mem__DOT__get_rdata__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+562,((((QData)((IData)((0xffU 
                                                 & vlSelf->top__DOT__u_mem__DOT__delay_rdata))) 
                                << 0x1eU) | (QData)((IData)(
                                                            (0x10080300U 
                                                             | ((0xff00000U 
                                                                 & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                                                                    << 0xcU)) 
                                                                | ((0x3fc00U 
                                                                    & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                                                                       >> 6U)) 
                                                                   | (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                                                                      >> 0x18U)))))))),40);
    bufp->fullSData(oldp+564,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[0]),10);
    bufp->fullSData(oldp+565,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[1]),10);
    bufp->fullSData(oldp+566,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[2]),10);
    bufp->fullSData(oldp+567,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__pair_list[3]),10);
    bufp->fullCData(oldp+568,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+569,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+570,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+571,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__data_list[3]),8);
    bufp->fullCData(oldp+572,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+573,(vlSelf->top__DOT__u_mem__DOT__get_rdata_b__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+574,((0x400000000ULL | (((QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->top__DOT__u_mem__DOT__delay_rdata))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0xffffU 
                                                                      & (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                                                                         >> 8U)))) 
                                                     << 0x12U) 
                                                    | (QData)((IData)(
                                                                      (0x20000U 
                                                                       | (vlSelf->top__DOT__u_mem__DOT__delay_rdata 
                                                                          >> 0x10U)))))))),54);
    bufp->fullIData(oldp+576,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__pair_list[0]),18);
    bufp->fullIData(oldp+577,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__pair_list[1]),18);
    bufp->fullIData(oldp+578,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__pair_list[2]),18);
    bufp->fullSData(oldp+579,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[0]),16);
    bufp->fullSData(oldp+580,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[1]),16);
    bufp->fullSData(oldp+581,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__data_list[2]),16);
    bufp->fullSData(oldp+582,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__lut_out),16);
    bufp->fullBit(oldp+583,(vlSelf->top__DOT__u_mem__DOT__get_rdata_h__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+584,(vlSelf->rst));
    bufp->fullBit(oldp+585,(vlSelf->clk));
    bufp->fullIData(oldp+586,(vlSelf->outpc),32);
    bufp->fullIData(oldp+587,(vlSelf->out_dnpc),32);
    bufp->fullIData(oldp+588,(vlSelf->out_snpc),32);
    bufp->fullIData(oldp+589,(vlSelf->ins),32);
    bufp->fullIData(oldp+590,(vlSelf->gpr[0]),32);
    bufp->fullIData(oldp+591,(vlSelf->gpr[1]),32);
    bufp->fullIData(oldp+592,(vlSelf->gpr[2]),32);
    bufp->fullIData(oldp+593,(vlSelf->gpr[3]),32);
    bufp->fullIData(oldp+594,(vlSelf->gpr[4]),32);
    bufp->fullIData(oldp+595,(vlSelf->gpr[5]),32);
    bufp->fullIData(oldp+596,(vlSelf->gpr[6]),32);
    bufp->fullIData(oldp+597,(vlSelf->gpr[7]),32);
    bufp->fullIData(oldp+598,(vlSelf->gpr[8]),32);
    bufp->fullIData(oldp+599,(vlSelf->gpr[9]),32);
    bufp->fullIData(oldp+600,(vlSelf->gpr[10]),32);
    bufp->fullIData(oldp+601,(vlSelf->gpr[11]),32);
    bufp->fullIData(oldp+602,(vlSelf->gpr[12]),32);
    bufp->fullIData(oldp+603,(vlSelf->gpr[13]),32);
    bufp->fullIData(oldp+604,(vlSelf->gpr[14]),32);
    bufp->fullIData(oldp+605,(vlSelf->gpr[15]),32);
    bufp->fullIData(oldp+606,(vlSelf->gpr[16]),32);
    bufp->fullIData(oldp+607,(vlSelf->gpr[17]),32);
    bufp->fullIData(oldp+608,(vlSelf->gpr[18]),32);
    bufp->fullIData(oldp+609,(vlSelf->gpr[19]),32);
    bufp->fullIData(oldp+610,(vlSelf->gpr[20]),32);
    bufp->fullIData(oldp+611,(vlSelf->gpr[21]),32);
    bufp->fullIData(oldp+612,(vlSelf->gpr[22]),32);
    bufp->fullIData(oldp+613,(vlSelf->gpr[23]),32);
    bufp->fullIData(oldp+614,(vlSelf->gpr[24]),32);
    bufp->fullIData(oldp+615,(vlSelf->gpr[25]),32);
    bufp->fullIData(oldp+616,(vlSelf->gpr[26]),32);
    bufp->fullIData(oldp+617,(vlSelf->gpr[27]),32);
    bufp->fullIData(oldp+618,(vlSelf->gpr[28]),32);
    bufp->fullIData(oldp+619,(vlSelf->gpr[29]),32);
    bufp->fullIData(oldp+620,(vlSelf->gpr[30]),32);
    bufp->fullIData(oldp+621,(vlSelf->gpr[31]),32);
    bufp->fullIData(oldp+622,(vlSelf->csr_reg[0]),32);
    bufp->fullIData(oldp+623,(vlSelf->csr_reg[1]),32);
    bufp->fullIData(oldp+624,(vlSelf->csr_reg[2]),32);
    bufp->fullIData(oldp+625,(vlSelf->csr_reg[3]),32);
    bufp->fullIData(oldp+626,(vlSelf->csr_reg[4]),32);
    bufp->fullIData(oldp+627,(vlSelf->csr_reg[5]),32);
    bufp->fullBit(oldp+628,(vlSelf->valid));
    bufp->fullBit(oldp+629,(vlSelf->ready));
    bufp->fullIData(oldp+630,(((0x73U == vlSelf->top__DOT__u_IDU__DOT__ins)
                                ? vlSelf->out_snpc : vlSelf->top__DOT__fake_csr_wdata)),32);
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
    bufp->fullWData(oldp+631,(__Vtemp_h63de71c0__0),312);
    bufp->fullBit(oldp+641,(1U));
    bufp->fullBit(oldp+642,(vlSelf->top__DOT__mem_valid));
    bufp->fullIData(oldp+643,(6U),32);
    bufp->fullIData(oldp+644,(3U),32);
    bufp->fullIData(oldp+645,(0x20U),32);
    bufp->fullIData(oldp+646,(0U),32);
    bufp->fullIData(oldp+647,(0U),32);
    bufp->fullIData(oldp+648,(0x23U),32);
    bufp->fullIData(oldp+649,(6U),32);
    bufp->fullIData(oldp+650,(2U),32);
    bufp->fullIData(oldp+651,(2U),32);
    bufp->fullIData(oldp+652,(3U),32);
    bufp->fullIData(oldp+653,(8U),32);
    bufp->fullIData(oldp+654,(7U),32);
    bufp->fullIData(oldp+655,(0x27U),32);
    bufp->fullIData(oldp+656,(8U),32);
    bufp->fullQData(oldp+657,(0x481a0fULL),33);
    bufp->fullCData(oldp+659,(0U),8);
    bufp->fullIData(oldp+660,(0xbU),32);
    bufp->fullIData(oldp+661,(4U),32);
    bufp->fullQData(oldp+662,(0x51a8b574f9ULL),42);
    bufp->fullCData(oldp+664,(0U),4);
    bufp->fullIData(oldp+665,(1U),32);
    bufp->fullIData(oldp+666,(0x24U),32);
    bufp->fullIData(oldp+667,(0xbU),32);
    bufp->fullIData(oldp+668,(9U),32);
    __Vtemp_hd76f35b7__0[0U] = 0x91a2699aU;
    __Vtemp_hd76f35b7__0[1U] = 0x9ceb1a06U;
    __Vtemp_hd76f35b7__0[2U] = 0x1b82e77U;
    bufp->fullWData(oldp+669,(__Vtemp_hd76f35b7__0),90);
    bufp->fullCData(oldp+672,(0U),3);
    bufp->fullIData(oldp+673,(0xaU),32);
    bufp->fullIData(oldp+674,(9U),32);
    __Vtemp_h97869814__0[0U] = 0x51926598U;
    __Vtemp_h97869814__0[1U] = 0x9ce71806U;
    __Vtemp_h97869814__0[2U] = 0x1b92e77U;
    bufp->fullWData(oldp+675,(__Vtemp_h97869814__0),90);
    bufp->fullIData(oldp+678,(vlSelf->top__DOT__u_IFU__DOT__ins_reg),32);
    bufp->fullIData(oldp+679,(vlSelf->top__DOT__u_IFU__DOT__ins_temp),32);
    bufp->fullBit(oldp+680,(0U));
    bufp->fullIData(oldp+681,(vlSelf->top__DOT__u_IFU__DOT__u_INS_MEM__DOT__rdata_temp),32);
    bufp->fullQData(oldp+682,(0x242423222160ULL),54);
    bufp->fullCData(oldp+684,(0U),6);
    bufp->fullIData(oldp+685,(5U),32);
    bufp->fullIData(oldp+686,(5U),32);
    bufp->fullIData(oldp+687,(4U),32);
    bufp->fullIData(oldp+688,(0x10U),32);
    bufp->fullSData(oldp+689,(0U),16);
    bufp->fullIData(oldp+690,(0x12U),32);
}
