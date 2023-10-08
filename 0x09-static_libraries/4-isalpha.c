#include "main.h"
/**
 * _isalpha - checks if a character is alphabetical
 * @c: the character to be checked
 * Description: checks for alphabetical character
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
