#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: pointer to string to be copied
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int len, x;

	if (str == NULL)
		return (NULL);
	for (len = 0; str != '\0'; len++)
		;

	if (len < 1)
		return (NULL);

	ptr = (char *) malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (x = 0; x < len; x++)
		ptr[x] = str[x];
	ptr[x] = '\0';

	return (ptr);
}
