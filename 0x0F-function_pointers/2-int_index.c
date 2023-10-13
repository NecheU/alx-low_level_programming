#include "function_pointers.h"

/**
 * int_index - Funtion that searhes fir integers
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to the array
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]))
			return (1);
	}
	return (-1);
}
