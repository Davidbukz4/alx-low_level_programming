#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x, buffer_size, s1count, s2count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1count = 0; s1[s1count]; s1count++)
		;
	for (s2count = 0; s2[s2count]; s2count++)
		;
	ptr = malloc(buffer_size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < buffer_size - 1; x++)
		x < s1count ? (p[x] = s1[x]) : (p[x] = s2[x - s1count]);
	ptr[buffer_size] = '\0';

	return (ptr);
}
