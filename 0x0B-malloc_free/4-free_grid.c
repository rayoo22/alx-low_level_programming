#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees mem loc storing 2-d
 * @grid: pointer to 2d array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
