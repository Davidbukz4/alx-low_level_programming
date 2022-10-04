#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 * @size: size of array
 * @c: char to initialize array with
 * Return: pointer to the array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size > 0)
	{
		ptr = (char *) malloc(size * sizeof(char));
		if (ptr == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
