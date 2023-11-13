#include "main.h"

/**
 * my_putchar - prints a single char
 * @c: character to be printed
 * Return: the char to the output
 */

int my_putchar(const char c)
{
	return (write(1, &c, 1));
}
