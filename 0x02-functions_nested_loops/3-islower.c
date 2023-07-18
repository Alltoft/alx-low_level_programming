#include "main.h"
/**
 * _islower - return 1 if the character is lowercase, otherwise return 0
 * @c: is the char to be checked
 * Return: 1 if lowercase, 0 if other
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
