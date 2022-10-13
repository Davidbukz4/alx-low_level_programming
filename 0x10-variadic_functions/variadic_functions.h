#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#define VALIDDATATYPES(i) (format[i] == 'c' || format[i] == 'i' || \
		format[i] == 'f' || format[i] == 's')

/**
 * struct valid_data_types - name of structure
 * @valid: valid data types object
 * @func: function pointer to data type function
 */
typedef struct valid_data_types
{
	char *valid;
	void (*func)();
} data_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
