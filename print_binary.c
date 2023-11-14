#include "main.h"

int my_putchar(const char c);

/**
 * handle_binary - handles the specifier 'b'
 * @n: number in base 10 to be converted
 * Return: binary conversion
 */
int print_binary(unsigned int n)
{
	int count = 0;

	if (n == 0)
		return (my_putchar('0'));
	if (n / 2 != 0)
		count += print_binary(n / 2);
	return (my_putchar((n % 2) + '0') + count);
}
