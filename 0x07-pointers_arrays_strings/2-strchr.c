#include "main.h"
/**
 * *_strchar - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the
 * character is not found
 *
 * @s:string targeted
 * @c:character targeted
 *
 * Return: returns pointer to first occurrence of c
 */
char *_strchar(char *s, char c)
{
	int a;

	for (a = 0; (s[a] != c) && (s[a] != '\0'); a++)
		;
	if (s[a] == c)
		return (s + a);
	else
		return (NULL);
}
