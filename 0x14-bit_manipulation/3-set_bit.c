#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to the decimal value
 * @index: index of bit to be set
 * Return: 1 if it worked or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int compare;

	if (!n)
		return (-1);
	if (n)
	{
		compare = 1;
		compare = compare << index;
		*n = *n | compare;
		return (1);
	}

	return (-1);
}
