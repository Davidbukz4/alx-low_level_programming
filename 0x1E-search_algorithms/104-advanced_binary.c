#include "search_algos.h"

/**
 * binary_recursion - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in an array
 * @value: value to search for
 * Return: first index where value is located, -1 otherwise
 */

int binary_recursion(int *array, size_t size, int value)
{
	size_t mid = size / 2, i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], (i == size - 1) ? "\n" : ", ");

	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
	{
		if (mid > 0)
			return binary_recursion(array, mid + 1, value);
		return (mid);
	}
	if (value < array[mid])
		return (binary_recursion(array, mid + 1, value));
	mid++;
	return (binary_recursion(array + mid, size - mid, value) + mid);
}


/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in an array
 * @value: value to search for
 * Return: first index where value is located, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	int resp = 0;

	resp = binary_recursion(array, size, value);
	if (resp >= 0 && array[resp] != value)
		return (-1);
	return (resp);
}
