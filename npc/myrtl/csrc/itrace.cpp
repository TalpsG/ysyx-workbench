#include <cstdlib>
#include <cstdio>
#include <cstdint>
#include <Vtop.h>
#include <cstring>
char ringbuffer[200][100]={""};
int buf_p= 0;
extern Vtop top;
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void init_ringbuf() {
  for (int i = 0; i < 200; i++) {
    ringbuffer[i][0]='\0';
  }
}
void print_ins() {
	char ins_buf[100];
	disassemble(ins_buf, 50, top.outpc,
				(uint8_t *)&top.ins,4);
	sprintf(ringbuffer[buf_p++],"pc:%8x,ins:%s",top.outpc,ins_buf);
	printf("pc:%8x,ins:%s\n",top.outpc,ins_buf);
}
void print_ringbuf() {
  for (int i=0; i < 200; i++) {
	if(ringbuffer[i][0]!='\0')
		printf("%s\n",ringbuffer[i]);
  }
}