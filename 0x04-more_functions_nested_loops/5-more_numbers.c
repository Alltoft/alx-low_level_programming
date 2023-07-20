#include "main.h"
/**
 * more_numbers - it prints numbers x10 times
 */
void more_numbers(void)
{
	int a = '0';
	int j = '0';

	while (j < 10)
	{
		while (a < 15)
		{
		_putchar(a);
		a++;
		}
	a = '0';
	_putchar('\n');
	j++;
	}
}
