#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds positive integers
 * @argc: number of argument
 * @argv: pointer to array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	unsigned int x, result, temp;

	if (argc < 1)
	{
		printf("%d\n", 0);
		return;
	}
	while (argc-- && argc > 0)
	{
		for (x = 0; argv[argc][x] != '\0'; x++)
		{
			if (!(isdigit(argv[argc][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		temp = atoi(argv[argc]);
		result = result + temp;
	}
	printf("%d\n", result);
	return (result);
}
