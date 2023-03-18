#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - A program that prints all single umbers of base ten.
* Return: 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
