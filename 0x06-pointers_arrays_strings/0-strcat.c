#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	for ( ; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';

	return (dest);
}
