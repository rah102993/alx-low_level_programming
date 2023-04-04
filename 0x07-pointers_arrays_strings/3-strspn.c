#include "main.h"
#include <unistd.h>

/**
 *_strspn - A function that gets the length of a prefix substring.
 *@s: a string
 *@accept: an array of acceptable characters
 *Return: Always 0 (Succes)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;

	while (*s)
	{
		for (int a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				b++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (b);
		}
		s++;
	}
	return (b);
}
