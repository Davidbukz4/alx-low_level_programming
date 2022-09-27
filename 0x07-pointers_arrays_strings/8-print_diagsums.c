#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonal of two matrix of integers.
 * @a: pointer to 2D array
 * @size: diagonal to add
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, d1, d2;

	d1 = d2 = 0;
	for (x = 0; x < (size * size); x += size + 1)
		d1 += a[x];
	for (x = (size - 1); x < (size * size) - 1; x += size - 1)
		d2 += a[x];
	printf("%d, %d\n", d1, d2);
}
