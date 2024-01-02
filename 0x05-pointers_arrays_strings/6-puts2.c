#include "main.h"
/**
 * puts2  - function to print every other character of a string
 * starts with first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}

	for (i = 0 ; i <= j ; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
