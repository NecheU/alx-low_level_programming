#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("The size of a char: %lu bytes \n", sizeof(char));
	printf("The size of int: %lu bytes \n", sizeof(int));
	printf("The size of a long int: %lu bytes \n", sizeof(long int));
	printf("The size of a long long int: %lu bytes \n", sizeof(long long int));
	printf("The size of a float: %lu bytes \n", sizeof(float));
	return (0);
}
