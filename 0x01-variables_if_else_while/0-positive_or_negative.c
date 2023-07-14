#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf("%d is negative number\n", n);
	}
	else if (n>0)
	{
		printf("%d is positive number\n", n);
	}
	else
	{
		printf("%d is zero\n"' n);
	}
	return (0);
}
