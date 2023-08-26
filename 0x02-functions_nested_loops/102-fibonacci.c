#include <stdio.h>
/**
 * main - A program that prints the first
 * 50 fibonacci numbers starting from 1
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a = 0, b = 1, c;
	int fib;

	for (fib = 0; fib < 50; fib++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if  (fib == 49)
			printf("\n");
		else
			printf(", ");

	}
	return (0);
}
