#include <stdio.h>
/**
 * main - C program to print all possible
 *  combination of two digits
 *
 *  Return: 0
 */
int main(void)
{
	int u, v;

	for (u = 0; u < 9; u++)
	{
		for (v = u + 1; v < 10; v++)
		{
			putchar((u % 10) + '0');
			putchar((v % 10) + '0');
			if (u == 8 && v == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
