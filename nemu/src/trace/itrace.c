#include <stdio.h>
static char itrace_file[] = "/home/talps/gitrepo/ysyx-workbench/nemu/build/itrace";
static FILE *f;
void init_itrace() {
	f = fopen(itrace_file,"w");
	if (f == NULL) {
		printf("itrace init fail");
	}
}
void add_itrace(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}