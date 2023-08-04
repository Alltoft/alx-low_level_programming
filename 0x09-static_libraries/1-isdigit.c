#include "main.h"
/**
 * _isdigit - it checks if c is digit
 * @c: is the variable to check if it was digit
 * Return: 1 is c is digit, 0 if c is not digit
 */
int _isdigit(int c)
{
	while (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
