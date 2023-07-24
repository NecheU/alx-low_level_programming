#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number if array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int z = 0;

	for (; z - n; z++)
	{
		printf("%d", *(a + z));
		if (z != (n - 1))
			printf(", ");
	}
	printf("\n");
}
