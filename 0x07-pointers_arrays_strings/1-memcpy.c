#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination tk copied to
 * @src: where to be copied from
 * @n: number of bytes copied
 * Return: pointer to the copied location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	for (; m < n; m++)
		dest[m] = src[m];

	return (dest);
}
