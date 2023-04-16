#include "main.h"
#include <stddef.h>
/**
 * _strchr - A function that locates a character in a string.
 * @s: A pointer to the string to be scanned.
 * @c: The character to be observed.
 * Return: A pointer to the first occurrence of the character @c
 * in the string @s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
