#include "main.h"

/**
 * handle_ptr - handles the specifier 'p'
 * @args: container to store arguments
 * Return: bytes/ characters printed
 */
int handle_ptr(va_list args)
{
	void *ptr;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
		return (my_puts("(nil)"));
	else
	{
		my_puts("0x");
		return (handle_hex_addr(ptr));
	}
}
/**
 * handle_hex_addr - prints the hex of a ptr
 * @ptr: ptr whose address needs to be printed
 * Return: bytes/characters printed
 */
int handle_hex_addr(void *ptr)
{
	int count = 0;
	unsigned long int addr;
	addr = (unsigned long int)ptr;

	if (addr == 0)
	{
		my_putchar('0');
		count++;
	}
	else
	{
		count += print_hex_recurs(addr);
	}
	return (count);
}
/**
 * print_hex_recurs - recursively prints hex rep of a num
 * @num: number to be printed
 * Return: bytes/characters printed
 */
int print_hex_recurs(unsigned long int num)
{
	int count = 0;

	if (num != 0)
	{
		count += print_hex_recurs(num / 16);
		count += my_putchar(hex_digit(num % 16));
	}
	return (count);
}
/**
 * hex_digit - converts int btw 0-15 to its hexa rep
 * @n: integer to be converted
 * Return: actual hexa character
 */
char hex_digit(int n)
{
	char c;
	c = (n < 10) ? (char)(n + '0') : (char)(n - 10 + 'a');
	return (c);
}
