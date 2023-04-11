#include "main.h"

/**
* _isalpha - A function that checks for alphabetic character.
* @c:character.
* Return: 1 if c is a letter, or 0 if not.
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
