#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints alphabets in lower cases.
 *
 *Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
