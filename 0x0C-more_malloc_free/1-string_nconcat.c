#include "main.h"
/**
* string_nconcat - Concatenates two string at most
* an inputted number of bytes
* @s1: The first string
* @s2: The second string
* @n: number of max num of bytes of s2 to concatenate to
* Return: NULL on failur, otherwise a pointer to the concatenated space in mem
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len = n, in;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (in = 0; s1[in]; in++)
len++;
concat = malloc(sizeof(char) * (len + 1));
if (concat == NULL)
return (NULL);

len = 0;
for (in = 0; s1[in]; in++)
concat[len++] = s1[in];

for (in = 0; s2[in] && in < n; in++)
concat[len++] = s2[in];
concat[len] = '\0';

return (concat);

}
