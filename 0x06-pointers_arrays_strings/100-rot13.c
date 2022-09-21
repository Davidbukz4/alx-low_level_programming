#include "main.h"

/**
 * rot13 - encodes a character using rot13
 * @str: pointer to input string
 * Return: pointer to encoded string
 */

char *rot13(char *str)
{
	int x, y;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (x = 0; str[x] != '\0'; x++)
	{
		boolean = 0;
		for (y = 0; alphabet[y] != '\0' && boolean == 0; y++)
		{
			if (str[x] == alphabet[y])
			{
				str[x] = rot[y];
				boolean = 1;
			}
		}
	}
	return (str);
}
