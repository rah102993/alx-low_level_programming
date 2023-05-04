#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 *@b: a pointer to a binary string.
 *
 *Return: the converted number or,
 *0 if there is one or more chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int a;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		result = result << 1;
		if (b[a] == '1')
		{
			result = result | 1;
		}
	}
	return (result);
}
