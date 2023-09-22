#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
#define INT2STR(x) #x 
int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  //todo
  /*
  实现abstract-machine/klib/src/stdio.c中的sprintf(),
  具体行为可以参考man 3 printf. 目前你只需要实现%s和%d就能通过hello-str的测试了, 
  其它功能(包括位宽, 精度等)可以在将来需要的时候再自行实现.
  */
  va_list ap;
  va_start(ap,fmt);                                                                                                                                       
  int num = 0;
  int op = 0;
  for(int i=0;i<=strlen(fmt);i++){
      if(fmt[i]!='%') {
        out[op] = fmt[i];
        op++;
        continue;
      }
      if(fmt[i+1] == 'd'){
          int t = va_arg(ap, int);
          char *p = INT2STR(t);
          t = t+1;// 这条指令没有意义，仅仅是为了让编译器不报unused的错误
          i += 2;
          num ++;
          int len = strlen(p);
          for(int j = 0;j<len;j++){
            out[op++]=p[j];
          }
          continue;
      }
      if(fmt[i+1] == 's'){
          char *p = va_arg(ap,char *);
          i += 2;
          num ++;
          int len = strlen(p);
          for(int j=0;j<len;j++){
            out[op++] = p[j];
          }
          continue;
      }
  }
  va_end(ap);
  return num;

}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
