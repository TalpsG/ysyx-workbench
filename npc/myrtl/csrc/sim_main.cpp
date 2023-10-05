
#include "utils.h"
#include <cstring>
int first_inst = 1;
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};


Vtop top;
void single_cycle(){
	top.clk = 1;
	top.eval();
	top.clk = 0;
	top.eval();
	print_ins();
}
void reset() {
  top.clk = 0;
  int i= 10000;
  top.eval();
  while (i--)
    ;
}
void display_regs() {
  for (int i = 0; i < 32; i++) {
    printf("reg: %3s : %8x\n",regs[i],top.gpr[i]);
  }
}
char *cmd=NULL;
int main(int argc, const char** argv) {
	int img_size;
	init_ringbuf();
	img_size = init_mem(argc,argv);
	load_elf();
	print_callbuf();	
	init_disasm("riscv32");
	reset();
	sdb_mainloop();
	
    return 0;
}