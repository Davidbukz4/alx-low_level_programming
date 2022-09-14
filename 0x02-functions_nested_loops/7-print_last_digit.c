#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: integer(argument)
 *
 *Return: value of the last digit
 */

int print_last_digit(int num)
{
	num = (num % 10);

	if (num < 0)
		num = -num;
	_putchar(num + '0');
	return (num);
}
