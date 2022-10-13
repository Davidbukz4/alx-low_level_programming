#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: number of element in the array
 * @cmp: pointer to function passed as argument
 * Return: index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	for (x = 0; x < size; x++)
		if (cmp(array[x]))
			return (x);

	return (-1);
}
