#include "main.h"

/**
 * my_puts - prints a string
 * @s: string to be printed
 * Return: string count
 */

int my_puts(char *s)
{
	int count = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		my_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
