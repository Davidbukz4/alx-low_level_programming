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
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < n; j++)
	{
		if (j > i)
			*(dest + j) = '\0';
		else
			*(dest + j) = src[j];
	}

	return (dest);
}
