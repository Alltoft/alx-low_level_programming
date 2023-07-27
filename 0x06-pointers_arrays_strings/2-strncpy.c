#include "main.h"
/**
 * *_strncpy - copies a string
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
	while (*dest != '\0' && n <= 0)
	{
	dest++;
	}
	*dest = '\0';
	return (destptr);
}
