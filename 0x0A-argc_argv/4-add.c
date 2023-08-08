#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds two possitive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success or 1 on error
 */
int main(int argc, char *argv[])
{
	int a, b, c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(argv[a]);
	}
	printf("%d\n", c);

	return (0);
}
