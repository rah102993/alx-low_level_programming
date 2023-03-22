#include <stdio.h>
/**
 * main - Program that finds and prints the sum of the even-valued terms.
 * Return: 0 (Success)
 */

int main(void)
{
	int i = 0;
	long a = 1, k = 2, sum = 'k';

	while (k + a < 4000000)
	{
	k += a;
	if (k % 2 == 0)
	sum += k;
	a = k - a;
	++i;
	}
	printf("%ld\n", sum);
	return (0);
}
