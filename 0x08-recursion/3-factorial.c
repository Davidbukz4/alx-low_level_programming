#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: maximum factorial
 * Return: factorial of number n
 */

int factorial(int n)
{
	if (factorial < 0)
		return (-1);
	else if (factorial <= 1)
		return (1);
	return (n * (factorial(n - 1)));
}
