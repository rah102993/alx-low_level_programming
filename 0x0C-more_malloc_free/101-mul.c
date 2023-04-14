#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERRMSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string.
 * Return: 0 if a non-digit is found, 1 if not.
 */

int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string.
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - checks for errors in main.
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: always 0 (Success).
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, b, digit1, digit2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	res = malloc(sizeof(int) * l);
	if (!res)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		res[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		digit1 = s1[l1] - '0';
		b = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			digit2 = s2[l2] - '0';
			b += res[l1 + l2 + 1] + (digit1 * digit2);
			res[l1 + l2 + 1] = b % 10;
			b /= 10;
		}
		if (b > 0)
			res[l1 + l2 + 1] += b;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
