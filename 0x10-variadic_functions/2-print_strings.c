#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string to be printed between string
 * @n: number of string passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *word;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(str, char *);
		word ? printf("%s", word) : printf("(nil)");

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(str);
}
