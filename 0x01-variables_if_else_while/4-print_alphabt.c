#include <stdio.h>
/**
 * main - C program to print alphabets excluding e and q
 *
 * Return: 0
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'e' && let != 'q')
		{
			putchar(let);
		}
	}
	putchar('\n');
	return (0);
}
