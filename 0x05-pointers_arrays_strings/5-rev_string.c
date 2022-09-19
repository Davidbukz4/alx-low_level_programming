#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int x, y;
	char r[500];

	x = y = 0;
	while (s[x] != '\0')
	{
		r[x] = s[x];
		x++;
	}

	x--;
	while (x >= 0)
	{
		s[y] = r[x];
		y++;
		x--;
	}
	s[y++] = '\0';
}
