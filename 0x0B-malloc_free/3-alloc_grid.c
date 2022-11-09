#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - create a 2d array
  * @width: the width of the 2d array or columns
  * @height: height of 2d arryay or rows
  * Return: pointer or Null
  */

int **alloc_grid(int width, int height)
{
	int row, col;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* allocate mem for row */
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));

		if (grid[row] == NULL)
		{
			for (; row >= 0; row--)
				free(grid[row]);
			free(grid);
			return (NULL);
		}

	}

	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			grid[row][col] = 0;

	return (grid);
}
