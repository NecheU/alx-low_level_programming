#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * at a given index
 * @index: the index
 * @n: unsigned long int to search
 *
 * Return: the value of a bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
