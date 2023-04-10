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

/**
 * main - a program that multiplies two numbers.
 * @argc: number of command-line arguments passed.
 * @argv: argument array.
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int result, num, num1;

	if (argc < 3 || argc > 3)
	{
		printf("Error");

		printf("\n");

		return (1);
	}

	num = _multiply(argv[1]);
	num1 = _multiply(argv[2]);
	result = num * num1;

	printf("%d", result);

	printf("\n");

	return (0);
}
