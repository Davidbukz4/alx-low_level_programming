#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: buffer where string is copied to
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x, i;

	while (src[i] != '\0')
		i++;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
