#include "main.h"

/**
 * print_binary - It prints binary representation of a nu
 * @n: integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin;

	if (n > 1)
		print_binary(n >> 1);
	bin = n & 1;
	_putchar(bin + '0');
}
