#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: argument count supplied to the function
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(num_list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num_list, int);

	va_end(num_list);
	return (sum);
}
