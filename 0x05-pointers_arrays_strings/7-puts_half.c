#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int half = 0, i;

	while (half >= 0)
	{
		if (str[half] != '\0')
			break;
		half++;
	}
	if (half % 2 == 1)
		i = half / 2;
	else
		i = (half - 1) / 2;
	for (i++; i < half; i++)
		_putchar(str[i]);
	_putchar('\n');
}
