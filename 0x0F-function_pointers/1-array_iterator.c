#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes
 * a function given as a parameter on each element of an array
 * @array: array to be worked on
 * @size: size of the array
 * @action: pointer to the funct i need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int h;

	if (array == NULL || action == NULL)
		return;

	for (h = 0; h < size; h++)
	{
		action(array[h]);
	}
}
