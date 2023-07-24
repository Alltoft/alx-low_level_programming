#include "main.h"
/**
 * reset_to_98 - it resets the variable  to 98
 * @n: the pointer that will change the variable
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int p;

	n = &p;
	*n = 98;
}
