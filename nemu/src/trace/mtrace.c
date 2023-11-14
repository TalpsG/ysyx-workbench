#include "trace/mtrace.h"
#include "trace/mtrace.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static char *mtrace_buf = "/home/talps/gitrepo/ysyx-workbench/nemu/build/mtrace.txt";
static FILE *f;
void init_mtrace() {
	f = fopen(mtrace_buf,"w");
	if (f == NULL) {
		printf("mtrace init fail");
	}
}
void add_mtrace(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}
void print_mtrace() {
}