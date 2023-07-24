#include "main.h"
/**
 * print_rev - print the revers of an string
 * @s: the pointer of the string
 * Return: nothing
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
	s++;
	}
	while (*s > 0)
	{
	s--;
	_putchar(*s);
	}
}
