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
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}