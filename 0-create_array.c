#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array, and initializes it with a char.
 * @size: unsigned int.
 * @c: some char.
 * Return: NULL if size = 0.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *ar;

	if (size <= 0)
	{
		return (NULL);
	}
	ar = malloc(size);
	while (ar[i])
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
