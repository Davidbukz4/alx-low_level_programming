#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index of the bit to be gotten starting from 0
 * Return: value of bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int count, check_bit;
	int i = 0;

	count = check_bit = 0;
	for (i = 63; i >= 0; i--)
	{
		if (count == index)
		{
			check_bit = n >> count;
			if (check_bit & 1)
			{
				return (1);
			}
			else
			{
				return (0);
			}

		}
		count++;
	}
	return (-1);
}
