#include "main.h"
/**
 * print_chessboard - it prints a chessboeard
 * @a: the array that have the dashboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i <= 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar(a[i][j]);
		i++;
	}
}
