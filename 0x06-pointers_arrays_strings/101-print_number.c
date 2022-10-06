#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int number, count, temp;


	if (n < 0)
	{
		number = -n;
		_putchar('-');
	}
	else
		number = n;

	if (number / 10)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}
int main()
{
	print_number(1002);
	_putchar('\n');
	print_number(-496);
	_putchar('\n');
	print_number(4);
	_putchar('\n');
	print_number(18354565);
	_putchar('\n');
	return (0);
}
