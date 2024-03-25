#include "main.h"

/**
 * _memset - Prgram fills a block with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: Number of bytes to be changed
 *
 * Return: change array with new value fo n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
