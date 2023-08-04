#include "main.h"
/**
 * *_strcat - it combains two strings
 * @dest: is the first string
 * @src: is the second string
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *destptr = dest;

	while (*dest != '\0')
	{
	dest++;
	}
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	dest = '\0';
	return (destptr);
}
