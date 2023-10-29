#include <cstdio>
#include <cstdlib>
#include<iostream>
#include<Vtop.h>
#include "utils.h"
#include "macro.h"

extern "C" void ebreak(int i);
extern Vtop top;
extern state npc_state;
void display_regs();
void check_call();
void  ebreak(int i){
    unsigned int mask = 0x00100073u;
#ifdef CONFIG_FTRACE
	check_call();
#endif
    if((i^mask)==0){
		if (top.gpr[10] == 0) {
			printf("HIT GOOD TRAP,PC:0x%8x,RET:0x%8x\n",top.outpc,top.gpr[10]);
			display_regs();
			npc_state = ENDING;
			exit(0);
		} else {
			printf("HIT BAD TRAP,PC:0x%8x,RET:0x%8x\n",top.outpc,top.gpr[10]);
			display_regs();
			npc_state = ABORT;
			exit(1);
		}
    }
}
