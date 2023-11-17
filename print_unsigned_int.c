#include "main.h"

/**
 * print_num - prints an integer
 * @n: actual integer to be printed
 * Return: count of characters printed
 */

int print_num(unsigned int num)
{
	char num_buff[32];
	int count, i;

	if (num == 0)
	{
		my_putchar('0');
		return (1);
	}

	count = 0;
	i = 0;
	while (num != 0)
	{
		num_buff[i] = (num % 10) + '0';
		num /= 10;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		my_putchar(num_buff[i]);
		count++;
	}
	return (count);
}
