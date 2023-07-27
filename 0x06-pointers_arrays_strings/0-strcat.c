#include "main.h"
/**
 * *_strcat - it combains two strings
 * @dest: is the first string
 * @src: is the second string
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
	_putchar(*dest);
	dest++;
	}
	while (*src != '\0')
	{
	_putchar(*src);
	src++;
	}
	return (dest);
}
