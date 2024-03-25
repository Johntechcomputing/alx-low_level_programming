#include "main.h"

/**
 * _memcpy - function copying memory area
 * @dest: where it is stored in memory
 * @src: where it is copied in memory
 * @n: Integer
 *
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int i = n;

	for (; t < i; t++)
	{
		dest[t] = src[t];
		n--;
	}
	return (dest);
}
