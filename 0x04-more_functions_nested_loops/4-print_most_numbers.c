#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * except 2 & 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int k;

	for (k = 48; k < 58; k++)
	{
		if ((k == 50) || (k == 52))
		{
			continue;
		}
		_putchar(k);
	}
	_putchar(10);
}
