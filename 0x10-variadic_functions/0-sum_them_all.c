#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all numbers
 * @n: number of numbers
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int x = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		x = x + va_arg(args, int);
		i++;
	}
	va_end(args);
	return (x);
}
