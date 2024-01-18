#include "main.h"
#include <stdlib.h>

/**
 * arry_range - function that creates an array of integers
 * @min: minimum value
 * @max: value
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);
}
