#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element.
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *clc;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = nmemb * size;
	clc = malloc(t);

	if (clc == NULL)
		return (NULL);
	memset(clc, 0, t);
return (clc);
}
