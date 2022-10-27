#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: first decimal value
 * @m: second decimal value
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compare, check, shift_check;
	unsigned int count = 0;
	int i = 0;

	compare = 1;
	check = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		shift_check = check >> i;
		if (shift_check & compare)
			count++;
	}
	return (count);
}
