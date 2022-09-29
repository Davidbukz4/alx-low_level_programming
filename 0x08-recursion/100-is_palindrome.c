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

/**
 * checker - checks palindrome with respect to string length and count
 * @str: string to be checked
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if string is palindrome, returns 0 otherwise
 */

int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, returns 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
