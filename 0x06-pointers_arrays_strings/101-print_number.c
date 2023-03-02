#include "main.h"

/**
 * print_number - print numbers
 * @n: integer parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int a;

	a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
}
