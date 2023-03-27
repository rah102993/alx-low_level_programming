#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int opposite = 0;
	int z;

	while (s[opposite] != '\0')
	opposite++;
	for (z = 0; z < opposite; z++)
	{
		opposite--;
		rev = s[z];
		s[z] = s[opposite];
		s[opposite] = rev;
	}
}
