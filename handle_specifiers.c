#include "main.h"

/**
 * handle_spec - handles these specifiers %c%s%%
 * @args: argument list
 * @for_mat: converter specifier
 * Return: 0 upon success
 */

int handle_spec(va_list args, const char *for_mat)
{
	int count = 0;
	char *str, character;

	if (*for_mat == '%')
	{
		count += my_putchar('%');
	} else if (*for_mat == 'c')
	{
		character = va_arg(args, int);
		count += my_putchar(character);
	} else if (*for_mat == 's')
	{
		str = va_arg(args, char *);
		count += my_puts(str);
	}
	return (count);
}
