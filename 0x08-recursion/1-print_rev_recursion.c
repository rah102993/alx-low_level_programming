#include "main.h"

/**
 *_print_rev_recursion - a function that prints a string in reverse.
 *
 *@s: string to be recursed in reverse
 *
 *Return Nothing
 */

void _print_rev_recursion(char *s)
{
	char* rev = s + 1;

	if (*rev != '\0')
	{
		_print_rev_recursion(rev);
	}
	else if (rev == NULL)
	{
		return;
	}
	_putchar(*rev);
}
