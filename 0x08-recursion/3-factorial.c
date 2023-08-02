#include "main.h"
/**
 * factorial - Searches for a favtorial of a given number
 * @n: The number to be searched from
 *
 * Return: factorialnof a given num
 */
int factorial(int n)
{
	int hue;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	hue = factorial(n - 1);
	return (n * hue);
}
