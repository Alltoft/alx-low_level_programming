#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *ss;
	int n;
	int j;
	int x = 0;

	n = strlen(s1);
	j = strlen(s2);
	ss = (char *) malloc(sizeof(char) * ((n + 1) + (j + 1)));
	if (ss == NULL)
		return (NULL);

	while (i < (n + 1) || (i >= (n + 1) && i <= (j + 1)))
	{
		if (i < n)
			ss[i] = s1[i];

		else if (i >= n)
		{
			ss[i] = s2[x];
			x++;
		}
		i++;
	}
	return (ss);
}
