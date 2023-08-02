#include "main.h"
/**
 * _sqrt_recursion - the square root
 * @n: the number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	{
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion(n / 2) + 1);
	}
}
