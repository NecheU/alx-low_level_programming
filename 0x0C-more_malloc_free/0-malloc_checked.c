#include "main.h"
/**
 * malloc_checked - Fuction that allocates memory
 * @b: the size of the memory to be allocated
 *
 * Return: Pointer to the allocated mem on success, while 98 on failure
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
