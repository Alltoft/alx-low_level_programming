#include "main.h"
/**
 * print_line - it draws a diagonal on the tieminal
 * @n: is the number of times the character \ should be printed
 */
void print_line(int n)
{
	int a = 0;
	char b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
			_putchar(' ');
			b++;
			}
		b = 0;
		_putchar('\\');
		a++;
		_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
