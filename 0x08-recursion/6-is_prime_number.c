#include "main.h"

/**
 * check_number - checks recursively the input from is_prime_number
 * @n: iterator
 * @base: base number to check
 * Return: 1 if n is a prime, else return 0 otherwise.
 */

int check_number(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (check_number(n + 1, base));
	return (1);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if input integer is a prime number, returns 0 otherwise
 */

int is_prime_number(int n)
{
	return (checker_number(2, n));
}
