#include "main.h"
/**
 * reverse_array - it reverse an array
 * @a: is the array
 * @n: number of characters in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int c;

	while (i < n / 2)
	{
	c = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = c;
	}
}
