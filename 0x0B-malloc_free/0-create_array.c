#include "main.h"
/**
 * create_array - Creates an array of chars and initialise it
 * with a specific char
 * @size: size of the array
 * @c: character to be used
 * Return: NULL on error, pointer to array if success
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int create;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (create = 0; create < size; create++)
		array[create] = c;

	return (array);
}
