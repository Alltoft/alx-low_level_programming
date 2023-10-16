#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: is the variable replaced by number
 * Return: c when number is less than 0
 */
int _abs(int c)
{
	if (c < 0)
	c = c * (-1);
	return (c);
}
