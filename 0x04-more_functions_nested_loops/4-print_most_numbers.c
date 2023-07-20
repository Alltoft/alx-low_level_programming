#include "main.h"
/**
 * print_most_numbers - it prints numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
	if (a != '2' && a != '4')
	_putchar(a);
	a++;
	}
	_putchar('\n');
}
