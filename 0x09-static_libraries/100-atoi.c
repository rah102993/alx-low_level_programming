#include "main.h"

/**
* _atoi - A function that converts a string into an integer.
* @s: The string.
* Return: integer.
*/

int _atoi(char *s)
{
	int n = 1, i = 0;
	unsigned int b = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			n *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		b = (b * 10) + (s[i] - '0');
		i++;
	}
	b *= n;
	return (b);
}
