#include <stdio.h>
static char dtrace_file[] = "/home/talps/gitrepo/ysyx-workbench/nemu/build/dtrace";
static FILE *f;
void init_dtrace() {
	f = fopen(dtrace_file,"w");
	if (f == NULL) {
		printf("dtrace init fail");
	}
}
void add_dtrace(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}