#include "main.h"
/**
 * _strpbrk - The _strpbrk() function locates the first ocvirrence in the
 * sting s of any of the bytes in string accept
 * @s: string where search is performed
 * @accept: strimg where search bytes were located
 * Return:Returns a pointer to the byte in s found in accept, else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (accept[m] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}
