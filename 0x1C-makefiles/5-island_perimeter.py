#!/usr/bin/python3
""" This module contains code that Calculates and
returns the perimeter of the island described in the grid."""


def island_perimeter(grid):
    """
    Calculates and returns the perimeter of the island described in the grid.

    Args:
    grid: A list of lists of integers representing the grid.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0:
                    if grid[row - 1][col] != 0:
                        perimeter -= 1
                if row < len(grid) - 1:
                    if grid[row + 1][col] != 0:
                        perimeter -= 1
                if col > 0:
                    if grid[row][col - 1] != 0:
                        perimeter -= 1
                if col < len(grid[0]) - 1:
                    if grid[row][col + 1] != 0:
                        perimeter -= 1
    return perimeter
