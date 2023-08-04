#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int a;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		a = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", a);
	}
	return (0);
}
