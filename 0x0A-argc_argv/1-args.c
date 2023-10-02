#include <stdio.h>
/**
 * main - C program that prints number of arguments
 * passed to it with a new line
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
