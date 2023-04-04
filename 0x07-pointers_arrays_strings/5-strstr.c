#include "main.h"
#include <unistd.h>

/**
 *_strstr - A function that locates a substring.
 *@haystack: string
 *@needle: substring
 *Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
const char *x, *y, *z;

	for (x = haystack; *x != '\0'; ++x)
	{
		y = x;
		z = needle;
		while (*z != '\0' && *y == *z)
		{
			++y;
			++z;
		}
		if (*z == '\0')
		{
			return ((char *)x);
		}
	}

	return (0);
}
