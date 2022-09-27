#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of characters
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = y = 0;
	while (x < 8)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
