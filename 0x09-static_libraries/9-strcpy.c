#include "main.h"

/**
* char *_strcpy - A function that copies the string pointed to by src.
* @dest: Where its copied to.
* @src: Where its copied from.
* Return:String.
*/

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int a = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; a < l ; a++)
	{
		dest[a] = src[a];
	}
	dest[l] = '\0';
	return (dest);
}
