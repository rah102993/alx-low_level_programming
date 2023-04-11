#include "main.h"

/**
 * _strpbrk - A function that inds the first character in the string 's'
 * that matches any character in 'accept'
 * @s: input.
 * @accept: input.
 * Return: Always 0 (Success).
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
		return (s);
		}
		s++;
	}

		return ('\0');
}
