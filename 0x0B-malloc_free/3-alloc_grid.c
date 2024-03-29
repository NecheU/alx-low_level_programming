#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - It returns a pointer to a 2-dimensional array
* of integers
* @width: with of the array
* @height: height of the array
*
* Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
int **vect;
int b, c;

if (width == 0 || height == 0)
return (NULL);
vect = malloc(sizeof(int *) * height);
if (vect != NULL)
{
for (b = 0; b < height; b++)
{
vect[b] = malloc(sizeof(int) * width);
if (vect[b] != NULL)
{
for (c = 0; c < width; c++)
vect[b][c] = 0;
}
else
{
while (b >= 0)
{
free(vect[b]);
b--;
}
free(vect);
b = 0;
return (NULL);
}
}
return (vect);
}
else
{
return (NULL);
}
}
