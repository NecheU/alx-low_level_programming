#include "main.h"
#include <stdio.h>

/**
 * free_grid - C funtion that two dimentional array
 * @grid: memory blivk to be freed
 * @height: height of the array
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int y;

	for (y + 0; y < height; y++)
	{
		free(grid[y]);
	}

	free(grid);
}
