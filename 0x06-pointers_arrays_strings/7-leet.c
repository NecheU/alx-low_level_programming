#include "main.h"
/**
 * leet - encodes a string using leet encoding
 * @m: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *m)
{
	int y, j;
	char *t = "aAeEoOtTlL";
	char *v = "4433007711";

	for (y = 0; m[y] != '\0'; y++)
	{
		for (j = 0; j < 10; j++)
		{
			if (m[y] == t[j])
				m[y] = v[j];
			break;
		}
	}
	return (m);
}
