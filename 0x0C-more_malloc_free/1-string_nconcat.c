#include "main.h"
#include <string.h>
/**
 * string_nconcat - C function that concatenates two strings
 * @s1: First string
 * @s2: The second string
 * @n: number of strings to be concatenated
 * Return: pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = (s1 != NULL) ? strlen(s1) : 0;

	unsigned int len2 = (s2 != NULL) ? strlen(s2) : 0;

	if (n >= len2)
	{
		n = len2;
	}
	unsigned int total_len = len1 + n + 1;

	char *added = malloc(sizeof(char) * (total_len));

	if (added == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(added, s1);
	}
	else
	{
		added[0] = '\0';
	}

	strncat(added, s2, n);

	return (added);
}
