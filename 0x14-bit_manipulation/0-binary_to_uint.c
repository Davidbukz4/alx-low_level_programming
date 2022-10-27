#include "main.h"

/**
 * power - returns the value of x raised to the power of y
 * @x: base number
 * @y: power of
 * Return: x to the power of y
 */

int power(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * power(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: the converted characters
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, sum, digit;

	len = sum = digit = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
		len++;
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '0')
			digit = 0;
		else
			digit = 1;
		sum += (digit * power(2, len - 1));
		len--;
	}
	return (sum);
}
