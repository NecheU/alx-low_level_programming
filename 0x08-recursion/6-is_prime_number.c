#include "main.h"

/**
 * is_prime_number - The function returns 1 if the inputed
 * integer is a prime number, otherwise, 0
 * @n: the number to be inputed
 *
 * Return: 1 if the input integer isa prime num, otherwise, 0
 */

int is_prime_number(int n)
{
	int prime = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, prime));
}


/**
 * is_prime - The function returns 1 if n is a prime num
 * @n: the number to be checked
 * @prime: where iteration starts
 *
 * Return: 1 if n is a prime num, 0 otherwise
 */
int is_prime(int n, int prime)
{
	if (prime <= 1)
		return (1);
	else if (n % prime == 0)
		return (0);
	return (is_prime(n, prime - 1));
}
