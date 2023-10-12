#include "variadic_functions.h"

/**
 * print_strings - Function to print strings with new line
 * @separator: separator between the strings
 * @n: number of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int c;
	char *str;

	va_start(list, n);

	for (c = 0; c < n; c++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
