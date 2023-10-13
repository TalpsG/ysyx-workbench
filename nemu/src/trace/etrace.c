#include "trace/etrace.h"
#include <string.h>
char etrace_buff[500][300];
int etrace_buffp = -1;
void init_etrace() {
  for (int i = 0; i < 500; i++) {
    etrace_buff[i][0] = '\0';
  }
}
void add_etrace(char *str) {
	etrace_buffp= (etrace_buffp+1)%500;
	strcpy(etrace_buff[etrace_buffp], str);
}
void print_etrace() {
  for (int i = 0; i < 500; i++) {
    printf("%s",etrace_buff[i]);
  }
}