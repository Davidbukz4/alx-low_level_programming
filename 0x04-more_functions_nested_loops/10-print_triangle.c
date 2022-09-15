#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in a integer for size of triangle
 */

void print_triangle(int size)
{
	int horizontal, vertical, x;

	if (!(size <= 0))
	{

		for (horizontal = 0; horizontal < size; horizontal++)
		{
			for (vertical = size - horizontal; vertical > 1; vertical--)
				_putchar(' ');
			for (x = horizontal + vertical; x >= 1; x--)
				_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
