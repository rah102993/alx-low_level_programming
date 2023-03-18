#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints from 0 to f.
 * Return: 0 (Success)
 */
int main(void)
{
	char low;

	for (low = '0'; low <= 'f'; low++)
	{
		putchar(low);
	};
	putchar('\n');
	return (0);
}
