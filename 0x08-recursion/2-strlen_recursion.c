#include "main.h"
/**
 * _strlen_recursion - Prints rhe length of a string
 * @s: the sting to be measured
 *
 * Return: lengrh of the string measured
 */
int _strlen_recursion(char *s)
{
	int hue = 0;

	if (*s != '\0')
	{
		hue++;
		hue += _strlen_recursion(s + 1);
	}
	return (hue);
}
