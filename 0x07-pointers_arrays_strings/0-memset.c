#include "main.h"
/**
 *_memset - A function that fills memory with a constant byte.
 *@s: pointer to the array location
 *@b: value to be entered
 *@n: size of the array
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
