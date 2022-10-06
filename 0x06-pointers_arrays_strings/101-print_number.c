#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int number, count, temp;


	if (number < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
		number = n;

	count = 1;
	temp = number;
	while (temp > 9)
	{
		temp /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
		_putchar(((number / count) % 10) + '0');
}
