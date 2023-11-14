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
			switch (*format)
			{
				case 'c':
					count += handle_char(args);
					break;
				case 's':
					count += handle_str(args);
					break;
				case 'd':
				case 'i':
					count += handle_number(args);
					break;
				case '%':
					count += handle_percent();
					break;
				default:
					my_putchar('%'), my_putchar(*format);
					count += 2;
					break;
			}
		} else
			my_putchar(*format), count++;
		format++;
	} va_end(args);
	return (count);
}
