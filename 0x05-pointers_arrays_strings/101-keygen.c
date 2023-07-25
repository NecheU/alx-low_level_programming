#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random password
 *
 * Return: the password
 */
int main(void)
{
	char u;
	int k;

	srand(time(0));
	while (k <= 2645)
	{
		u = rand() % 128;
		k += u;
		putchar(u);
	}
	putchar(2772 - k);
	return (0);
}
