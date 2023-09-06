#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D array of integers created by malloc_grid function
 * @grid: The 2D array of integers to be freed
 * @height: The height of the grid
 *
 * This function frees the memory allocated for the 2D array of integers.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
