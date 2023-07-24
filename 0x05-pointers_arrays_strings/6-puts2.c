#include "main.h"
/**
 * puts2 - prints other character od the string
 * @str: the variable of string
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
	if (*str % 2 == 0)
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
