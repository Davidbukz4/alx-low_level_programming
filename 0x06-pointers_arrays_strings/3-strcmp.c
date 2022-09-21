#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer than is greater, lesser, or equal to zero depending
 * on string comparison
 */

int _strcmp(char *s1, char *s2)
{
	int x, y, z, comparison;

	x = y = comparison = 0;

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	for (z = 0; z < x; z++)
	{
		if (s1[z] != s2[z])
		{
			comparison = s1[z] - s2[z];
			break;
		}
		else if (s1[z] == s2[z])
		{
			comparison = s1[z] - s2[z];
			continue;
		}
	}

	return (comparison);
}
