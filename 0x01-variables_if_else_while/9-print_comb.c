#include <stdio.h>

/**
* main - prints numbers with a comma
*
* Description: The numbers are all single digits
* Return: Always(0) Success
*/

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar (a);
		if (a > 57)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
