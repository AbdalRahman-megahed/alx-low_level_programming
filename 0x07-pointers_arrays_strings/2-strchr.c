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
	char *ptfo = NULL;
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			*ptfo = s[i];
			break;
		}
	}
	return (ptfo);
}
