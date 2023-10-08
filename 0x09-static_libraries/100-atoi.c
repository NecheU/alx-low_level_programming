#include "main.h"

/**
* _atoi - converts a string to an integer.
* @s: input string.
* Return: integer.
*/
int _atoi(char *s)
{
unsigned int h = 0, size = 0, oi = 0, pn = 1, m = 1, i;

while (*(s + h) != '\0')
{
if (size > 0 && (*(s + h) < '0' || *(s + h) > '9'))
break;

if (*(s + h) == '-')
pn *= -1;

if ((*(s + h) >= '0') && (*(s + h) <= '9'))
{
if (size > 0)
m *= 10;
size++;
}
h++;
}

for (i = h - size; i < h; i++)
{
oi = oi + ((*(s + i) - 48) * m);
m /= 10;
}
return (oi * pn);
}
