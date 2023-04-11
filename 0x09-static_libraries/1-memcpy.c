#include "main.h"

/**
*_memcpy - A function that copies a block of memory
*from a location to another.
*@dest: location where memory is stored.
*@src: location where memory where is copied.
*@n: number of bytes.
*Return: copied memory with n byted changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
