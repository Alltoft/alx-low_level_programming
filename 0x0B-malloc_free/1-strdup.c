#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be duplicated.
 * Return: pointer to the duplicated string
 * or NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *f;
	int i = 0;

	f = malloc(sizeof(char) * *str);
	if (str == 0)
	{
		return (NULL);
	}
	else if (f == 0)
	{
		return (NULL);
	}
	else
	{
	while (i <= *str)
	{
		f[i] = str[i];
		i++;
	}
	return (f);
	}
	free(f);
}
