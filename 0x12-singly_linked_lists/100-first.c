#include "lists.h"

/**
 * pre_main - executes before main function
 */

void __attribute__((constructor)) pre_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my ");
	printf("back!\n");
}
