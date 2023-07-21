#include <stdio.h>
/**
 * main - program that prints either number or fizz
 * or buzz or fizzBuzz
 *
 * Return: 0
 */
int main(void)
{
	int z;

	while (z++ < 100)

		if ((z % 3) == 0 && (z % 5 == 0))
			printf("FizzBuzz");

		else if ((z % 3) == 0)
		{
			if (z != 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
			printf("%d ", z);

	printf("\n");
	return (0);
}

