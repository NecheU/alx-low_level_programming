#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - C funtion to print numbers followed by a new line
 * @separator: the string to be fixed between the numbers
 * @n: number of integers passes to the func
 * @...: a variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(list, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
