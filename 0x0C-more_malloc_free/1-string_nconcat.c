#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of chars from string 2
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, h, j, x = 0;
	char *ss;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	h = strlen(s1);
	j = strlen(s2);
	ss = malloc(sizeof(char) * ((h + j + 1)));
	if (ss == NULL)
		return (NULL);

	if (n <= j)
	{
	while (i < (h + n))
	{
		if (i < h)
			ss[i] = s1[i];

		else if (i >= h && x < n)
		{
			ss[i] = s2[x];
			x++;
		}
		i++;
	}
	ss[h + n] = '\0';
	}
	if (n > j)
	{
		while (i < (h + j))
		{
		if (i < h)
			ss[i] = s1[i];

		else if (i >= h && x < n)
		{
			ss[i] = s2[x];
			x++;
		}
		i++;
        	}
	ss[h + j] = '\0';
	}
	return (ss);
}
