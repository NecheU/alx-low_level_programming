#include <stdio.h>
/**
 * main - C programe to print combination
 * of three (3) numbers
 *
 * Return: 0
 */
int main(void)
{
	int u, v, w;

	for (u = 0; u < 9; u++)
	{
		for (v = u + 1; v < 9; v++)
		{
			for (w = v + 1; w < 10; w++)
			{
				putchar((u % 10) + '0');
				putchar((v % 10) + '0');
				putchar((w % 10) + '0');
				if (u == 7 && v == 8 && w == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
