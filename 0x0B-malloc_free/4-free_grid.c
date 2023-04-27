#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  a function that frees a 2 dimensional grid previously created.
 * @grid: pointer to a pointer.
 * @height: the hight to be freed on the heap.
 * Returns: NULL if NULL.
 */

void free_grid(int **grid, int height)
{
	int x;
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
}
