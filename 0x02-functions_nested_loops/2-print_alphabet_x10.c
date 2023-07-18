#include "main.h"
/*
 * print_alphabet_x10 - Prints the English alphabet 10 times.
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
