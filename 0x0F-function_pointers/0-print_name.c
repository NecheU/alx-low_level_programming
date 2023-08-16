#include "function_pointers.h"

/**
 * print_name - C fucntion that prints a name
 * @name: bane to be printed
 * @f: function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
