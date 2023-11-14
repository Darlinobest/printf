#include "main.h"

/**
 * my_puts - prints a string
 * @s: string to be printed
 * Return: length of string printed
 */

void my_puts(char *s, int *count)
{
	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		my_putchar(*s);
		(*count)++;
		s++;
	}
}
