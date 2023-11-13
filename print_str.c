#include "main.h"

/**
 * my_puts - prints a string
 * @s: string to be printed
 * Return: length of string printed
 */

int my_puts(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		my_putchar(s[length]);
	}
	return (length);
}
