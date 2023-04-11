#include "main.h"

/**
* _islower -A function that is used to check whether
* a character is a lowercase letter or not.
* @c: the character to be checked.
* Return: 1 if c is lowercase, and 0 if not.
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
