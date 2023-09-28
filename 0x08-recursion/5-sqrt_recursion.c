#include "main.h"

/**
 * _sqrt_recursion - This funtion returns the ntural square
 * root of a num
 * @n: the number to be used
 *
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - It returns the square root of a num
 * @n: the number to be tested
 * @a: the squared num
 *
 * Return: the square root of n
 */

int _sqrt(int n, int a)
{
	if (n > a / 2)
		return (-1);
	else if (n * n == a)
		return (n);
	return (_sqrt(n + 1, a));
}
