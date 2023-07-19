#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: the number to be focused
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int h = n % 10;

	if (h < 0)
		h *= -1;

	_putchar(h + '0');
	return (h);
}
