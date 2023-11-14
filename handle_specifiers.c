#include "main.h"

/**
 * handle_char - handles the specifier 'c'
 * @args: container to store arguments
 * Return: bytes/ character to be printed
 */

int handle_char(va_list args)
{
	my_putchar(va_arg(args, int));
	return (1);
}

/**
 * handle_str - handles the specifier 's'
 * @args: container to store arguments
 * Return: bytes/ character to be printed
 */

int handle_str(va_list args)
{
	return (my_puts(va_arg(args, char *)));
}

/**
 * handle_percent - handles the specifier '%'
 * Return: bytes/ character to be printed
 */
int handle_percent(void)
{
	my_putchar('%');
	return (1);
}

/**
 * handle_number - handles the specifiers 'd' and 'i'
 * @args: container to store arguments
 * Return: bytes/ character to be printed
 */

int handle_number(va_list args)
{
	return (print_number(va_arg(args, int)));
}
/**
 * handle_number - handles the specifiers 'd' and 'i'
 * @args: container to store arguments
 * Return: bytes/ character to be printed
 */

int handle_binary(va_list args)
{
	return (print_binary(va_arg(args, unsigned int)));
}
