#include "main.h"
/*
 *_isupper - function that verify if a character if uppercase or not
 * @c: the character to be tested
 * Return: 1 if it is uppercase,if not,0
 */

int _isupper(int c)

{
	if ((c >= 'A') && (c <= 'Z'))
			return (1);
			else
			return (0);
}
