#include "main.h"
#include <stdlib.h>

/**
 * *array_range - C program that creates an array of integers
 * @min: min tange if value stored
 * @max: maximun range of value stored & num of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *a;
	int b, c;

	if (min > max)
		return (NULL);

	c = max - min  + 1;

	a = malloc(sizeof(int) * c);

	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
		a[b] = min++;

	return (a);
}
