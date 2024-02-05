#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array 
 * of integers using the Linear search algorithm
 * @array: 
*/

int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	while (n < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
		n++;
	}
	return (-1);
}
