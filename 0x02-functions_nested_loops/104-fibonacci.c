#include <stdio.h>
/**
 * main - A C program that priints the first 98
 * fibonacci numbers
 *
 * Return: nothing
 */
int main(void)
{
	unsigned long a, b, c;
	unsigned long a_x1, a_x2, b_x1, b_x2;
	unsigned long x1, x2;
	int fib;

	for (fib = 0; fib < 91; fib++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	a_x1 = a / 10000000000;
	b_x1 = b / 10000000000;
	a_x2 = a % 10000000000;
	b_x2 = b % 10000000000;
	for (fib = 93; fib < 99; fib++)
	{
		x1 = a_x1 + b_x1;
		x2 = a_x2 + b_x2;
		if ((a_x2 + b_x2) > 9999999999)
		{
			x1 += 1;
			x2 %= 10000000000;
		}
		printf("%lu%lu", x1, x2);
		if (fib != 98)
			printf(", ");

		a_x1 = b_x1;
		a_x2 = b_x2;
		b_x1 = x1;
		b_x2 = x2;
	}
	printf("\n");
	return (0);
}

