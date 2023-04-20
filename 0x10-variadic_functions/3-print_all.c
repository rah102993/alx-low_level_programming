#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to functions.
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *any, *s = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", s, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(all, double));
					break;
				case 's':
					any = va_arg(all, char *);
					if (!any)
						any = "(nil)";
					printf("%s%s", s, any);
					break;
				default:
					a++;
					continue;
			}
			s = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(all);
}
