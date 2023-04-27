#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: input.
 * Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ar;

	ar = malloc(b * sizeof(unsigned int));
	if (ar == NULL)
	{
		exit(98);
	}
	free(ar);
	return (ar);
}
