#include "main.h"

/**
 * _isdigit - function that verifies if a charafterbis a digit or not
 * @c: tested character
 * Return: return 1 if it is uppercase, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && c <= 57)
	return (1);

	return (0);
}
