#include "main.h"

/**
 * _printf - print format to std output
 * @format: type of argument to be printed
 * @...: a variable number of arguments
 * Return: formatted string upon success
 */

int _printf(const char *format, ...)
{
	int print_char = 0;
	va_list args;
	char character, *str;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			print_char++;
		} else
		{
			format++;
			if	(*format == '\0')
				break;
			if	(*format == '%')
			{
				write(1, format, 1);
				print_char++;
			} else if (*format == 'c')
			{
				character = va_arg(args, int);
				my_putchar(character);
				print_char++;
			} else if (*format == 's')
			{
				str = va_arg(args, char *);
				print_char += my_puts(str);
			}
		} format++;
	} va_end(args);
	return (print_char);
}
