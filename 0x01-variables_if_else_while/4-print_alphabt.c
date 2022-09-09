#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program prints alphabet in lowercase except for e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerAlpha;

	for (lowerAlpha = 'a'; lowerAlpha <= 'z'; lowerAlpha++)
	{
	if (lowerAlpha != 'e' && lowerAlpha != 'q')
		putchar(lowerAlpha);
	}
	putchar('\n');
	return (0);
}
