#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	/* reduce the count by 1 because array index starts from 0 */
	x--;
	while (s[x] != '\0')
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
