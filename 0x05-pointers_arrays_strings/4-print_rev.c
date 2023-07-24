#include "main.h"
/**
 * print_rev - print the revers of an string
 * @s: the pointer of the string
 * Return: nothing
 */
void print_rev(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
	s++;
	a++;
	}
	while (a >= 0)
	{
	_putchar(*s);
	s--;
	a--;
	}
	_putchar('\n');
}
