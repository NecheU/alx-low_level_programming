#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Function that prints strings with a new line
 * @n: number of arguments passed
 * @separator: saparator
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int a;
	char *string;

	va_start(var, n);
	for (a = 0; a < n; a++)
	{
		string = va_arg(var, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(var);
}
