#include "main.h"
/**
 * print_square - it draws a square on the tieminal
 * @size: is the size of the square
 */
void print_square(int size)
{
	int a = 0;
	char b = 0;

	if (size > 0)
	{
	while (a < size)
	{
		while (b < size)
		{
		_putchar('#');
		b++;
		}
	b = 0;
	a++;
	_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
