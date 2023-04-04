#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the chessboard.
 * @a: array
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int b, x, y;

	b = 0;
	x = 0;

	for (y = 0; y < size; y++)
	{
		b = b + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		x += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", b, x);
}
