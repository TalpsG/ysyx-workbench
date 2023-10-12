
#include "utils.h"
#include <bits/types/time_t.h>
#include <cstdio>
#include <cstring>
#include "macro.h"
#include <verilated_vcd_c.h>
int first_inst = 1;
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

Vtop top;
#ifdef TRACE
VerilatedVcdC m_trace ;
int sim_time = 0;
#endif
void single_cycle(){
	//printf("-------->begin \n");
	top.clk = 1;
	top.eval();
#ifdef TRACE
	m_trace.dump(sim_time);
	sim_time++;
#endif
	//printf("-------------mid\n");
	top.clk = 0;
	top.eval();
#ifdef TRACE
	m_trace.dump(sim_time);
	sim_time++;
#endif
	print_ins();
#ifdef CONFIG_DIFFTEST
	difftest_step(top.outpc,top.out_dnpc);
#endif // DEBUG
	//printf("-------->end \n\n");
}
void reset() {
  top.clk = 0;
  int i= 10000;
  while (i--)
    ;
  top.eval();
}
void display_regs() {
  for (int i = 0; i < 32; i++) {
    printf("reg: %3s : %8x\n",regs[i],top.gpr[i]);
  }
}



bool batch=false;
void batch_mode() {
  while (npc_state == RUNNING  ) {
    single_cycle();
  }
}
char *cmd=NULL;
void init(int argc,const char **argv) {
	int img_size;
#ifdef CONFIG_FTRACE
	init_callbuff();
#endif // DEBUG
#ifdef CONFIG_MTRACE
	init_mtrace();
#endif // DEBUG
#ifdef CONFIG_ITRACE
	init_ringbuf();
#endif // DEBUG
	img_size = init_mem(argc,argv);
#ifdef CONFIG_DIFFTEST
	char ref_so_file[]="/home/talps/gitrepo/ysyx-workbench/npc/riscv32-nemu-interpreter-so";
	init_difftest(ref_so_file, img_size, 1235);
#endif // DEBUG
	if (argc == 4) {
		batch=true;
	}
	load_elf();
	print_callbuf();	
	init_disasm("riscv32");
	reset();
#ifdef CONFIG_DIFFTEST
	init_difftest(ref_so_file, img_size, 1235);
#endif
	top.outpc-=4;
	top.eval();
}
int main(int argc, const char** argv) {

#ifdef TRACE
    Verilated::traceEverOn(true);
    top.trace(&m_trace, 5);
    m_trace.open("waveform.vcd");
#endif
	init(argc, argv);
	if (batch) {
		batch_mode();
	} else {
		sdb_mainloop();
	}
    return 0;
}