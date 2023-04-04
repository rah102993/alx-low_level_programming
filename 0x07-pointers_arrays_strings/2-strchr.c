#include "main.h"
#include <unistd.h>

/**
 *_strchr - A function that locates a character in a string.
 *@s: string
 *@c: character
 *Return: Always 0 (Success)
 *
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
