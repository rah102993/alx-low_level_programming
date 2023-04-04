#include "main.h"
#include <unistd.h>

/**
 *_memcpy - A function that copies memory area.
 *@dest: destination array
 *@src: source array
 *@n: size of array
 *Return: destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
