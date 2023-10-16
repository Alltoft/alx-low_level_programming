#include "main.h"
/**
 * *_strchr - scan for a charachter
 * @s: a string
 * @c: the character to be found
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
