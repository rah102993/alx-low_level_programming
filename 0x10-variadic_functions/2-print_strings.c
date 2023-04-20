#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int a;
	char *string;

	va_start(str, n);

	for (a = 0; a < n; a++)
	{
		string = va_arg(str, char*);

		if (string == NULL)
			printf("(nil)");

		else
			printf("%s", string);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
