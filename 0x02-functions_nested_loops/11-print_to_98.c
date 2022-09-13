#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: argument passed to the function
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		int x;

		for (x = n; x > 97; x--)
		{
			if (x != 98)
				printf("%d, ", x);
			else
				printf("%d", x);
		}
	}
	else
	{
		int y;

		for (y = n; y <= 98; y++)
		{
			if (y != 98)
				printf("%d, ", y);
			else
				printf("%d", y);
		}
	}
	printf("\n");
}
