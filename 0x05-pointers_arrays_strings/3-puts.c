#include "main.h"
/**
 * _puts - it prints the string to stdout
 * @str: the string that needs to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
}
