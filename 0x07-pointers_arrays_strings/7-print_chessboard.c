#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the board to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	i = j = 0;
	while (i < a[i][7])
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
	i++;
	_putchar('\n');
	}
}
