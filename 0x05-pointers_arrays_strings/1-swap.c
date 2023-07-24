#include "main.h"
/**
 * swap_int - swaps the address betwen two var
 * @a: the var that needs to swap
 * @b: the the var to swap with a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
