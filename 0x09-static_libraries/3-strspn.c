#include "main.h"
/**
 * _strspn - program entry point
 * @s: input
 * @approve: input
 * Return: Always 0 (successful)
 */
unsigned int _strspn(char *s, char *approve)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; approve[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (approve[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n)
}

