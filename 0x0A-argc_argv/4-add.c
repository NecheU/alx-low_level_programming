#include <stdio.h>
#include <stdlib.h>

/**
 * main - C program that adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success or 1 if Error
 */
int main(int argc, char *argv[])
{
	int b, c;
	int total = 0;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c] != '\0'; c++)
		{
			if (argv[b][c] < '0' || argv[b][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[b]);
	}
	printf("%d\n", total);
	return (0);
}
