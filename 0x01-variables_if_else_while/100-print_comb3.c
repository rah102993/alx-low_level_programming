#include <stdio.h>

/**
 * main - Print combinations of 3
 *
 * Description: Separated by commas
 * Return: Always (0) Success
 *
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				break;
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
