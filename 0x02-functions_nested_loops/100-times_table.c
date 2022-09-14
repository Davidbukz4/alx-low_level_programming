#include "main.h"

/**
 * print - print recursively using _putchar
 * @var: variable to be printed
 */

void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10));
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: time table to print
 *
 */

void print_times_table(int n)
{
	int x;
	int y;
	int product;

	if (n < 0 || n > 15)
		return;
	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			product = x * y;
			if (y == 0)
				_putchar('0' + product);
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + product);
			}
			else if (product < 100)
			{
				_putchar(' ');
				print(product);
			}
			else
			{
				print(product);
			}
			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
