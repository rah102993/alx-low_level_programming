#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 *@argc: number of command-line arguments.
 *@argv: argument array.
 *Return: Always 0 (Sucess).
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d", argc - 1);

	printf("\n");

	return (0);
}
