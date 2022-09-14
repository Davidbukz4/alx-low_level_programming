#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		_putchar(48);
		for (y = 0; y < 10; y++)
		{
			z = x * y;
			_putchar(44);
			_putchar(32);
			if (z < 10)
			{
			_putchar(32);
			_putchar(z + 48);
			}
			else
			{
			_putchar((z / 10) + 48);
			_putchar((z % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
