#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that prints a character
 * @c: character to be printed
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	    return write(1, &c, 1);
}
/**
 * _puts - function that prints a sting
 * @str: string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
