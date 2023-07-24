#include "main.h"
/**
 * rev_string - print the revers of an string
 * @s: the pointer of the string
 * Return: nothing
 */
void rev_string(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
	s++;
	a++;
	}
	while (a > 0)
	{
	a--;
	s--;
	}
	_putchar('\n');
}
