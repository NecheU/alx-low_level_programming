#include "main.h"
/**
 * *string_toupper - changes all lowercase of a string to uppercase
 * @str: parametee
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int m = 0;

	while (str[m++])
	{
		if (str[m] >= 'a' && str[m] <= 'z')
			str[m] -= 32;
	}
	return (str);
}
