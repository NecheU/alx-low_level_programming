#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @a: number of rags
* @b: pointer
* Return: zero
*/
int main(int a, char **b)
{
int sum, change = 0;

if (a != 2)
{
printf("Error\n");
return (1);
}
sum = atoi(*(b + 1));
while (sum >= 25)
sum -= 25, change++;
while (sum >= 10)
sum -= 10, change++;
while (sum >= 5)
sum -= 5, change++;
while (sum >= 2)
sum -= 2, change++;
while (sum >= 1)
sum--, change++;
printf("%d\n", change);
return (0);
}
