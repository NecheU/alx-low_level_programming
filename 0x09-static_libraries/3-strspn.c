#include "main.h"
/**
 * _strspn - Searches for number of bytes in the initial
 * segment of s which consist onlybof bytes from accept
 * @s: segment targeted
 * @accept: reference bytes
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int hello = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (accept[m] == *s)
			{
				hello++;
				break;
			}
			else if ((accept[m + 1]) == '\0')
				return (hello);
		}
		s++;
	}
	return (hello);
}
