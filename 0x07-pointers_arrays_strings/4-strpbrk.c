#include "main.h"
#include <unistd.h>

/**
 *_strpbrk - a function that searches a string for any of a set of bytes.
 *@s: string
 *@accept: accepted characters
 *Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	const char *x, *y;

	for (x = s; *x != '\0'; ++x)
	{
		for (y = accept; *y != '\0'; ++y)
		{
			if (*x == *y)
			{
				return ((char *)x);
			}
		}
	}
	return (0);
}
