#include "main.h"
/**
 * *_strpbrk - searches a string
 * @s: first string
 * @accept: second string
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
