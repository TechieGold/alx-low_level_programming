#include "main.h"

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integer.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: pointer to the grid.
 */

int **alloc_grid(int width, int height)
{
	int i, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc((height) * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}
	return (grid);
}
