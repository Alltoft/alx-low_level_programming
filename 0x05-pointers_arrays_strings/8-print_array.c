#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: the array
 * @n: is the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
	printf("%d, ", a[i]);
	i++;
	}
	i = n;
	printf("%d\n", a[i]);
}
