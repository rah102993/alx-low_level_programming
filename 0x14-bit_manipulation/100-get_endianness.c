#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *s = (char *)&a;

	if (*s == 1)
		return (1);
	else
		return (0);
}
