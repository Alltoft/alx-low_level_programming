#include "main.h"
/**
 * puts_half - prints half the string
 * @str: the variable of string
 */
void puts_half(char *str)
{
	int a = 0;
	int c;

	while (*str != '\0')
	{
	if (a % 2 == 0)
	{
	a = a / 2;
	str++;
	a++;
	c = str[a];
	}
	}
	while (*str != '\0')
	{
	if (*str > c)
	{
	_putchar(*str);
	str++;
	}
	}
	_putchar('\n');
}
