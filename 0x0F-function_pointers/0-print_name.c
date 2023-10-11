#include "function_pointers.h"

/**
 * print_name - C function that prints name usimg pointer to func
 * @name: string to be printed
 * @f: pointer to the function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
