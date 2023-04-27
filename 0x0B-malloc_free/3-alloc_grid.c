#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dim ar.
 * @width: the width of the array.
 * @height: the height of the array.
 * Return: NULL on failiure.
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int*));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		ar[x] = malloc(width * sizeof(int));
		if (ar == NULL)
		{
			for (; x >= 0; x--)
			{
				free(ar[x]);
			}
			free(ar);
			return (NULL
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			ar[x][y] = 0;
		}
	}
	return (ar);
}
