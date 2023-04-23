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
	int i = 0, j = 0;
	int *ar[width][height];

	if (width <= 0 || height <=0)
	{
		return (NULL);
	}
	while (j < height)
	{
		while (i < width)
		{
			ar[i][j] = 0;
			i++;
		}
		j++;
	}
	return (ar);
}
