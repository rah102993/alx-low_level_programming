#include "main.h"

/**
 *_strlen_recursion - a function that returns the length of a string.
 *@s: string to be recursed
 *Return: Length of the string
 *
 */

int _strlen_recursion(char *s)
{
	char len = s + 1;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(len));
	}
	else
	{
		return (1);
	}
}
