#include "holberton.h"
/**
 * free_grid - main
 * @grid: int
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
