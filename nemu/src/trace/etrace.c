#include <stdio.h>
static char etrace_file[] = "/home/talps/gitrepo/ysyx-workbench/nemu/build/etrace";
static FILE *f;
void init_etrace() {
	f = fopen(etrace_file,"w");
	if (f == NULL) {
		printf("etrace init fail");
	}
}
void add_etrace(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}