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
	int e, f, result;

	if (argc <= 2)
	{
	printf("Error\n");
	return (1);
	}
	e = atoi(argv[1]);
	f = atoi(argv[2]);
	result = e * f;

	printf("%d\n", result);
	return (0);
}

