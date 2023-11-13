#include "main.h"

/**
 * _printf - print format to std output
 * @format: type of argument to be printed
 * @...: a variable number of arguments
 * Return: formatted string upon success
 */

int _printf(const char *format, ...)
{
	unsigned int i, str_len = 0, count = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (*format == '\0')
			break;
		if (format[i] != '%')
		{
			my_putchar(format[i]);
		} else if (format[i + 1] == '%')
		{
			my_putchar('%');
		} else if (format[i + 1] == 'c')
		{
			my_putchar(va_arg(args, int));
			i++;
		} else if (format[i + 1] == 's')
		{
			my_puts(va_arg(args, char *));
			count += (str_len - 1);
			i++;
		}
		count++;
	} va_end(args);
	return (count);
}
