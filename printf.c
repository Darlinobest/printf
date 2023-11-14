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

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count = handle_format_spec(*format, args, &count);
		} else
			my_putchar(*format), count++;
		format++;
	} va_end(args);
	return (count);
}
