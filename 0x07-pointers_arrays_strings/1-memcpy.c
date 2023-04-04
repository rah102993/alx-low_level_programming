#include "main.h"
/**
 *_memcpy - A function that copies memory area.
 *@dest: destination array
 *@src: source array
 *@n: size of array
 *Return: destination array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
