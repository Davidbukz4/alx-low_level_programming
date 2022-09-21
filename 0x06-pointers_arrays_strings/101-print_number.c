#include "main.h"

void print_number(int n)
{
	int lenofExpo, number, i, temp, expo;

	number = n;
	expo = lenofExpo = 1;

	if (number < 0)
	{
		number *= -1; // convert negative it to a positive integer so as to perform other operation
		_putchar('-'); // put the minus sign to show that it's a negative number
	}

	/* counts length of exponent */
	temp = number;
	while (temp >= 10)
	{
		lenofExpo++; // length of expo (i.e 1 corresponds to 10, 2 corresponds to 100 etc.)
		temp /= 10; // divides the number by 10 
	}

	/* creates exponent for the number */
	for (i = 1; i < lenofExpo; i++)
	{
		expo *= 10;
	}

	/* print all the digits except the last one */
	while (expo > 1)
	{
		_putchar((number / expo) % 10 + '0'); // print a single digit from the number starting from the first digit
		expo /= 10; // reduce the exponent so as to get the next digit
	}

	_putchar((number % 10) + '0');
}
