#include "main.h"

/**
*  _strcmp - Function which compare two strings and
* @s1: first string
* @s2:second string
* Return:
* returns zero if s1 == s2
* returns negative number if s1 < s2
* returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
int q = 0, diff = 0;

while (q)
{
if (s1[q] == '\0' && s2[q] == '\0')
break;
else if (s1[q] == '\0')
{
diff = s2[q];
break;
}
else if (s1[q] == '\0')
{
diff = s1[q];
break;
}
else if (s1[q] != s2[q])
{
diff = s1[q] - s2[q];
break;
}
else
q++;

}
return (diff);
}
