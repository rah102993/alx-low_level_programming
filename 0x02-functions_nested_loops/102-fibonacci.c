#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
 * Return: 0 (Success)
 */

int main(void)
{
	int b = 0;
	long c = 1, f = 2;

	while (b < 50)
	{
	if (b == 0)
	printf("%ld", c);
	else if (b == 1)
	printf(", %ld", f);
	else
	{
	f += c;
	c = f - c;
	printf(", %ld", f);
	}
	++b;
	}
	printf("\n");

	return (0);
}

