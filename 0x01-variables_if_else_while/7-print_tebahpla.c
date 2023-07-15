#include <stdio.h>

/**
* main - write alphabets in reverse
*
* Return: 0
*/
int main(void)
{
int revr;

for (revr = 'z'; revr >= 'a'; revr--)
{
putchar(revr);
}
putchar('\n');
return (0);
}

