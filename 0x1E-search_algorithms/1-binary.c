#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if value is not present
 *         or if array is NULL.
 *
 * Description: Prints the array being searched every time it changes.
 *              Array is assumed to be sorted in ascending order.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t n = 0, index = 0;
	int mid = 0;

	if (array == NULL)
		return (-1);

	while (n <= size - 1)
	{
		index = n;
		printf("Searching in array: ");
		while (index < size - 1)
		{
			printf("%d, ", array[index]);
			index++;
		}
		printf("%d\n", array[index]);
		mid = (n + size - 1) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			n = array[mid] + 1;
		}
		else
		{
			size = array[mid];
		}
	}
	return (-1);
}
