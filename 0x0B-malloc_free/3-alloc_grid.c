#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2-dimensional grid of integers
 * @width: The number of columns in the grid
 * @height: The number of rows in the grid
 *
 * Return: A pointer to the allocated grid, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, x = 0, y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (; x < height; x++)
	{
		grid[x] = (int *)malloc(sizeof(int) * width);
		if (grid[x] == NULL)
			return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
