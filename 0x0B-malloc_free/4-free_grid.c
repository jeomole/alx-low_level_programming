#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees the space allocated by malloc
  * to a 2d array of integers
  * @grid - 2d array
  * @height: number of rows
  * Return: 0
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);

	return (0);
}
