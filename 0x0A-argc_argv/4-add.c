#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum numbers
 * @argc: number of variables
 * @argv: string of variables
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int a = 0;

	while (i < argc)
	{
	if (*argv[i] < 48 || *argv[i] > 57)
	{
		printf("Error\n");
		return (1);
	}
	else
		a = a + atoi(argv[i]);
	i++;
	}
		printf("%d\n", a);
	return (0);
}

