#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t i;
  for(i = 0;s[i]!='\0';i++);
  return i;
}

char *strcpy(char *dst, const char *src) {
  int i = 0;
  while(src[i]!='\0'){
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i = 0;
  for(;i<n&&src[i]!='\0';i++){
    dst[i] = src[i];
  }
  dst[i] = '\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  char *p = dst;
  while(*p!='\0'){
    p++;
  }
  while(*src!='\0'){
    *(p++) = *(src++);
  }
  *p = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  while(*s1!='\0'&&*s2!='\0'){
    if(*s1==*s2) {
      s1++;s2++;
      continue;
    }

    return *s1-*s2;
  }
  if(*s1=='\0'&&*s2=='\0')
    return 0;
  if(*s1=='\0') return -1;
  return 1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i = 0;
  for(;i<n&&s1[i]!='\0'&&*s2!='\0';i++){
    if(s1[i]==s2[i]) continue;
    return s1[i]-s2[i];
  }
  if(i==n||(s1[i]=='\0'&&s2[i]=='\0')) return 0;
  if(s1[i]=='\0') return -1;
  return 1;
}

void *memset(void *s, int c, size_t n) {
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  panic("Not implemented");
}

#endif
