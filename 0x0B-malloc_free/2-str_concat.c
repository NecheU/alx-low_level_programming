#include "main.h"

/**
 * str_concat - C programe that concatenates two strings
 * @s1: the first string
 * @s2: second string
 *
 * Return: NULL if failure, else, pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int a, b = 0, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] || s2[a]; a++)
		c++;

	concat_str = malloc(sizeof(char) * c);

	if (concat_str == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
		concat_str[b++] = s1[a];

	for (a = 0; s2[a]; a++)
		concat_str[b++] = s2[a];

	return (concat_str);
}
