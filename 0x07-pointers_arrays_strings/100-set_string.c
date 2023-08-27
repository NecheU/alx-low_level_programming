#include "main.h"
/**
 * set_string - C function tht sets the value
 * of a pointer to a char
 * @s: pointer value
 * @to: value to be pointed to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
