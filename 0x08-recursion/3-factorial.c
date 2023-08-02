#include "main.h"
/**
 * factorial - factory a number
 * @n: the number needs to be factorialed
 * Return: Result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
