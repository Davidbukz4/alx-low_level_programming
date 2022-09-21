#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to input string
 * Return: pointer to capitalized string
 */

char *cap_string(char *str)
{
	int x, y;
	char div[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= ('a' - 'A');
	x = 1;
	while (str[x] != '\0')
	{
		for (y = 0; div[y] != '\0'; y++)
		{
		if (str[x - 1] == div[y] && (str[x] >= 'a' && div[x] <= 'z'))
			str[x] -= ('a' - 'A');
		}
		x++;
	}
	return (str);
}
