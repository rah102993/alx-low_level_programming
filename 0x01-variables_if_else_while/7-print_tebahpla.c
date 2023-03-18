#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints the lowercase alphabet in reverse.
 * Return: 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	{
		putchar(low);
	};
	return (0);
}
