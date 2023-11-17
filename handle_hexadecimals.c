#include "main.h"

/**
 * handle_upper_hex - converts num to uppercase hex
 * @args: container to store arguments
 * Return: bytes/ count of characters printed
 */

int handle_upper_hex(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (print_hexadecimal(num, 1));
}

/**
 * handle_hex - converts num to lwcase hex
 * @args: container to store arguments
 * Return: bytes of characters to be printed
 */

int handle_hex(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (print_hexadecimal(num, 0));
}
/**
 * print_hexadecimal - converts hex based on option
 * @num: number to be printed
 * @upcase: check to printed lwcase or upcase
 * Return: bytes/count to be printed
 */

int print_hexadecimal(unsigned int num, int upcase)
{
	char *hex_d, hex_buff_size[32];
	int i, count = 0;

	hex_d = upcase ? "0123456789ABCDEF" : "0123456789abcdef";
	if (num == 0)
	{
		my_putchar('0');
		count++;
	}
	else
	{
		for (i = 0; num != 0; i++)
		{
			hex_buff_size[i] = hex_d[num % 16];
			num /= 16;
		}
		for (i--; i >= 0; i--)
		{
			my_putchar(hex_buff_size[i]);
			count++;
		}
	}
	return (count);
}
