#include <stdio.h>

/**
 * main - it outputs all single digit number of bas 10
 * Return: 0 for success
 */

int main(void)
{
	int var;

	for (var = 0; var < 99; var++)
	{
		int ii;

		for (ii = var + 1; ii < 100; ii++)
		{
			putchar((var / 10) + '0');
			putchar((var % 10) + '0');
			putchar(' ');
			putchar((ii / 10) + '0');
			putchar((ii % 10) + '0');

			if (var != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');

	return (0);
}
