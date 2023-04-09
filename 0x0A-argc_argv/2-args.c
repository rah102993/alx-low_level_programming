#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 *@argc: number of coomand-line arguments passed.
 *@argv: argument array.
 *Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int c = 0;

	for (; c < argc; c++)
	{
		printf("%s", argv[c]);

		printf("\n");
	}
	return (0);
}
