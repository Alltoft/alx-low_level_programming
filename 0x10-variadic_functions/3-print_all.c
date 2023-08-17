#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print everything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *x;

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if ((format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's') && i != 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(args, double));
				break;
			case 's':
				x = va_arg(args, char *);
				if (x != NULL)
				{
					printf("%s", x);
					break;
				}
				printf("(nil)");
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
