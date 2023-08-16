#include "function_pointers.h"
#include "stdio.h"
/**
 * print_name - prnts a name
 * @name: is the name
 * @f: id the function pointer
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
