#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs an operation on two numbers
 * @argc: number of command line arguments
 * @argv: argument vector
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int value1, value2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	value1 = atoi(argv[1]);
	value2 = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (value2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (get_op_func(argv[2])(value1, value2)));
	return (0);
}
