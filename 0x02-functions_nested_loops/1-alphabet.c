#include "main.h"
/**
 * main - C program to print alphabets
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph < 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
