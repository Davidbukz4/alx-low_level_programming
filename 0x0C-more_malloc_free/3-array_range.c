#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int x, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++, min++)
		ptr[x] = min;

	return (ptr);
}
