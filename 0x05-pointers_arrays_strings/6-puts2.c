#include "main.h"
/**
 * puts2 - prints every othwr character of a string
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int w;

	w = 0;
	while (str[w] != '\0')
	{
		if (w % 2 == 0)
			_putchar(str[w]);
		w++;
	}
	_putchar('\n');
}

