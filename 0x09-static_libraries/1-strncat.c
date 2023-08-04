#include "main.h"
/**
 * _strncat - concatenates teo strings but adds inputted number of bytes
 * @dest: string to be concatenated upon
 * @src: string to be added
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y = 0, dest_len = 0;

	while (dest[y++])
		dest_len++;

	for (y = 0; src[y] && y < n; y++)
		dest[dest_len++] = src[y];
	return (dest);
}

