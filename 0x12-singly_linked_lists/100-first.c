#include <stdio.h>
#include <stdlib.h>


/**
 * first - A function that prints a string before the main function
 * is executed
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
