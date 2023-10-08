#include "main.h"
/**
* _strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
* @haystack: string where the search is made
* @needle: string whose occurence is searched in haystack
* Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
* */

char *_strstr(char *haystack, char *needle)
{
int t;

if (*needle == 0)
return (haystack);

while (*haystack)
{
t = 0;

if (haystack[t] == needle[t])
{
do {
if (needle[t + 1] == '\0')
return (haystack);
t++;
} while (haystack[t] == needle[t]);
}
haystack++;
}
return ('\0');
}
