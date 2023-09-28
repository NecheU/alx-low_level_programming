#include "main.h"

/**
 * factorial - A function that returns the factorial
 * of a given number
 * @n: given number
 * Return: factorial of a goven num
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	fact = factorial(n - 1);
	return (n * fact);
}
