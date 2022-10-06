#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the original memory block
 * @old_size: old size of memory block
 * @new_size: new size of memory block
 * Return: pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem1, *cast_mem;
	int x;

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem1 = malloc(new_size);
		return (mem1);
	}

	if (new_size > old_size)
	{
		mem1 = malloc(new_size * sizeof(char));
		cast_mem = ptr;
		for (x = 0; x < old_size; x++)
			mem1[x] = cast_mem[x];
		free(ptr);
		return (mem1);
	}
	return (ptr);
}
