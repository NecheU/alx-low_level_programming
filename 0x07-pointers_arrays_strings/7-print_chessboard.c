#include "main.h"
/**
 * print_chessboard - a C function that prints a chessboard
 * @a: the array containing chessboard elements
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; a[b][7]; b++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
