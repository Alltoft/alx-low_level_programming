#include "main.h"
 /**
  * print_alphabet_x10 - print ten times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char x = 'a';
	char j = 0;

	while (j <= 10)
	{
	while (x <= 'z')
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
	j++;
	}
}
