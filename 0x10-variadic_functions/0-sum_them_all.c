#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - C variadic function that returns
 * the sum of its parameters
 * @n: number of parameters
 * @: ... - othwr variables
 * Return: 0 if n == 0, otherwise, sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int b, sum = 0;

	va_start(args, n);

	for (b = 0; b < n; b++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
