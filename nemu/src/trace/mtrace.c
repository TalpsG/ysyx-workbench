#include <stdio.h>
static char mtrace_file[] = "/home/talps/gitrepo/ysyx-workbench/nemu/build/mtrace";
static FILE *f;
void init_mtrace() {
	f = fopen(mtrace_file,"w");
	if (f == NULL) {
		printf("mtrace init fail");
	}
}
void add_mtrace(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}