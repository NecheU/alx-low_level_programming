#include <stdio.h>
/**
 * main - C program to print alphabets excluding e and q
 *
 * Return: 0
 */
int main(void)
{
	char let;

	let = 'a';
	while (let <= 'z')
	{
		if (let != 'e' && let != 'q')
			putchar(let);
	}
	let++;
	putchar('\n');
	return (0);
}
