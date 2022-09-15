#include "main.h"

/**
 * print_square -print a square of input size
 * @size: demensions of square
 * Return: void
 */

void print_square(int size)
{
	int vertical, horizontal;

	if (!(size <= 0))
	{
	for (vertical = 0; vertical < size; vertical++)
	{
		for (horizontal = 0; horizontal < size; horizontal++)
			_putchar('#');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
