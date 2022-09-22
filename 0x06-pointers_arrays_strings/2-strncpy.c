#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of byte(s) to be copied
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	for ( ; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';
	dest[x++];
	return (dest);
}
