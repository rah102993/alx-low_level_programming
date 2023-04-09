#include <stdio.h>
#include "main.h"

/**
 * _multiply - a program that multiplies two numbers.
 * @s: string.
 * Return: Always 0 (Success).
 */

int _multiply(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	while (a < d && e == 0)
	{
		if (s[a] == '-')
		{
			++b;
		}
		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
			{
				f = -f;
				c = c * 10 + f;
				e = 1;
			}
			if (s[a + 1] < '0' || s[a + 1] > '9')
			{
				break;
			}
			e = 0;
		}
		a++;
	}
	if (e == 0)
	{
		return (0);
	}
	return (c);
}
