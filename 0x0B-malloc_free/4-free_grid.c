#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees two dimentional grid
 * @grid: 2D grid
 * @height: height of dimention
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
