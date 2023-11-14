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
<<<<<<< HEAD
int print_number(int n);
int _isdigit(int c);

=======
int handle_spec(va_list args, const char *for_mat);
int print_bin(va_list var);
>>>>>>> 85bbbe7e9c3e2e9f1046bb4347fc480df7c60ce3
#endif
