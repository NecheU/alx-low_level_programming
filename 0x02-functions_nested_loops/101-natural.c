#include <stdio.h>
/**
 * main - prints counts of multiples of 3 or 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int g, sum;

	sum = 0;

	for (g = 0; g < 1024; g++)
	{
		if ((g % 3) == 0 && (g % 5) == 0)
			sum += g;
		printf("%d\n", g);
		return (0);
	}
}
