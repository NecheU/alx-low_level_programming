#include <stdio.h>
/**
* main - programe that prints numbers in base 16 in small letter
*
* Return: 0
*/
int main(void)
{
int base_16;
for (base_16 = '0'; base_16 <= '9'; base_16++)
{
putchar(base_16);
if (base_16 == '9')
{
base_16 = 'a';
for (; base_16 <= 'f'; base_16++)
{
putchar(base_16);
}
break;
}

}
putchar('\n');
return (0);
}
