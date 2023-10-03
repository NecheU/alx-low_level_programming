#include "main.h"
#include <stddef.h>
/**
 * create_array - C function that creats of chars
 * and initialize it with a specific char
 * @size: aize of arrays
 * @c: character to pointed to
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
			if  (array == 0)
			{
			return (NULL);
			}

			for (a = 0; a < size; a++)
			array[a] = c;

			return (array);
}
