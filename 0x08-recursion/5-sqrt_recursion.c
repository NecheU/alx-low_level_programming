#include "main.h"
/**
 * _sqrt_recursion - Returns rhe natural aquare root of a number
 * @n: the number to be used
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - Return the square root of a numbee
 * @n: num to be checked
 * @x: squared number
 *
 * Return: The square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
