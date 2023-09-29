#include <cstdlib>
#include <cstdio>
#include <cstdint>
#include <Vtop.h>
static char ringbuffer[200][500]={""};
extern Vtop top;
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void print_ins() {
	char ins_buf[50];
	disassemble(ins_buf, 50, top.outpc,
				(uint8_t *)&top.ins,4);
	printf("pc:%8x,ins:%s",top.outpc,ins_buf);
}