#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - It gets the correct functions to
* perform the perform the orperation asked by the user
* @s: rhe operator passed as argument
*
* Return: a pointer to the dunction corresponding
* to the operator given as argument
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};

int i;

while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

return (ops[i].f);
}
