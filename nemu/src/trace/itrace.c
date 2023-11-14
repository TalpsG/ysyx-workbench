#include "trace/itrace.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static char *itrace_buf = "/home/talps/gitrepo/ysyx-workbench/nemu/build/itrace.txt";
static FILE *f;
void init_itrace() {
	f = fopen(itrace_buf,"w");
	if (f == NULL) {
		printf("itrace init fail");
	}
}
void add_itrace(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}
void print_itrace() {
}