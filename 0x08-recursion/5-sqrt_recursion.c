#include "main.h"

/**
 *_square_recursion - a function that returns the natural square root.
 *@num: number to be checked.
 *@root: natural square root.
 *Return: Returns a square.
 */

int _square_recursion(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	else
		return (_square_recursion(num, root + 1));
}
/**
 *_sqrt_recursion - a function that returns the natural square root.
 *@n: number to find the square root.
 *Return: Returns square root.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_square_recursion(n, root));
}
