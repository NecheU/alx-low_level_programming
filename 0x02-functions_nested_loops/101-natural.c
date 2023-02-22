#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5 up to 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
