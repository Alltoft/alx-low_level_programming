#include "function_pointers.h"
/**
 * array_iterator - function an array
 * @array: the array that is an array
 * @size: the size of the array
 * @action: is a pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
		return;
	while (i < size)
	{
	action(array[i]);
	i++;
	}
}
