#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as one string
 */

char *argstostr(int ac, char **av)
{
	int x, y, len, bufferlen;
	char *ptr;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	x = y = len = bufferlen = 0;
	for (x = 0; av[x]; x++)
	{
		for (y = 0; av[x][y]; y++)
			len++;
	}
	ptr = (char *)malloc(len * sizeof(char) + ac + 1);
	if (ptr == NULL)
		return (NULL);

	for (x = 0; av[x]; x++)
	{
		for (y = 0; av[x][y]; y++, bufferlen++)
			ptr[bufferlen] = av[x][y];
		ptr[bufferlen] = '\n';
		bufferlen++;
	}
	ptr[bufferlen] = '\0';
	return (ptr);
}
