#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 *	by the alloc_grid
 *
 * @grid: the grid to free up
 * @height: the height of the grid
 * Return: Nothing
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
