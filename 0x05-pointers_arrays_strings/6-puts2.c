#include "main.h"

/**
 * puts2 - prints other character of a string starting with the first character
 * @str: string from which the first character and every other
 * character is to be printed
 * Return: void
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
