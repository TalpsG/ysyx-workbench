#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *str) {
	const char *s;
    for (s = str; *s; ++s);
    return (s - str);
}

char *strcpy(char *dst, const char *src) {
    char *p = dst;
    while ((*p++ = *src++) != '\0');
    return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
	    char *p = dst;
    while (n > 0 && (*p++ = *src++) != '\0') {
        n--;
    }
    while (n > 0) {
        *p++ = '\0';
        n--;
    }
    return dst;
}

char *strcat(char *dst, const char *src) {
	    char *p = dst;
    while (*p) {
        p++;
    }
    while (*src) {
        *p++ = *src++;
    }
    *p = '\0';
    return dst;
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
    while (n > 0 && *s1 && (*s1 == *s2)) {
        s1++;
        s2++;
        n--;
    }
    if (n == 0) {
        return 0;
    } else {
        return *(const unsigned char *)s1 - *(const unsigned char *)s2;
    }
}

void *memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    while (n > 0) {
        *p = (unsigned char)c;
        p++;
        n--;
    }
    return s;
}

void *memmove(void *dst, const void *src, size_t n) {
	    unsigned char *d = dst;
    const unsigned char *s = src;

    if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else {
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }
    return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
    unsigned char *d = out;
    const unsigned char *s = in;

    while (n--) {
        *d++ = *s++;
    }

    return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
	    const unsigned char *p1 = s1, *p2 = s2;
    for (size_t i = 0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i];
        }
    }
    return 0;
}

#endif
