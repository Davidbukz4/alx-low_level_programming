#include <stdio.h>

/**
 * main - This program prints all single digit numbers
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%i", number);
	putchar('\n');

	return (0);
}
