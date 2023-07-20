#include "main.h"
/**
 * print_line - it prints a stright line
 * @n: is the number of times the character _ should be printed
 */
void print_line(int n)
{
	int a = '_';

	if (n > 0)
	{
		while (a <= n)
		{
			_putchar(a);
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
