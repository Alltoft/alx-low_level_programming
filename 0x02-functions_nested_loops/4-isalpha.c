#include "main.h"
/**
 * _isalpha - it checks if c is character , or not.
 * @c: is the variable character
 * Return: 1 is c is a character, zero if other.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
