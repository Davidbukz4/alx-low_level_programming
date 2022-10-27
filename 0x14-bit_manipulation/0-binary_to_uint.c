#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 characters
 * Return: the converted characters
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	num = 0;
	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = num << 1;
		num = num | (b[i] - '0');
	}
	return (num);
}
