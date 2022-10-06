#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb:  number of memory bytes
 * @size: number of data type bits
 * Return: return pointer to initialized buffer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < nmemb; x++)
		ptr[x] = 0;

	return (ptr);
}
