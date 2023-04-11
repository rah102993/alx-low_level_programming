#include "main.h"

/**
*_memset - a program to fill a block of memory with a particular value.
 *@s: Starting address of memory to be filled.
 *@b: Value to be filled.
 *@n: Number of bytes to be filled.
 *Return: (s) with new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
