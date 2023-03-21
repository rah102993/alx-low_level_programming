#include <unistd.h>
#include "main.h"

/**
 * alphabet - A function that prints the alphabets in lowercase.
 * Return: Always Succesful 0;
 *
 */
int alphabet(void)
{
	int a;
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
