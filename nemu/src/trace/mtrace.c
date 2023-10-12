#include "trace/mtrace.h"
char mtrace_buff[500][100];
int mtrace_buffp = -1;
void init_mtrace() {
  for (int i = 0; i < 500; i++) {
    mtrace_buff[i][0] = '\0';
  }
}
void add_mtrace(char *str) {
	mtrace_buffp=(mtrace_buffp+1)%500;
	strcpy(mtrace_buff[mtrace_buffp],str);
}
void print_mtrace() {
  for (int i = 0; i < 500; i++) {
    printf("%s",mtrace_buff[i]);
  }
}
