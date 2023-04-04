#include "main.h"
#include <unistd.h>

/**
 *print_chessboard - A function that prints the chessboard.
 *@a: array
 *Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
