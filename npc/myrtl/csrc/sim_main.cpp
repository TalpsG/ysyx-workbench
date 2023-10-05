
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
	difftest_step(top.outpc,top.out_dnpc);
	print_ins();
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
char *cmd=NULL;
void init(int argc,const char **argv) {
	int img_size;
	init_ringbuf();
	img_size = init_mem(argc,argv);
	char ref_so_file[]="/home/talps/gitrepo/ysyx-workbench/npc/riscv32-nemu-interpreter-so";
	init_difftest(ref_so_file, img_size, 1235);
	load_elf();
	print_callbuf();	
	init_disasm("riscv32");
	reset();
	init_difftest(ref_so_file, img_size, 1235);
	top.outpc-=4;
	top.eval();
}
int main(int argc, const char** argv) {
	init(argc, argv);
	sdb_mainloop();
	
    return 0;
}