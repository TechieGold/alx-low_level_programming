#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_grid - a function that frees a 2 dimensional array
  * previously created.
  * @grid: an input 2D array for free
  * @height: height of grid
  *
  * Return: Nothing
  */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
	{
		free((int *)grid[i++]);
	}
	free(grid);
}
