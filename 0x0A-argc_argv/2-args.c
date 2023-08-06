#include <stdio.h>
/**
 * main - C program that prints all arguements passes to it
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */
int main(int argc, char argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("Arguements are: %d\n", argv[a]);
	return (0);
}
