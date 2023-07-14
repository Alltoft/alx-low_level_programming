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
	putchar(x);
	x++;
	}
	char y = 'A';

	while (y <= 'Z')
	{
	putchar(y);
	y++;
	}
	putchar('\n');
	return (0);
}
