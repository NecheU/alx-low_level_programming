#include <stdio.h>
/**
 * main - Prints number of arguements passes to it
 * @argc: arguement count
 * @argv: arguement vector
 * Return: number of arguements
 */
int main(int argc, char __attribute__ ((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
