#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: an array of arguments.
 *Return: Always 0 (Success).
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
