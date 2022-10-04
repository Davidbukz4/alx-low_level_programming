#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string to be concatenated
 * @s2: pointer to string to be concatenated
 * Return: pointer to newly allocated space in memory containing s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int x, y, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;
	array_size = s1_len + s2_len + 1;
	ptr = (char *) malloc(array_size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < array_size; x++)
	{
		if (x < s1_len)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[x - s1_len];
	}
	return (ptr);

}
