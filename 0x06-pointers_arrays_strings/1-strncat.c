#include "main.h"

/**
 * _strncat - concatenates two strings with a specific no of byte(s)
 * from the source string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = y = 0;

	while (dest[x] != '\0')
		x++;

	for ( ; y < n && src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}

	return (dest);
}
