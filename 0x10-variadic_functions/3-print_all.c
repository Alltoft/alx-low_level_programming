/*#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>*/
/**
 * print_all - print everything
 * @format: list of types
 */
/*void print_all(const char * const format, ...)
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
}*/
 #include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
    int i = 0;
    char *str, *sep = "";

    va_list list;

    va_start(list, format);

    if (format)
    {
        while (format[i])
        {
            switch (format[i])
            {
                case 'c':
                    printf("%s%c", sep, va_arg(list, int));
                    break;
                case 'i':
                    printf("%s%d", sep, va_arg(list, int));
                    break;
                case 'f':
                    printf("%s%f", sep, va_arg(list, double));
                    break;
                case 's':
                    str = va_arg(list, char *);
                    if (!str)
                        str = "(nil)";
                    printf("%s%s", sep, str);
                    break;
                default:
                    i++;
                    continue;
            }
            sep = ", ";
            i++;
        }
    }

    printf("\n");
    va_end(list);
}
