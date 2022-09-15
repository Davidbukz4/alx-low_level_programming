#include <stdio.h>

/**
 * main - fizzbuzz test
 * Return: 0 if successful
 */

int main(void)
{
	int x;

	for (x = 1; x < 101; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", x);
	}
	printf("Buzz\n");
	return (0);
}
