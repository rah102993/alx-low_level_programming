#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: bit of an unsigned long int.
 */
void print_binary(unsigned long int n)
{
	int a;
	unsigned long int m = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	for (a = 0; a < sizeof(unsigned long int) * 8; a++)
	{
		if (n & m)
			putchar('1');
		else
			putchar('0');

		m = m >> 1;
	}
	putchar('\n');
}
