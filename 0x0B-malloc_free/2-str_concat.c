#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, s1_size = 0, s2_size = 0;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		s1_size++;
		i++;
	}

	i = 0;
	while (s2[i])
	{
		s2_size++;
		i++;
	}
	ar = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < s1_size)
	{
		ar[i] = s1[i];
		i++;
	}
	while (s2[i - s1_size])
	{
		ar[i] = s2[i - s1_size];
		i++;
	}
	ar[i] = '\0';
	return (ar);
}
