#include "main.h"
/**
 * *_memcpy - copies from another array
 * @dest: the destined array
 * @src: origin array
 * @n: number of bytes copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
