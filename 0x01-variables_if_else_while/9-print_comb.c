#include <stdio.h>

/**
 * main - printing numbers
 *
 * Return: 0
 */

int main(void)

{
	int a = '0';

	for (;a <= '8';)
	{
	putchar(a);
	a++;
	putchar(',');
	putchar(' ');
	}
	putchar('9');
	return (0);
}
