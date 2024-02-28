#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The binary number as a string.
 *
 * Return: The converted number, or 0 if:
 * - b is NULL
 * - b contains characters other than '0' or '1'
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b++ - '0');
	}

	return (result);
}
