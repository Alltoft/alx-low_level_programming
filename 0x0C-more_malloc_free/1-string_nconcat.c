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
	unsigned int i = 0;
	char *ss;
	unsigned int h;
	unsigned int j;
	unsigned int x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	h = strlen(s1);
	j = strlen(s2);
	ss = malloc(sizeof(char) * ((h + j + 1)));
	if (ss == NULL)
		return (NULL);

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
	if (n <= j)
		ss[h + n] = '\0';
	if (n > j)
		ss[h + j] = '\0';
	return (ss);
}
