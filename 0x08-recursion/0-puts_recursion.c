#include "main.h"

/**
 * _puts_recursion - A funtion that prints a string
 * followed by a new line
 * @s: the string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
