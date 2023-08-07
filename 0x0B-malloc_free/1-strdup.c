#include <stdlib.h>
#include "main.h"
#include <string.h>
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
	int n;

	if (str == NULL)
		return (NULL);
	n = strlen(str);
	f = (char *) malloc(sizeof(char) * (n + 1));
	if (f == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		f[i] = str[i];
		i++;
	}
	return (f);
}
