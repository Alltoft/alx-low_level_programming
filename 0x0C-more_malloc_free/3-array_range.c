#include <stdlib.h>
#include "main.h"
/**
 * *array_range - array of range of integers
 * @min: minimum ineteger
 * @max: maximum integer
 * Return: the new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (0);

	while (min <= max)
	{
		arr[i] = min + 1;
		i++;
	}
	return (arr);
}
