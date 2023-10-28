#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates and returns the perimeter of the island described in the grid.

    Args:
    grid: A list of lists of integers representing the grid.

    Returns:
    int: The perimeter of the island.
    """
    rows, cols = len(grid), len(grid[0])
    perimeter = 0

    if not grid:
        return 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 1
                if row < rows - 1 and grid[row + 1][col] == 1:
                    perimeter -= 1
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 1
                if col < cols - 1 and grid[row][col + 1] == 1:
                    perimeter -= 1

    return perimeter
