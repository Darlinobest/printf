#include "main.h"

/*
 * handle_format_spec - Handles a format 
 * specifier in the printf function.
 * @spec: The format specifier character.
 * @args: The va_list containing the variable arguments.
 * @count: Pointer to the count of characters printed.
 *
 * Description
 * This function handles the different 
 * format specifiers in the printf function.
 * It calls the corresponding handler function
 * for each specifier and updates the count of
 * characters printed accordingly.
 *
 * Return: The updated count of characters printed.
 */
int handle_format_spec(char spec, va_list args, int *count)
{
	switch (spec)
	{
		case 'c':
			*count += handle_char(args);
			break;
		case 's':
			*count += handle_str(args);
			break;
		case 'd':
		case 'i':
			*count += handle_number(args);
			break;
		case 'b':
			*count += handle_binary(args);
			break;
		case 'u':
			count += print_unsigned(args);
			break;
		case 'o':
			count += handle_octal(args);
			break;
		case 'x':
			count += handle_hex(args);
			break;
		case 'X':
			count += handle_upper_hex(args);
				break;
		case '%':
			*count += handle_percent();
			break;
		default:
			my_putchar('%'), my_putchar(spec);
			*count += 2;
			break;
	}
	return (*count);
}
