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
    0x00100093,  // addi x1,x0,1
    0x00208113,  // addi x2,x1,2
    0x00210113,  // addi x2,x2,2
    0x00100073,  // ebreak (used as nemu_trap)
};
uint32_t *bin = NULL; 
Vtop top;
void single_cycle(){
    top.clk = 1;
    top.eval();
    top.clk = 0;
    top.eval();
}
void reset(){
    int i= 100;
    top.pc = 0;
    for(auto &p:top.regfile){
        p = 0;
    }
    top.clk=0;
    while(i--);
    top.clk=0;
    for(auto &p:top.regfile){
        p = 0;
    }

}
uint32_t getInst(uint32_t pc){
    uint32_t temp = pc & 0x7fffffff;
    return bin[temp];
}
int main(int argc, const char** argv) {
	if(argc==2){
		int fd = open(argv[1],O_RDONLY);
		struct stat sb;
		fstat(fd,&sb);
		bin = static_cast<uint32_t *>(mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0));
		close(fd);
	}else{
		bin = instructions;
	}
    reset();
    while(1){
        top.ins = getInst(top.pc);
        single_cycle();
    }
    return 0;
}