#include "main.h"
#include <stdlib.h>

/**
 * _memset - a function which fills memory with a constant byte.
 * @s: memory area to be filled
 * @b: char
 * @n: number of times to copy b
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array of nmemb.
 * @nmemb: number of elements in the array.
 * @size: size of every element.
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
