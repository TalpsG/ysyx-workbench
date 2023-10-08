#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
void int2str(int i,char *p){                                              
    char temp[20];
    int isNeg = i<0;
    int pos=0;
    if (i == 0) {
      p[0] = '0';
      p[1] = '\0';
	  return;
	}
	
    while(i!=0){
        temp[pos++] = i%10+'0';
        i=i/10;
    }
    if(isNeg) temp[pos++] = '-';
    p[pos] = '\0';
    int j = 0;
    while(pos>0){
        p[j++] = temp[--pos];
    }
}
void width_print(char *str,int width,int zero_fill) {
	if (zero_fill) {
		int len = strlen(str);
		if (len > width) {
			for (int i = 0; i < width; i++) {
				putch(str[len-width+i]);
			}
		} else {
			for (int i = 0; i < width - len; i++) {
				putch('0');
			}
			for (int i = 0; i < len; i++) {
				putch(str[i]);
			}
		}
	} else {
		int len = strlen(str);
		if (len > width) {
			for (int i = 0; i < width; i++) {
				putch(str[len-width+i]);
			}
		} else {
			for (int i = 0; i < width - len; i++) {
				putch(' ');
			}
			for (int i = 0; i < len; i++) {
				putch(str[i]);
			}
		}

	}

}
int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int num = 0;
  int fmt_p = 0;
  int zero_fill = 0,width = -1;

  while (fmt[fmt_p] != '\0') {
	char c= fmt[fmt_p];
	zero_fill = 0;
    if (c!= '%') {
      putch(c);
	  fmt_p++;
    } else {
		char c_next = fmt[fmt_p+1];
      if (c_next == 'd') {
		num++;
        char buf[15];
        int i = va_arg(ap, int);
		int2str(i, buf);
		int buf_p = 0;
		while (buf[buf_p] != '\0') {
			putch(buf[buf_p]);
			buf_p++;
		}
		fmt_p += 2;
      } else if(c_next=='s') {
        num++;
        char *str = va_arg(ap, char *);
        int len = strlen(str);
        for (int i = 0; i < len; i++) {
          putch(str[i]);
		}
		fmt_p+=2;
      } else if (c_next >= '0' && c_next <= '9') {
		num++;
        if (c_next == 0) {
          putch('0');
          putch('f');
          putch('i');
          putch('l');
          putch('l');
          zero_fill = 1;
          width = fmt[fmt_p+2]-'0';
          if (fmt[fmt_p + 3] == 's') {
			char *p = va_arg(ap, char *);
			width_print(p, width, zero_fill);
          } else if (fmt[fmt_p + 3] == 'd') {
            char buf[width];
            int temp = va_arg(ap, int);
            int2str(temp, buf);
			width_print(buf, width, zero_fill);
		  }
		  fmt_p += 4;
        } else {
          width = c_next-'0';
          if (fmt[fmt_p + 2] == 's') {
			char *p = va_arg(ap, char *);
			width_print(p, width, zero_fill);
          } else if (fmt[fmt_p + 2] == 'd') {
            char buf[width];
            int temp = va_arg(ap, int);
            int2str(temp, buf);
			width_print(buf, width, zero_fill);
		  }
		  fmt_p += 3;
		}
	  }
	}
  }
	return num;
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
  for(int i=0;i<=strlen(fmt);){
      if(fmt[i]!='%') {
        out[op] = fmt[i];
        op++;
        i++;
        continue;
      }
      if(fmt[i+1] == 'd'){
          int t = va_arg(ap, int);
          char p[20];
          int2str(t,p );
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
