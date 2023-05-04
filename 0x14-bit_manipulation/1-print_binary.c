#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: bit of an unsigned long int.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int a, count = 0;

	for (a = 63; a >= 0; a--)
	{
		m = n >> a;

		if (m & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

