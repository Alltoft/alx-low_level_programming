#include "main.h"
/**
 * _print_rev_recursion - prints a string with recursion
 * @s: the string that needs to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
