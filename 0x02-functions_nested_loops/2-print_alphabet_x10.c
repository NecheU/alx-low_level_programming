#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets ten times
 * Description: with loop
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	int alph;

	while (counter++ <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

		_putchar(10);
	}
}
