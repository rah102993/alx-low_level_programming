#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Printing all single digit numbers of base 10 starting from 0.
 * Return: 0 (Success)
 */

int main(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	putchar(r);
	putchar("\n");

	return (0);
