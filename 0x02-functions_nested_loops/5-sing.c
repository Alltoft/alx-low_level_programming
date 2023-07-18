#include "main.h"
/**
 * print_sign - checks if c is grater, less or equals 0
 * @n: the variable replaced by 0
 * Return: 1 if n grater than 0, 0 if n is 0, -1 if n less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	if (n < 0)
	{
	_putchar('-');
	return (1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
