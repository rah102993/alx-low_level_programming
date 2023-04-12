#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: integer input.
 * @av: double pointer array.
 * Return: NULL
 */

char *argstostr(int ac, char **av)
{
	int a, n, r = 0, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			l++;
	}
	l += ac;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (n = 0; av[a][n]; n++)
	{
		s[r] = av[a][n];
		r++;
	}
	if (s[r] == '\0')
	{
		s[r++] = '\n';
	}
	}
	return (s);
}
