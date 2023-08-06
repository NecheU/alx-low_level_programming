#include <stdio.h>
/**
 * main - C program that prints all arguements passes to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("Arguments are: %s\n", argv[a]);
	return (0);
}
