#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int j = 0;
	int b = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[b] != '\0')
	{
		dest[j] = src[b];
		j++;
		b++;
	}

	dest[j] = '\0';

	return (dest);
}
