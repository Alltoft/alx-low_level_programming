#include "main.h"
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
	++s;
	if (s[i] == c)
	{
	return (s);
	}
	i++;
	}
	return (0);
}
