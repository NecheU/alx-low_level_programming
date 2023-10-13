#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two nums
 * @a: the first nun
 * @b: the sescond num
 *
 * Return: sum kf a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: the first num
 * @b: the second num
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mult - Returns the product of two nums
 * @a: the first num
 * @b: rhe second num
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two nums
 * @a: the first num
 * @b: the second num
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of division of two nums
 * @a: the first num
 * @b: the second num
 *
 * Return: remainder of divisionnof a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
