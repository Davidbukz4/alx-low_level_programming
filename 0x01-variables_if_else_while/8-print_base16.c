#include <stdio.h>

/**
 * main - it prints the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hexNum;

	for (hexNum = '0'; hexNum <= '9'; hexNum++)
		putchar(hexNum);

	for (hexNum = 'a'; hexNum <= 'f'; hexNum++)
		putchar(hexNum);

	putchar('\n');
	return (0);
}
