#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: character.
 * Return: NULL if 0.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
