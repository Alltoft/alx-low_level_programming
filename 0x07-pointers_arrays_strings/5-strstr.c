#include "main.h"
/**
 * *_strstr - locates a susbdtring
 * @haystack: first string
 * @needle: second string
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
	if (i == 0)
	{
		while (haystack[i] != ' ')
		{
			if (haystack[i] == needle[j])
			{
				return (haystack);
			}
			else
			{
				break;
			}
			haystack++;
			needle++;
		}
	}
	if (haystack[i] == ' ')
	{
		haystack++;
		while (haystack[i] != ' ')
		{
			if (haystack[i] == needle[j])
			{
				return (haystack);
			}
			else
			{
				break;
			}
			haystack++;
			needle++;
		}
	}
	haystack++;
	}
	return (0);
}
