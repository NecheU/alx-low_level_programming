#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers followed by a new line
 * @separator: the string to be printed between the numbers
 * @n: number of integers passes to the function
 * @...: a variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int c;

	va_start(numbers, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(numbers, int));

		if (c != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numbers);
}
