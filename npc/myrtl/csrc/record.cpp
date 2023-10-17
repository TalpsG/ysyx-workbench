#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Vtop.h>
extern Vtop top;
static char difftest[] = "/home/talps/gitrepo/ysyx-workbench/nemu/build/difftest.txt";
static FILE *f;
void init_record() {
	f = fopen(difftest,"r");
	if (f == NULL) {
		printf("difftest with nemu fail\n");
	}
}
void check_record() {
	char nemu[400]="";
	char npc[400]="";
	char temp[20];
	sprintf(temp, "%x ",top.outpc);
	for (int i = 0; i < 32; i++) {
		sprintf(temp, "%x ",top.gpr[i]);
		strcat(npc, temp);
	}	
	for (int i = 0; i < 6; i++) {
		sprintf(temp, "%x ",top.csr_reg[i]);
		strcat(npc, temp);
	}
	strcat(npc, "\n");
	char *p = fgets(nemu, 200, f);
	if (p == NULL) {
		printf("none record");
		exit(0);
	}
	if (strcmp(nemu, npc) != 0) {
		printf("pc:%8x , reg is diff\n",top.outpc);
		exit(1);
	}
}