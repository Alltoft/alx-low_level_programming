#include "main.h"
/**
 * *_strncpy - copies a string to another
 * @dest: original string
 * @src: copied string
 * @n: number of char copeis
 * Return: destptr
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *destptr = dest;

	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	while (n > 0)
	{
	*dest = '\0';
	dest++;
	n--;
	}
	*dest = '\0';
	return (destptr);
}
