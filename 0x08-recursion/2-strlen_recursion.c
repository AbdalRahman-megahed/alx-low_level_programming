#include "main.h"
/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: A pointer to a string.
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		_strlen_recursion(s + 1);
	return (sizeof(s));
}
