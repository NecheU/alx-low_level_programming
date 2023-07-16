#include <stdio.h>
/**
 * main - program that prints combination of aingle numbers
 *
 * Return: 0
 */
int main(void)
{
	int comb;

	for (comb = '0'; comb <= '9'; comb++)
	{
		putchar(comb);
		if (comb == '9')
		continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
