#include "main.h"

/**
* print_times_table - C program that printe a time table
* beginning from n
* @n: parameter
*
* Return: nothing
*/

void print_times_table(int n)
{
int first_digi, second_digi, result;

if (n <= 15 && n >= 0)
{
for (first_digi = 0; first_digi <= n; first_digi++)
{
_putchar('0');

for (second_digi = 0; second_digi <= n; second_digi++)
{
_putchar(',');
_putchar(' ');
result = first_digi * second_digi;
if (result <= 99)
_putchar(' ');

if (result <= 9)
_putchar(' ');
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar((result / 10) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
}
