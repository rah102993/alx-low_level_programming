#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - A function that prints the alphabets in lowercase.
 * Return: Always Succesful 0;
 *
 */
int print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
