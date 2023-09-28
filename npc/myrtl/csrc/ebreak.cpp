#include <cstdio>
#include <cstdlib>
#include<iostream>
#include<Vtop.h>
#include <readline/readline.h>
extern "C" void ebreak(int i);
extern Vtop top;
void display_regs();
void  ebreak(int i){
    unsigned int mask = 0x00100073u;
    if((i^mask)==0){
		if (top.data[10] == 0) {
			printf("HIT GOOD TRAP,PC:0x%8x,RET:0x%8x\n",top.outpc,top.data[10]);
			display_regs();
			exit(0);
		}
		printf("HIT BAD TRAP,PC:0x%8x,RET:0x%8x\n",top.outpc,top.data[10]);
		display_regs();
		exit(1);
    }
}
