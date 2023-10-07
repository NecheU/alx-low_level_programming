#include "main.h"

/**
 * _calloc - C funtion that allocates memory for
 * an areay, using malloc
 * @size: size of the memory to be allocated
 * @nmemb: member of the elments
 *
 * Return: pointer to the allocated memory or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memb;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memb = malloc(size * nmemb);
	if (memb != NULL)
	{
		for (c = 0; c < (size * nmemb); c++)
			memb[c] = 0;
		return (memb);
	}
	else
		return (NULL);
}

