#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10x  in lower case, followed by new line
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)

{
	char x = 'a';
	char j = 0;

	while (j < 10)
	{
	while (x <= 'z')
	{
	_putchar(x);
	x++;
	}
	x = 'a';
	_putchar('\n');
	j++;
	}
}
