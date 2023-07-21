#include "main.h"
/**
 * print_diagonal - prints diagonal line
 * @n: parameter
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	_putchar(' ');

	_putchar('\\');

	if (x == (n - 1))
	continue;
	_putchar('\n');
	}
	}
	_putchar('\n');
}
