#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: the two concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int m = 0, n = 0, p = 0, t = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[m])
		m++;

	while (s2[n])
		n++;

	t = m + n;
	s = malloc((sizeof(char) * t) + 1);

	if (s == NULL)
		return (NULL);

	n = 0;

	while (p < t)
	{
		if (p <= m)
			s[p] = s1[p];

		if (p >= m)
		{
			s[p] = s2[n];
			n++;
		}

		p++;
	}

	s[p] = '\0';
	return (s);
}
