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
	int startw, starth;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * width);
	if (ar == NULL)
	{
		return (NULL);
	}
	starth = height;
	startw = width;
	while (height)
	{
		while (width)
		{
			ar[startw - width][starth - height] == 0;
			width--;
		}
		height--;
	}
	return (ar);
}
