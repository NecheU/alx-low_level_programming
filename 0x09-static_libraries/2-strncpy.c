#include "main.h"
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputted number of bytes.
 * If the length of the source string is less than the maximum byte number,
 * the remainder of the destination string is filled with null bytes
 * works like the stdlib.h
 * @dest: buffee storing the string copy
 * @src: source
 * @n: max num of bytes coppied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int u;

	for (u = 0; u < n && src[u] != '\0'; u++)
		dest[u] = src[u];

	for (; u < n; u++)
		dest[u] = '\0';

	return (dest);
}
