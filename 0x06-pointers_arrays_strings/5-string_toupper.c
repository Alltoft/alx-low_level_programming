#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 * @ptr: the pointer to the string
 * Return: the result (ptr)
 */
char *string_toupper(char *ptr)
{
	char *origin = ptr;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - 32;
	}
	ptr++;
	}
	return (origin);
}
