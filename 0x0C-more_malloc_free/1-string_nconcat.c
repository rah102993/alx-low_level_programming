#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: first string-to append to
 * @s2: second string-to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: NULL if the function fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a = 0, b = 0, c1 = 0, c2 = 0;

	while (s1 && s1[c1])
		c1++;
	while (s2 && s2[c2])
		c2++;

	if (n < c2)
		s = malloc(sizeof(char) * (c1 + n + 1));
	else
		s = malloc(sizeof(char) * (c1 + c2 + 1));

	if (!s)
		return (NULL);

	while (a < c1)
	{
		s[a] = s1[a];
		a++;
	}

	while (n < c2 && a < (c1 + n))
		s[a++] = s2[b++];

	while (n >= c2 && a < (c1 + c2))
		s[a++] = s2[b++];

	s[a] = '\0';

	return (s);
}
