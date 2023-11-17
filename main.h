#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int my_putchar(const char c);
int my_puts(char *s);
int _printf(const char *format, ...);
int print_number(int n);
int handle_char(va_list args);
int handle_str(va_list args);
int handle_percent(void);
int handle_number(va_list args);
int print_binary(unsigned int n);
int handle_binary(va_list args);
int handle_format_spec(char spec, va_list args, int *count);
int handle_octal(va_list arg);
int print_unsigned(va_list args);
int handle_hex(va_list args);
int handle_upper_hex(va_list args);
int print_hexadecimal(unsigned int num, int upcase);

#endif
