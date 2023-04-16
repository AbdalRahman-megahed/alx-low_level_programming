#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - function locates the first occurrence in the string.
 * @s: The entered string.
 * @accept: The detector.
 * Return: returns pointer.
 */
char *_strpbrk(char *s, char *accept);
{
	char *ref = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
			return (s);
			}
			accept++;
		}
		accept = ref;
		s++;
	}
	return (NULL);
}
