#include <stdio.h>

/**
 * main - C program to print num 0 to 10 with only putchar
 *
 * Return: 0
 */
int main(void)
{
	int no_char;

	for (no_char = '0'; no_char <= '9'; no_char++)
	{
		putchar(no_char);
	}
	putchar('\n');
	return (0);
}
