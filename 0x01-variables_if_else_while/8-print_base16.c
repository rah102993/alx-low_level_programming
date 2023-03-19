#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints from 0 to f.
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 48; a < 58; a++)
	{
		putchar (a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar (a);
	};
	putchar ('\n');
	return (0);
}
