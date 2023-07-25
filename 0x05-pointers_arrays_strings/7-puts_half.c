#include "main.h"
/**
 * puts_half - prints half the string
 * @str: the variable of string
 */
void puts_half(char *str)
{
	int a = 0;
	int c;

	while (str[a] != '\0')
	{
	a++;
	}
	c = (a + 1) / 2;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
