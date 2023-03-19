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
		if  (a == '9')
		{
			putchar (a);
			break;
		}
		putchar (a);
		putchar (',');
		putchar (' ');
	}
	return (0);
}
