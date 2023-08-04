#include "main.h"
/**
 * *_strncat - it combains two strings
 * @dest: is the first string
 * @src: is the second string
 * @n: number of charachters combined
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *destptr = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	*dest = '\0';
	return (destptr);
}
