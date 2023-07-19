#include "main.h"
/**
 * print_alphabets - function that prints alphabets
 * in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
