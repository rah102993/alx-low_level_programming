#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabets in lowercase.
 * Return: Always Succesful 0;
 *
 */
int print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	return (0);
}
