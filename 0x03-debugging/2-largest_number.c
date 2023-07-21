#include "main.h"
/**
 * main - checks for the largest of numbers
 * @a: first intiger
 * @b: second integer
 * @c: third integer
 * Return: largest integer
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
