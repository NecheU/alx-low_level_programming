#include "main.h"
/**
 * _memset - function that fills the first n bytes of the memory area
 * pointed to bu s with the constant byte b
 * @s: target
 * @b: const bytes
 * @n: number of bytes
 * Return: returns a new variable of target
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
