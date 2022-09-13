#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int ch;
	int x = 0;

	while (x < 10)
	{
	for (ch = 97; ch < 123; ch++)
		_putchar(ch);
	x++;
	_putchar('\n');
	}
}
