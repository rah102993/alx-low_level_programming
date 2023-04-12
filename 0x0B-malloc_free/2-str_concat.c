#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *@s1: string input one.
 *@s2: string input two.
 *Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	c = malloc(sizeof(char) * (a + b + 1));

	if (c == NULL)
		return (NULL);
	a = b = 0;
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		c[a] = s2[b];
		a++, b++;
	}
	c[a] = '\0';
	return (c);
}
