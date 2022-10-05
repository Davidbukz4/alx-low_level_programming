#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen
 * Return: 0
 */

int main(void)
{
	int passwd, key_checker;
	time_t t;

	passwd = key_checker = 0;
	srand((unsigned int) time(&t));
	while (passwd < 2772)
	{
		passwd = rand() % 128;
		if ((key_checker + passwd) > 2772)
			break;
		key_checker += passwd;
		printf("%c", passwd);
	}
	printf("%c\n", (2772 - key_checker));
	return (0);
}
