#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int print_one, check_bit;
	int i = 0;

	print_one = check_bit = 0;
	for (i = 63; i >= 0; i--)
	{
		check_bit = n >> i;
		if (check_bit & 1)
		{
			_putchar('1');
			print_one = 1;
		}
		else if (print_one)
			_putchar('0');
	}
	if (!print_one)
		_putchar('0');
}
