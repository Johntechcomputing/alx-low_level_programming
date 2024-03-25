#include "main.h"
/**
 * _strncat - function cancatenating two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int b;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[j] = src[b];
	j++;
	b++;
	}
	dest[j] = '\0';
	return (dest);
}
