#include "main.h"
#include <stdio.h>

/**
 * flip_bits - A function that returns the number of
 * bits one would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, counter = 0;
	unsigned long int b;
	unsigned long int c = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		b = c >> a;
		if (c & a)
			counter++;
	}
	return (counter);
}
