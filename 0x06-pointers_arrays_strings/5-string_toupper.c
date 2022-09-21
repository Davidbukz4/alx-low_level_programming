#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @str: string to be converted to uppercase
 * Return: converted string
 */

char *string_toupper(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
