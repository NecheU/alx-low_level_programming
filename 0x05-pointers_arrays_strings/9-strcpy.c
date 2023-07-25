#include "main.h"
/**
 * _strcpy - copies the string pointed to by scr into dest
 * @dest: destination
 * @scr: source
 * Return: char with copy of strin
 */
char *_strcpy(char *dest, char *scr)
{
	int d;

	for (d = 0; *(scr + d) != '\0'; d++)
	{
		dest[d] = *(scr + d);
	}
	dest[d] = '\0';

	return  (dest);
}
