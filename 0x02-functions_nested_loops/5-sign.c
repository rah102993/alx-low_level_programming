#include "main.h"

/**
 * print_sign - prints the sign of number
 * @a: the int to be checked
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	} else if (a == 0)
	{
		_putchar(48);
		return (0);
	} else if (a < 0)
	{
		_putchar('-');
	}
	return (-1);
}