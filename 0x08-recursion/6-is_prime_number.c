#include "main.h"
/**
 * is_prime_number - C function that returns true if one of the numbers is
 * a prime number
 * @n: the number to be checked
 *
 * Return: true if the numner is prime
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
/**
 * is_prime- Fuction that returns 1 if a number is prime
 * @n: the number to be checkd
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int is_prime(int n, int start)
{
	if (n <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
