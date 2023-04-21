#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array, and initializes it with a specific char.
 * @size: insigned int.
 * @c: some char.
 * Return: some value.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	if (size <= 0)
	{
		return (NULL);
	}
	ar = malloc(size);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
