#include "main.h"
/**
 * print_rev - print the revers of an string
 * @s: the pointer of the string
 * Return: nothing
 */
void print_rev(char *s)
{
	*s = '\0';
	while (*s < '\0')
	{
	_putchar(*s);
	s--;
	}
}
