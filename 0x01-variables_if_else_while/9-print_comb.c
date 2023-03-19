#include <stdio.h>

/**
* main - prints numbers with a comma
*
* Description: The numbers are all single digits
* Return: Always(0) Success
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
