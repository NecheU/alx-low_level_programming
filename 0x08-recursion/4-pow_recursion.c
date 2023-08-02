#include "main.h"
/**
 * _pow_recursion - Function that returns the value of x
 * raised to power y
 * @x: the base num
 * @y: rhe exponential
 * Return: The value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
