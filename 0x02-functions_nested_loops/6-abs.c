#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: integer(argument)
 *
 * Return: 0 if successful
 */

int _abs(int num)
{
	if (num > 0)
		return (num);
	else if (num == 0)
		return (num);
	else
		return (num * -1);
}
