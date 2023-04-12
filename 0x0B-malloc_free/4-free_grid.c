#include "main.h"

/**
 * free_grid - function free the grid
 * @grid: grid containe memories
 * @height: integer
 *
 * Return: nothing (null)
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
