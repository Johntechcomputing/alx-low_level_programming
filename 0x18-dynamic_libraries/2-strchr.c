#include "main.h"

/**
 * _strchr - entry point of program
 * @s: input value
 * @c: input value
 * Return: Always 0 (successful)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
