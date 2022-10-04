#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to 2-D integer grid
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **ptr;

	x = y = 0;
	if (height < 1)
		return (NULL);
	ptr = (int **)malloc(height * sizeof(ptr));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ptr[x] = malloc(width * sizeof(int));
		if (ptr[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(ptr[y]);
			free(ptr);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}
	return (ptr);
}
