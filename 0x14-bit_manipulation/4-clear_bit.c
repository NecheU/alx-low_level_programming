#include "main.h"

/**
 * clear_bit - Function to set the value of a bit
 * to 0 at a given imdex
 * @index: index starting from 0
 * @n: unsigned long int to change
 *
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit_val;

	if (index > 63 || !n)
		return (-1);
	bit_val = 1 << index;
	*n = (*n & ~bit_val) | ((0 << index) & bit_val);
	return (1);
}
