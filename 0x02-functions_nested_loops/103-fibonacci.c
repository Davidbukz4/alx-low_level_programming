#include <stdio.h>

/**
 * main - sum of the even values of a fibonacci
 *
 * Return: 0 if successful
 */

int main(void)
{
	int x = 1, y = 2, total = 0;
	int z;

	while (y < 4000000)
	{
		if (y % 2 == 0)
			total += y;

		z = y;
		y += x;
		x = z;
	}
	printf("%d\n", total);
	return (0);
}
