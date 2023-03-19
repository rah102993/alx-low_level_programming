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

	for (a = 1; a <= 9; a++)
	{
		putchar (a);
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
