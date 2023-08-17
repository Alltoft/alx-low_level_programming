#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int x = 0;
	va_list (args);

	va_start (args, n);
	while (i < n)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
