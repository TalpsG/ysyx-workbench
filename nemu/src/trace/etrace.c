#include "trace/etrace.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static char *etrace_buf = "/home/talps/gitrepo/ysyx-workbench/nemu/build/etrace.txt";
static FILE *f;
void init_etrace() {
	f = fopen(etrace_buf,"w");
	if (f == NULL) {
		printf("etrace init fail");
	}
}
void add_etrace(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}
void print_etrace() {
}