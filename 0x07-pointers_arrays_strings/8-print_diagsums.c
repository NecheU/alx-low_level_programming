#include "main.h"
/**
 * print_diagsums - A C function that prints the sum of
 * of two diagonals of a square matrix of integers
 * @a: matrix to be considered
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int c, d, e;

	d = 0;
	e = 0;

	for (c = 0; c < size; c++)
	{
		d += a[c];
		a += size;
	}

	a -= size;

	for (c = 0; c < size; c++)
	{
		e += a[c];
		a -= size;
	}

	printf("%d, %d\n", d, e);
}
