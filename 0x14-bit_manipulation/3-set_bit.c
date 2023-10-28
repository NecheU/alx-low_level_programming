#include "main.h"

/**
 * set_bit - Function to set the value of a bit to 1
 * at a given index
 * @index: the index, starting from 0
 * @n: unsigned long int to search
 *
 * Return: 1 if successful, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
