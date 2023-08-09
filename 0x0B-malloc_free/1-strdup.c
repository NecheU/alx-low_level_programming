#include "main.h"
/**
 * _strdup - Returns a pointer to a newly alloctated
 * space in the memory, which contains the copy of
 * of the string used as parameter
 * @str: the string to be copied
 * Return: NULL if Error, poiter to dup if success
 */
char *_strdup(char *str)
{
	char *dup;
	int q, r;

	if (str == NULL)
		return (NULL);
	for (q = 0; str[q]; q++)
		r++;
	dup = malloc(sizeof(char) * (r + 1));
	if (dup == NULL)
		return (NULL);

	for (q = 0; str[q]; q++)
	{
		dup[q] = str[q];
	}
	dup[r] = '\0';

	return (dup);
}
