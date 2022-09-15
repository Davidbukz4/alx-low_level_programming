#include "main.h"

/**
 * print_line - this function draws a straight line
 * @n: input integer
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (!(n <= 0))
		for (x = 0; x < n; x++)
			_putchar('_');
		_putchar('\n');
}
