#include "main.h"
#include <unistd.h>
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
