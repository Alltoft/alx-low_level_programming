#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creats array
 * @size: is the size of the string
 * @c: is the character of the string
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	else if (str == 0)
	{
		return (NULL);
	}
	else
	{
		str = (char *) malloc(size * sizeof(char));
		while (i <= size)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
}
