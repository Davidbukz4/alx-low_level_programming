#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to decimal value
 * @index: index of bit to be set
 * Return: 1 if it worked, -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int compare;

	if (n)
	{
		compare = 1;
		compare = ~(compare << index);
		*n = *n & compare;
		return (1);
	}

	return (-1);
}
