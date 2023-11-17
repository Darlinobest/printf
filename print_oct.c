#include "main.h"

/**
 * print_octal - converts to octal
 * @arg: argument
 * Return: count
 */

int handle_octal(va_list arg)
{
	int i, count = 0;
	int *oct;
	unsigned int n = va_arg(arg, unsigned int);
	unsigned int tmp = n;

	while (n / 8 != 0)
	{
		n = n / 8;
		count++;
	}
	count++;
	oct = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		oct[i] = tmp % 8;
		tmp = tmp / 8;
	}
	for (i = count - 1; i >= 0; i--)
		my_putchar(oct[i] + '0');
	free(oct);
	return (count);

}
