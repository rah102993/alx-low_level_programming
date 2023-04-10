#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * pos_add - a program that adds positive numbers.
 *@str: array string.
 *Return: Always 0 (Success)
 */

int pos_add(char *str)
{
	unsigned int n = 0;

	while (n < strlen(str))
	{
		if (!isdigit(str[n]))
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/**
 * main - a program that prints 1 if it encounters a number.
 * @argc: number of command-line arguments passed.
 * @argv: argument array.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum = 0;

	a = 1;
	while (a < argc)
	{
		if (pos_add(argv[a]))
		{
			b = _multiply(argv[a]);
			sum += b;
		}
		else
		{
			printf("Error\n");

			return (1);
		}
		a++;
	}
	printf("%d\n", sum);

	return (0);
}
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
			}
			c = c * 10 + f;
			e = 1;
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
