#include "main.h"
/**
 * _strlen_recursion - counts a string length
 * @s: the string
 * Return: the linght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
