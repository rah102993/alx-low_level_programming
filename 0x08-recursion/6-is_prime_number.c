#include "main.h"

/**
 *_prime - a function that returns 1 if the input integer
 * is a prime number otherwise return 0.
 *@a: number to divide by.
 *@b: number used to check if its divisible by other numbers.
 *Return: Return 1 or 0.
 */

int _prime(int b, int a)
{
	int i;

	i = b % a;

	if (i == 0)
		return (0);
	else if (a == (b / 2))
		return (1);
	else
		return (_prime(b, a + 1));
}

/**
 *is_prime_number - a function that checks if a number is a prime number.
 *@n: the number checked as prime.
 *Return: 1 or 0.
 */

int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
		return (0);
	else if  (n >= 2 && n <= 3)
		return (1);
	else
		return (_prime(n, a));
}
