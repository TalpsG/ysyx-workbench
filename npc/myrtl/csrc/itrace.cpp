#include <cstdlib>
#include <cstdio>
#include <cstdint>
#include <Vtop.h>
#include <cstring>
#include "macro.h"
static char ringbuffer[] ="/home/talps/gitrepo/ysyx-workbench/npc/trace/itrace.txt";
static FILE *f;
extern Vtop top;
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_ringbuf() {
	f = fopen(ringbuffer,"w+");
}
void print_ins() {
	char ins_buf[100];
	disassemble(ins_buf, 50, top.outpc,
				(uint8_t *)&top.ins,4);
#ifdef CONFIG_ITRACE	
	fprintf(f,"pc:%8x,machinecode:%08x ,ins:%s\n",top.outpc,top.ins,ins_buf);
	fflush(f);
#endif 
	//printf("pc:%8x,machinecode:%08x ,ins:%s\n",top.outpc,top.ins,ins_buf);
}
void print_ringbuf() {
}