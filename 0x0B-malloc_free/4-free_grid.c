#include "main.h"
/**
 * free_grid - frees memory of grid
 * @grid: 2d grid
 * @height: height of the 2d
 * Return: 0
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
