#include "main.h"
/**
 * rev_string - print the revers of an string
 * @s: the pointer of the string
 * Return: nothing
 */
void rev_string(char *s)
{
	int a = 0;
	int c = 0;

	if (!c)
	{
	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	a++;
	}
	_putchar('\n');
	while (a > 0)
	{
	a--;
	s--;
	_putchar(*s);
	c = 1;
	}
	}
	_putchar('\n');
}
