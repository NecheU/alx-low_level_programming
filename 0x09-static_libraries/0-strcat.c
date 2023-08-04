#include "main.h"
/**
 * _strcat - concatenate the string pointed to by *src
 * to the string pointed to by *dest
 * @dest: string to be concatenated
 * @src: string to be concatenated to
 * Return: returns pointed to dest
 */
char *_strcat(char *dest, char *src)
{
	int b = 0, dest_len = 0;

	while (dest[b++])
		dest_len++;

	for (b = 0; src[b]; b++)
		dest[dest_len++] = src[b];
	return (dest);
}
