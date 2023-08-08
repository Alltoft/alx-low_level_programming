#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Allocates memory for a
 * two-dimensional array of integers
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: A pointer to the allocated memory
 * or NULL if memory allocation
 * fails or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
int **ss;
int n = 0;

if (width <= 0 || height <= 0)
	return (NULL);

ss = malloc(height * sizeof(int *));
if (ss == NULL)
	return (NULL);

while (n < height)
{
	ss[n] = malloc(width * sizeof(int));
	if (ss[n] == NULL)
	{
	while (n > 0)
	{
		n--;
		free(ss[n]);
	}
	free(ss);
	return (NULL);
	}
	n++;
}
return (ss);
}
