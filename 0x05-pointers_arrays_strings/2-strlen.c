#include "main.h"
#include <stdio.h>

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
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
