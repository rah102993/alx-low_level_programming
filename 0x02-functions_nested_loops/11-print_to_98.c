#include "main.h"

/**
 * print_to_98 - prints all the natural numbers from n to 98,
 * followed by a new line.
 * @n: print from this number
 */
void print_to_98(int n)
{
	int a;
	int b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
		if (a != 98)
			_putchar(a);
		else if (a == 98)
		{
			_putchar(a);
			_putchar('\n');
		}
		}
	} else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
				_putchar(b);
			else if (b == 98)
			{
				_putchar(b);
				_putchar('\n');
			}
		}
	}
}
