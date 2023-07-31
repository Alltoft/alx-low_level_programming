#include "main.h"
/**
 * _strspn - gets the length of a prefix
 * @s: first string
 * @accept: second string
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 1;

	while (*accept != '\0')
	{
	if (*s == *accept)
	{
		return (i);
	}
	accept++;
	i++;
	}
	if (*s == *accept)
	{
		return ('\0');
	}
	return (0);
}
