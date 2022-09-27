#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill constant byte
 * @b: constant bytes
 * @n: number of memory area to fill with constant byte
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
