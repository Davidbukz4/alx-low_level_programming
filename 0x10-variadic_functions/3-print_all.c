#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * _char - print character
 * @c: character to print
 */
void _char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * _int - prints integers
 * @i: integer to print
 */
void _int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * _float - print floats
 * @f: float numbers to print
 */
void _float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * _string - print strings
 * @s: string to print
 */
void _string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints argument of any data type
 * @format: list of types of argument passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char *separator;
	unsigned int i, j;

	va_list arg_list;
	data_type arg_type[] = {
		{'c', _char},
		{'i', _int},
		{'f', _float},
		{'s', _string}
	};

	i = j = 0;
	separator = "";
	va_start(arg_list, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *arg_type[j].valid)
			{
				printf("%s", separator);
				arg_type[j].func(arg_list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
