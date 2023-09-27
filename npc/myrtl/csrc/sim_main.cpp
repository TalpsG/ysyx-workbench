#include <cstdint>
#include<verilated.h>
#include<iostream>
#include<Vtop.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
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
}
void reset() {
  top.clk = 0;
  int i= 10000;
  top.eval();
  while (i--)
    ;
}
uint32_t getInst(uint32_t pc){
    uint32_t temp = pc & 0x7fffffff;
    return bin[temp/4];
}
void display_regs() {
  for (int i = 0; i < 32; i++) {
    printf("reg: x%3d : %8x\n",i,top.data[i]);
  }
}

int main(int argc, const char** argv) {
	if(argc==2){
		printf("loading elf : %s\n",argv[1]);
		int fd = open(argv[1],O_RDONLY);
		struct stat sb;
		fstat(fd,&sb);
		bin = static_cast<uint32_t *>(mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0));
		close(fd);
		uint32_t *ins= bin;
		uint32_t add = 0x80000000;
		while (ins < bin+sb.st_size) {
			printf("add:%8x, %8x\n",add,*(ins++));
			add+=4;
		}
	}else{
		bin = instructions;
	}
	reset();
	int i = 1000;
    while(i--){
		top.ins = getInst(top.outpc);
		printf("pc = 0x%8x\n",top.outpc);
		printf("ins: 0x%8x\n",top.ins);
		printf("\n");
		display_regs();
		single_cycle();
    }
    return 0;
}