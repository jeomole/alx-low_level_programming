#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - creates a 2d array of integers
  * @height: number of rows
  * @width: number of columns
  * Return: pointer to the 2d array, NULL on failure
  * NULL, if width or height is 0 or negative.
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if ((width * height) <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		
		if (grid[i] == NULL)
		{
			while (i >= 0)

				free(grid[i--]);

			free(grid);
			return (NULL);
		}
	}
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
