#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("The size of a char: %d bytes \n", sizeof(char));
	printf("The size of int: %d bytes \n", sizeof(int));
	printf("The size of a long int: %d bytes \n", sizeof(long int));
	printf("The size of a long long int: %d bytes \n", sizeof(long long int));
	printf("The size of a float: %d bytes \n", sizeof(float));
	return (0);
}
