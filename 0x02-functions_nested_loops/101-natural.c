#include <stdio.h>

/**
  * main - find sum of multiples of 3 and 5 less than 1024
  *
  * Return: 0 if successful
  */

int main(void)
{
	int x;
	int _sum;

	for (x = 3; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
			_sum += x;
	}
	printf("%d\n", _sum);
	return (0);
}
