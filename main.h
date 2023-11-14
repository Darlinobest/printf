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
int print_number(int n);
int _isdigit(int c);
int handle_char(va_list args);
int handle_str(va_list args);
int handle_percent(void);
int handle_number(va_list args);

#endif
