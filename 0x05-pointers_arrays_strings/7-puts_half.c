#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, n = (length_of_the_string - 1)/2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int len = 0;
	int half, j;

	while (str[len] != '\0'
	{
		len++;
	}

	half = (len - 1) / 2;

	for (j = (half + 1); j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n')
}
