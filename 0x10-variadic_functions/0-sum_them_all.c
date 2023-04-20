#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters passed.
 * Return: O if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ad, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ad, int);
	va_end(ad);

	return (sum);
}
