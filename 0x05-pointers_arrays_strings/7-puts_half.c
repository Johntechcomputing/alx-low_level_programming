#include <main.h>
/**
 * puts_half - prints half of a string
 * @str: String to be printed
 * Return: void
 */
void puts_half(char *str)
{
int i;
int k;
int count = 0;

for (i = 0; str[i] != '\0'; i++)
	count++;
	k = (count - 1) / 2;
for (i = k + 1; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putcahr('\n');
}
