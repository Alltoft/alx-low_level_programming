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

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return i;
		}
		i++;
	}
	return i;
}
