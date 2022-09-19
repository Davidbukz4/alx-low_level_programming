#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int len, half;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
