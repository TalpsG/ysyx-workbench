#include "trace/dtrace.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static char *dtrace_buf = "/home/talps/gitrepo/ysyx-workbench/nemu/build/dtrace.txt";
static FILE *f;
void init_dtrace() {
	f = fopen(dtrace_buf,"w");
	if (f == NULL) {
		printf("dtrace init fail");
	}
}
void add_dtrace(char *str) {
	fprintf(f, "%s",str);
}
void print_dtrace() {
}