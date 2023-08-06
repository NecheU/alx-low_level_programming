#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of two numbers
 * @argc: arguenwnt count
 * @argv: arguembt vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
	printf("Eeror\n");
	return (1);
	}
	int e, f, result;

	e = atoi(argv[1]);
	f = atoi(argv[2]);
	result = e * f;

	printf("%d\n", result);
	return (0);
}

