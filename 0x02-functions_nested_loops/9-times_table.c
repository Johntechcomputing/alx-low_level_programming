#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: empty output
 */

void times_table(void)

{
	int x, j, z, u, d;

	for (x = 0; x <= 9; x++)
	{
	for (j = 0; j <= 9; j++)
	{
	z = x * j;
	if (z > 9)
	{
	u = z % 10;
	d = (z - u) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(u + '0');
	}
	else
	{
	if (j != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}
