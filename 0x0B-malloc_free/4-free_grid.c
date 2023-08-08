#include <stdio.h>
#include <stdlib.h>
/**
  *free_grid - frees grid
  *@grid: grid to free
  *@height: the height to free
  *
  *Return:nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
