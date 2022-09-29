#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int charLen = 1;

	if (*s == '\0')
		return (0);
	s++;
	return (charLen + _strlen_recursion(s));
}
