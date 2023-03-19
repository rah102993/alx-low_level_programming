#include <stdio.h>

/**
 * main - Print combinations of 3
 *
 * Description: Separated by commas
 * Return: Always(0) Success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <= '9'; ++i)
	{
		for (j = '0'; j <= '9'; ++j)
		{
			for (k = '0'; k <= '9'; ++k)
			{
				putchar (i);
				putchar (j);
				putchar (k);
				putchar (',');
				putchar (' ');
			}
		}
	}
	return (0);
}
