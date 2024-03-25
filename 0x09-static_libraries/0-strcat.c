#include "main.h"

/**
 * _strcat(char *dest, char *src)
 * @dest: entered value
 * @src: entered value
 *
 * Return: void
 */
char *_strcat(char, *dest, char *src)
{
	int j;
	int b;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[j] = src[b];
		j++;
		b++;
	}
	dest[j] = '\0';
	return (dest);
}
