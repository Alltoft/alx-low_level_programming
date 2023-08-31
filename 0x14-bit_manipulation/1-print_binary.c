#include "main.h"

/**
 * print_binary - prints binary
 * @n: is the number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	i <<= (sizeof(unsigned long int) * 8 - 1);

	while (i > 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}
