#include "main.h"
/**
* wildcmp - Compares teo strings and return 1 if they are identical
* @s1: first string
* @s2: second string
* Return: Return 1 if identical
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\n')
return (*s1 == '\n');
if (*s2 == *s1)
return (*s1 != '\n' && wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\n' && wildcmp(s1 + 1, s2)));
return (0);
}

