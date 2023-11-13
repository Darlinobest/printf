#include "main.h"
/**
 * _putchar - writes a character c to the stdout
 * @c: the character to print
 * Return: on success 1.
 * on error, -1 is returned and error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
