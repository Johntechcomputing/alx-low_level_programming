#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}

	for (; b < a; b++)
	{
		dest[b] = src[b];
	}

	dest[a] = '\0';

	return (dest);
}

