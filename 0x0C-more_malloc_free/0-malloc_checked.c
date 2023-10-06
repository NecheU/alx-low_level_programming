#include "main.h"

/**
 * malloc_checked - C function that allocates memory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return: pointer to the newly allocated mem
 */

void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit (98);
	return (alloc);
}
