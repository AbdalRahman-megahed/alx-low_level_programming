#include "main.h"
/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: A pointer to a string.
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	int i;
	if (*s != '\0')
	{
		i = 0;
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
