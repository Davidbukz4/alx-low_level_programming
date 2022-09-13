#include "main.h"

/**
 * main - prints the string "_putchar"
 *
 * Return: Always 0.
 */

int main(void)
{
	int x;
	char ch[] = "_putchar";

	for (x = 0; x < 8; x++)
	{
		_putchar(ch[x]);
	}

	_putchar('\n');
	return (0);
}
