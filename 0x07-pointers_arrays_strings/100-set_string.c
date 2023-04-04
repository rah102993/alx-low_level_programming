#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: a pointer to a pointer character
 * @to: a pointer cbaracter
 * Return: Always 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
	return (0);
}
