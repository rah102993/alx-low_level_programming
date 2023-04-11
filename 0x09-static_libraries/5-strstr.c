#include "main.h"

/**
* _strstr - A function that takes two strings as an argument
* and finds the first occurrence of the sub-string in the string.
* @haystack: input.
* @needle: input.
* Return: Always 0 (Success).
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
