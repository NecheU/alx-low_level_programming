#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Description: function that checks alphabetic character
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
