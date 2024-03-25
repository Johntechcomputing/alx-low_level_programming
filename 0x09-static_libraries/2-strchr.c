#include "main.h"

/**
 * _strchr - entry point of program
 * @s: input value
 * @c: input value
 * Return: Always 0 (successful)
 */
char *_strchr(char *s, char *c)
{
	int j = 0;
	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
