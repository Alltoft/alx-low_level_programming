#include "main.h"
/**
 * *cap_string - changes lowercase to uppercase
 * @ptr: the pointer to the string
 * Return: the result (ptr)
 */
char *cap_string(char *ptr)
{
	char *origin = ptr;

	while (*ptr != '\0')
	{
	while (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
	*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
	*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
	*ptr == '}')
	{
	ptr++;
	}
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - 32;
	}
	ptr++;
	}
	return (origin);
}
