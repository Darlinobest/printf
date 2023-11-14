#include "main.h"

/**
 * _printf - print format to std output
 * @format: type of argument to be printed
 * @...: a variable number of arguments
 * Return: formatted string upon success
 */

int _printf(const char *format, ...)
{
	char *str;
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
					my_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					str = va_arg(args, char *);
					my_puts(str);
					count += strlen(str);
					break;
				case '%':
					my_putchar('%');
					count++;
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
