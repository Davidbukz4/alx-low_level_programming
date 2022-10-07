#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if the string consist of digits
 * @argv: pointer to array of argument
 * Return: 0 if all are digits, 1 otherwise
 */

int _isdigit(char *argv)
{
	int x;

	x = 0;
	while (argv[x])
	{
		if (argv[x] >= '0' && argv[x] <= '9')
			x++;
		else
			return (1);
	}
	return (0);
}

/**
 * _atoi - converts a string of ascii values to the values they represent
 * @s: pointer to the string
 * Return: value of string
 */

int _atoi(char *str)
{
	int x, value;

	x = value = 0;
	while (str[x])
	{
		if (str[x] >= '0' && str[x] <= '9')
		{
			value *= 10;
			value += (str[x] - '0');
		}
		x++;
	}
	return (value);
}

/**
 * main - multiplies two positive numbers from command line argument
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: 0 if successful, 98 on failure
 */

int main(int argc, char *argv[])
{
	int a, c;
	long unsigned int b;

	b = 1;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (a = 1; a < argc; a++)
	{
		if (_isdigit(argv[a]))
		{
			b = _atoi(argv[a]);
			b *= b;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	printf("%lu\n", b);
	return (0);
}
