#include "main.h"
/**
 * reverse_array - C function to reverse the content of an areay
 * @a: areay
 * @n: number of element
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int u, v;

	for (v = n - 1; v > n / 2; v--)
	{
		u = a[n - 1 - v];
		a[n - 1 - v] = a[v];
		a[v] = u;
	}
}
