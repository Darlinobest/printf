#include "main.h"

/**
 * print_unsigned - converts num to unsigned dec
 * @args: container to store arguments
 * Return: bytes/count of characters to be printed
 */

int print_unsigned(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (print_num(num));
}
