#include <stdio.h>
#include <stdlib.h>
/**
 * main - C program that multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	printf("%d\n", mult);
	return (0);
}
