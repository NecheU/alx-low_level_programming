#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char tmp;

	while (s[b++])
		a++;

	for (b = a - 1; b >= a / 2; b--)
	{
		tmp = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = tmp;
	}
}

