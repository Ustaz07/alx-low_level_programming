#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.

    Args:
        grid (list): A list of lists of integers representing the island grid.

    Returns:
        int: The perimeter of the island.

    """
    perimeter = 0

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check the four neighboring cells (up, down, left, right)
                # and increment perimeter if the neighboring cell is water (0)
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
