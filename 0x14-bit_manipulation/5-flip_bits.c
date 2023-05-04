#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 *@n: first integer.
 *@m: second integer.
 *
 * Return: the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res != 0)
	{
		count += (xor_res & 1);
		xor_res >>= 1;
	}

	return (count);
}
