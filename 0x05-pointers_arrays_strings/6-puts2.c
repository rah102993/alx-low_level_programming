#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longi = 0;
	int b = 0;
	char *x = str;
	int a;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	b = longi - 1;
	for (a = 0 ; a <= b ; a++)
	{
		if (a % 2 == 0)
	{
		_putchar(str[a]);
	}
	}
	_putchar('\n');
}
