#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int my_putchar(const char c);
int my_puts(char *s);
int _printf(const char *format, ...);
int print_37(void);
int _putchar(char c);
int print_char(va_list val);
int printf_string(va_list val);
#endif