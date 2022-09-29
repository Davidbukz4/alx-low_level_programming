#include "main.h"

/**
 * check_numbers - checks the input number from n to the base
 * @n: number is squared and compared to the base number
 * @base: base number to check
 * Return: natural square root of number base
 */

int check_numbers(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (check_numbers(n + 1, base));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */

int _sqrt_recursion(int n)
{
	return (check_numbers(1, n));
}
