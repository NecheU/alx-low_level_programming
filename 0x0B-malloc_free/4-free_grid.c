#include "main.h"

/**
 * free_grid - C function that frees 2-dimensional arrays
 * @grid: memory block to be freed
 * @height: height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}

	free(grid);
}
