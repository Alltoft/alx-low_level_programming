#include <stdlib.h>
#include "main.h"
void *malloc_checked(unsigned int b)
{
	char *n;
	unsigned int i = 0;

	n = malloc(sizeof(int) * b);
	if (n == NULL)
	{
		exit (98);
	}
	while (i < b)
	{
		n[i] = b;
		i++;
	}
	return (n);
}
