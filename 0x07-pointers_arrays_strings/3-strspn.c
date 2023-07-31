#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	int i = 1;

	while (*s = '\0')
	{
	if (*s == *accept)
	{
		return (i);
	}
	s++;
	i++;
	}
	return (0);
}
