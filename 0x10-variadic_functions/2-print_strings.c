#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints printers
 * @separator: the separator
 * @n: the n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *x;

	va_list(args);

	va_start(args, n);

	if (separator == NULL)
		separator = "";
	while (i < n)
	{
		if (i != 0)
			printf("%s", separator);
		x = va_arg(args, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
	i++;
	}
	printf("\n");
	va_end(args);
}
