#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: number of element
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x, temp;

	x = temp = 0;

	for (x = 0; x < n--; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
