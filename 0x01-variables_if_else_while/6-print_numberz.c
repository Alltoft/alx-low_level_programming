#include <stdio.h>

/**
 * main - printing numbers
 *
 * Return: 0
 */

int main(void)

{
	int a = '0';

	for (a = '0'; a <= '9';)
	{
	putchar(a);
	a++;
	}
	putchar('\n');
	return (0);
}
