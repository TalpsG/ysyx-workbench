#include <stdio.h>
#include <string.h>
static FILE *f;
char record_file[100] ="/home/talps/gitrepo/ysyx-workbench/nemu/trace/" ;
void init_record(char *filename) {
	strcat(record_file	, filename);
	strcat(record_file	, ".txt");
	f = fopen(record_file,"w");
	if (f == NULL) {
		printf("record init fail");
	}
}
void add_record(char *str) {
	fprintf(f, "%s",str);
	fflush(f);
}