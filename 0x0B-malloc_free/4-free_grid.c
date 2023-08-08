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
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
