#include "main.h"
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != '\0')
	{
	if (s[i] == c)
	{
	return (s);
	}
	s++;
	i++;
	}
	return (0);
}
