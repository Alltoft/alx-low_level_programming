#include "main.h"
/**
 * print_last_digit - prints the last difit of the given number
 * @c: is the variable that represents the number
 * Return: the value of the last digit x
 */
int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
	{
	x = x * (-1);
	}
	x = x * 11;
	_putchar(x);
	return (x);
}
