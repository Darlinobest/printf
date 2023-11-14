#include "main.h"
#include <stdarg.h>
/**
 * print_bin - converts binary
 * @var: arguments
 * Return: integer
 */

int print_bin(va_list var)
{	int flg = 0;
	int cnt = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(var, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			flg = 1;
		if (flg)
		{
			b = p >> (31 - i);
			my_putchar(b + 48);
			cnt++;
		}
			if (cnt == 0)
			{
				cnt++;
				my_putchar('0');
			}

	}
	return (cnt);
}
