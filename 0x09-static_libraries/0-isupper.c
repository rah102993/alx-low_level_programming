#include "main.h"

/**
* _isupper - a program that checks whether alphabets are
*upper case or not.
*@c: character to check
*Return: 0 or 1
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
