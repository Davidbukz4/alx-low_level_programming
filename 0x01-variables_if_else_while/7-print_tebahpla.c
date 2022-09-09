#include <stdio.h>

/**
 * main - it prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerAlpha;

	for (lowerAlpha = 'z'; lowerAlpha >= 'a'; lowerAlpha--)
	{
		putchar(lowerAlpha);
	}
	putchar('\n');
	return (0);
}
