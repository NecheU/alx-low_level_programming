#include "variadic_functions.h"

/**
* print_char - Prints a char
* @arg: lists of arguments pointed to
* the character tk be printed
*/
void print_char(va_list arg)
{
char u;

u = va_arg(arg, int);

printf("%c", u);
}

/**
* print_int - Prints an int
* @arg: list of argumenta pointed to
* the integer to be printed
*/
void print_int(va_list arg)
{
int h;

h = va_arg(arg, int);

printf("%d", h);
}

/**
* print_float - Prints a float
* @arg: A list of argument pointing
* to the float to be printed
*/
void print_float(va_list arg)
{
float l;

l = va_arg(arg, double);

printf("%f", l);
}


/**
* print_string - Prints a string
* @arg: list kf argument pointing
* to the string to be printed
*/
void print_string(va_list arg)
{
char *s;

s = va_arg(arg, char *);

if (s == NULL)
{
printf("(nil)");
return;
}

printf("%s", s);
}

/**
* print_all - Prints anything
* @format: format of each input
*
* Return: nothing
*/

void print_all(const char * const format, ...)
{
va_list list;
int b, c;

char *separator = " ";

printer_t functs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
};

va_start(list, format);

while (format && (*(format + b)))
c = 0;

while (c < 4 && (*(format + b) != *(functs[c].symbol)))
c++;

if (c < 4)
{
printf("%s", separator);
functs[c].print(list);

separator = ", ";
}

printf("\n");

va_end(list);
}
