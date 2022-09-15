#include "main.h"

/**
 * print_diagonal - the function draws a diagonal line
 * @n: number of times the character '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int x, y = 1;

	if (!(n <= 0))
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y <= x - 1; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
