#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of the value, or -1 if not found.
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
