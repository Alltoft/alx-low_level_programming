#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - check for memory
 * @b: size of memory
 * Return: the allocated memorie
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
