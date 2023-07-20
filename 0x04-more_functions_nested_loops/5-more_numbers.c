#include "main.h"
/**
 * more_numbers - it prints numbers x10 times
 */
void more_numbers(void)
{
	int a = 0;
	int j = 0;

	while (j < 10)
	{
		while (a < 15)
		{
		if (a >= 10)
		{
		_putchar('1');
		}
		_putchar(a % 10 + '0');
		a++;
		}

	a = 0;
	_putchar('\n');
	j++;
	}
}
