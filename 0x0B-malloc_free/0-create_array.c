#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and allocate char c
 * @size: array size
 * c: char to assign
 * Return: pointer to array, if fail NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
