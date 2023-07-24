#include "main.h"
/**
 * puts2 - prints other character od the string
 * @str: the variable of string
 */
void puts2(char *str)
{
	int a = 0;

	while (*str != '\0')
	{
	if (a % 2 == 0)
	_putchar(*str);
	str++;
	a++;
	}
	_putchar('\n');
}
