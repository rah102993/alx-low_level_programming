#include "main.h"
#include <stddef.h>

/**
* _strchr - A function that locates the last occurrence of
* a character in a string and returns a pointer to it.
* @s: String.
* @c: Character to be searched.
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
