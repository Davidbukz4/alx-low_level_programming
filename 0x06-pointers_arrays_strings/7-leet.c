#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to input string
 * Return: pointer to leetspeek string
 */

char *leet(char *str)
{
	int x, y;
	char rep[] = "aAeEoOtTlL";
	char leetcode[] = "43071";

	x = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; rep[y] != '\0'; y++)
			if (str[x] == rep[y])
				str[x] = leetcode[y / 2];
	}
	return (str);
}
