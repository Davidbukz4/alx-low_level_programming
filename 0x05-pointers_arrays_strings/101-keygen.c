#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int randNum;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0;  total > 122 && total <2772; count++)
	{
		randNum = (rand() % 125) + 1;
		printf("%c",randNum);
		total -= randNum;
	}
	printf("%c", total);

	return (0);
}
