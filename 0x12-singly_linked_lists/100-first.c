#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) hare(void);

/**
 * here - A function that prints a string before the main function
 * is executed
 */

void here(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
