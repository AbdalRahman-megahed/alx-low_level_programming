#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -function returns a pointer to a newly allocated space.
 * @str: a pointer to a string.
 * Return: NULL if @str = NULL and a pointer on success.
 */
char *_strdup(char *str)
{
	char *ar;
	int str_size = 1, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		str_size++;
		i++;
	}
	i = 0;
	ar = malloc(sizeof(char) * str_size);
	if (ar == NULL)
	{
		return (NULL);
	}
	while (i < str_size)
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
