#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Vtop.h>
extern Vtop top;
extern const char *program;
static char difftest[100] = "/home/talps/gitrepo/ysyx-workbench/nemu/trace/";
static FILE *f;
void init_record() {
  const char *filename = strrchr(program,'/')+1;
  strcat(difftest,filename);
  strcat(difftest,".txt");
	f = fopen(difftest,"r");
	if (f == NULL) {
		printf("difftest with nemu fail\n");
		exit(1);
	}
	printf("difftest init success !!!\n");
}
void check_record() {
	char nemu[400]="";
	char npc[400]="";
	char temp[20];
	sprintf(temp, "%x ",top.outpc);
	strcat(npc, temp);
	for (int i = 0; i < 32; i++) {
		sprintf(temp, "%x ",top.gpr[i]);
		strcat(npc, temp);
	}	
	for (int i = 0; i < 6; i++) {
		sprintf(temp, "%x ",top.csr_reg[i]);
		strcat(npc, temp);
	}
	strcat(npc, "\n");
	char *p = fgets(nemu, 400, f);
	if (p == NULL) {
		printf("none record");
		exit(0);
	}
	if (strcmp(nemu, npc) != 0) {
		printf("pc:%8x , reg is diff\n",top.outpc);
		printf("nemu: \n%s\n",nemu);
		printf("npc: \n%s\n",npc);
		exit(1);
	}
}