#include <stdio.h>

/**
 * main - Alphabet game
 *
 * Return: (0)
 */

int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
	if (x != 'e')
	if (x != 'q')
	putchar(x);
	x++;
	}
	putchar('\n');
	return (0);
}
