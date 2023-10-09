#include "trace/dtrace.h"
#include <string.h>
char dtrace_buff[500][100];
int dtrace_buffp = -1;
void init_dtrace() {
  for (int i = 0; i < 500; i++) {
    dtrace_buff[i][0] = '\0';
  }
}
void add_dtrace(char *str) {
	dtrace_buffp= (dtrace_buffp+1)%500;
	strcpy(dtrace_buff[dtrace_buffp], str);
}
void print_dtrace() {
  for (int i = 0; i < 500; i++) {
    printf("%s",dtrace_buff[i]);
  }
}