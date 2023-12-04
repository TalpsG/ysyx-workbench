#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int written = 0;

    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            if (*fmt == 's') {
                const char *s = va_arg(args, const char *);
                while (*s) {
                    putch(*s);
                    s++;
                    written++;
                }
            } else if (*fmt == 'd') {
                int d = va_arg(args, int);
                int length = 0;
                int temp = d;
                if (d < 0) {
                    putch('-');
                    written++;
                    temp = -d;
                }
                while (temp != 0) {
                    temp /= 10;
                    length++;
                }
                if (d == 0) {
                    putch('0');
                    written++;
                } else {
                    temp = d;
                    char buffer[length];
                    for (int i = length - 1; i >= 0; i--) {
                        buffer[i] = (temp % 10) + '0';
                        temp /= 10;
                    }
                    for (int i = 0; i < length; i++) {
                        putch(buffer[i]);
                        written++;
                    }
                }
            } else if (*fmt == 'x') {
                unsigned int x = va_arg(args, unsigned int);
                int length = 0;
                unsigned int temp = x;
                while (temp != 0) {
                    temp /= 16;
                    length++;
                }
                if (x == 0) {
                    putch('0');
                    written++;
                } else {
                    temp = x;
                    char buffer[length];
                    for (int i = length - 1; i >= 0; i--) {
                        int digit = temp % 16;
                        if (digit < 10) {
                            buffer[i] = digit + '0';
                        } else {
                            buffer[i] = digit - 10 + 'a';
                        }
                        temp /= 16;
                    }
                    for (int i = 0; i < length; i++) {
                        putch(buffer[i]);
                        written++;
                    }
                }
            }
        } else {
            putch(*fmt);
            written++;
        }
        fmt++;
    }
    va_end(args);
    return written;

}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int sprintf(char *str, const char *fmt, ...) {
	    va_list args;
    va_start(args, fmt);
    int written = 0;

    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            if (*fmt == 's') {
                const char *s = va_arg(args, const char *);
                while (*s) {
                    *str++ = *s++;
                    written++;
                }
            } else if (*fmt == 'd') {
                int d = va_arg(args, int);
                int length = 0;
                int temp = d;
                if (d < 0) {
                    *str++ = '-';
                    written++;
                    temp = -d;
                }
                while (temp != 0) {
                    temp /= 10;
                    length++;
                }
                if (d == 0) {
                    *str++ = '0';
                    written++;
                } else {
                    temp = d;
                    char buffer[length];
                    for (int i = length - 1; i >= 0; i--) {
                        buffer[i] = (temp % 10) + '0';
                        temp /= 10;
                    }
                    for (int i = 0; i < length; i++) {
                        *str++ = buffer[i];
                        written++;
                    }
                }
            } else if (*fmt == 'x') {
                unsigned int x = va_arg(args, unsigned int);
                int length = 0;
                unsigned int temp = x;
                while (temp != 0) {
                    temp /= 16;
                    length++;
                }
                if (x == 0) {
                    *str++ = '0';
                    written++;
                } else {
                    temp = x;
                    char buffer[length];
                    for (int i = length - 1; i >= 0; i--) {
                        int digit = temp % 16;
                        if (digit < 10) {
                            buffer[i] = digit + '0';
                        } else {
                            buffer[i] = digit - 10 + 'a';
                        }
                        temp /= 16;
                    }
                    for (int i = 0; i < length; i++) {
                        *str++ = buffer[i];
                        written++;
                    }
                }
            }
        } else {
            *str++ = *fmt;
            written++;
        }
        fmt++;
    }
    *str = '\0';
    va_end(args);
    return written;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
