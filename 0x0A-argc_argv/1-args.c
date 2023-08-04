#include "main.h"
#include <stdio.h>
/**
 * main - prints thhe number of arguments passed
 * @argc: number of arguments
 * @argv: the string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc);
	return (0);
}
