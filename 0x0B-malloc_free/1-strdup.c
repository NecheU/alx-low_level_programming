#include "main.h"

/**
 * _strdup - C program that returns a pointer to a newly alloacted
 * space in the memory, which contains a copy of the string given as a
 * parameter
 * @str: the string tk be copied
 *
 * Return: pointer to allocated space or NULL if error occurs
 */

char *_strdup(char *str)
{
	char *dup;
	int a, b;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		b++;
	dup = malloc(sizeof(char) * (b + 1));

	if (dup == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
	{
		dup[a] = str[a];
	}

	dup[b] = '\0';

	return (dup);
}
