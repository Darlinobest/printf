#include "main.h"

/**
 * print_decimal - prints integer
 * Return: returns an integer
 */
int print_decimal(int n)
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
	{
		return (my_putchar('0'));
	}
	if (num / 10)
	{
	return (print_number(num / 10) + my_putchar((num % 10) + '0'));
	}
	return (my_putchar(num + '0'));
}


/**
 * print_octal - converts to octal
 * @arg: argument
 * Return: count
 */

int print_octal(va_list arg)
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
