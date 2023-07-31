#include "main.h"
/**
 * *_memset - fills memory with a comstant byte.
 * @s: the array
 * @b: the variablr that will be changed with
 * @n: bytes of memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}

