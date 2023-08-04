#include "main.h"
/**
 * *_strstr - locates a susbdtring
 * @haystack: first string
 * @needle: second string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *p = haystack;
		char *pp = needle;

		while (*haystack && *pp && *haystack == *pp)
		{
			haystack++;
			pp++;
		}
		if (!*pp)
			return (p);
		haystack = p + 1;
	}
	return (0);
}
