#include <stdio.h>

/**
 * main - first 50 fibonacci number
 *
 * Return: 0 if successful
 */

int main(void)
{
	long int n1 = 1, result, n2 = 2, nLast = 50;
	int x;

	printf("%lu, %lu, ", n1, n2);
	for (x = 2; x < nLast; x++)
	{
		result = n1 + n2;
		n1 = n2;
		n2 = result;
		printf("%lu", result);
		if (x != nLast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
