#include "main.h"
/**
 * *_strcpy - it copys a string into a buffer
 * @dest: is where the string will be cpied
 * @src: is the string
 * Return: returns the ptr
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (ptr);
}
