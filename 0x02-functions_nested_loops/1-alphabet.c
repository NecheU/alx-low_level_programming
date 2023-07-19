#include "main.h"
/**
 * prints_alphabets - function tha prints alphabets
 * in lowcase
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
