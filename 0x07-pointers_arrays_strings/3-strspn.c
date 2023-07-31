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
	int j = 0;
	while (accept[j] != '\0')
	{
	i = 0;
	while (s[i] != '\0')
	{
	if (s[i] == accept[j])
	{
		return (i);
	}
	i++;
	}
	j++;
	}
	if (*s == *accept)
	{
		return ('\0');
	}
	return (0);
}
