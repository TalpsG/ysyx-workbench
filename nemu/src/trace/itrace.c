#include <stdio.h>
#include <string.h>
#define BUF_SIZE 200
#define LINE_SIZE 500
char itrace_buff[BUF_SIZE][LINE_SIZE];
int itrace_buffp=-1;
void init_itrace(){
  for (int i = 0; i < 200; i++) {
    itrace_buff[i][0]= '\0';
	}
}
void add_itrace(char *str) {
	itrace_buffp= (itrace_buffp+1)%200;
	strcpy(itrace_buff[itrace_buffp], str);
}
void print_itrace(){
  for(int i=0;i<BUF_SIZE&&strlen(itrace_buff[i])!=0;i++){
    printf("%s",itrace_buff[i]);
  }
}