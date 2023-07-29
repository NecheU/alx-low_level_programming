#include "main.h"
/**
 * rot13 - encodes strings using rot13 encoding style
 * @r: the string to be encoded
 *
 * Return: the envodes string
 */
char *rot13(char *r)
{
	int e, f;
	char *k = "abcdefghijklmnopqrdtuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *l = "nopqrstuvwxyzabcdeqghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (e = 0; r[e] != '\0'; e++)
	{
		for (f = 0; k[f] != '\0'; f++)
		{
			if (r[e] == k[f])
			{
				r[e] = l[f];
				break;
			}
		}
	}
	return (r);
}

