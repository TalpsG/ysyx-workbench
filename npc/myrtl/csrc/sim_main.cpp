
#include "utils.h"
int first_inst = 1;
extern const char * elf;
const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};


uint32_t instructions[] = {
    0x00000297,  // auipc t0,0                                              
	0x00028823,  // sb  zero,16(t0)
	0x0102c503,  // lbu a0,16(t0)
	0x00100073,  // ebreak (used as nemu_trap)
	0xdeadbeef,  // some data
};
uint32_t *bin = NULL; 
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
    printf("reg: %3s : %8x\n",regs[i],top.data[i]);
  }
}
char *cmd=NULL;
int main(int argc, const char** argv) {
	init_ringbuf();
	if(argc==3){
		elf = argv[2];
		printf("loading bin: %s\n",argv[1]);
		int fd = open(argv[1],O_RDONLY);
		struct stat sb;
		fstat(fd,&sb);
		bin = static_cast<uint32_t *>(mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0));
		close(fd);
	}else{
		bin = instructions;
	}
	load_elf();
	print_callbuf();	
	init_disasm("riscv32");
	reset();
	sdb_mainloop();
	
    return 0;
}