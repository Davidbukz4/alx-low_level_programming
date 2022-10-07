#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;

	s = malloc(sizeof(char) * (size1 + n + 1));
	if (s == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		s[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		s[i] = s2[i - size1];
	}
	s[i] = '\0';
	return (s);
}
