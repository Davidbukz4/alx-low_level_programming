#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string in which its length is to be returned
 * Return: length of string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
