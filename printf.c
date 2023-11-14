#include "main.h"

/**
 * _printf - print format to std output
 * @format: type of argument to be printed
 * @...: a variable number of arguments
 * Return: formatted string upon success
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	char *str;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			my_putchar(*format), count++;
		} else
		{
			format++;
			if (*format == '%')
			{
				my_putchar('%'), count++;
			} else if (*format == 'c')
			{
				my_putchar(va_arg(args, int)), count++;
			} else if (*format == 's')
			{
				str = va_arg(args, char *);
				my_puts(str, &count);
			}
		} format++;
	} va_end(args);
	return (count);
}
