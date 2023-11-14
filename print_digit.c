#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
int print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		return (my_putchar('-'));
	}
	else
	{
		num = n;
	}
	if (num == 0)
		return (my_putchar('0'));
	if (num / 10)
	{
		return (print_number(num / 10) + my_putchar((num % 10) + '0'));
	}
	return (my_putchar(num + '0'));
}
