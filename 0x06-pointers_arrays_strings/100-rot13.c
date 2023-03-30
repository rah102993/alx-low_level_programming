#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int a;
	int b;
	char letters1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotate[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == letters1[b])
			{
				s[a] = rotate[b];
				break;
			}
		}
	}
	return (s);
}
