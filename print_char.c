#include "main.h"

/**
 * my_putchar - prints a single char
 * @c: character to be printed
 * Return: the char to the output
 */

int my_putchar(const char c)
{
	int count = 0;

	count += write(1, &c, 1);
	return (count);
}
