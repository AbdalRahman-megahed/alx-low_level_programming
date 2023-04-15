#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @str: the string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int i = 0;
	while (*str++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
			i++;
		}
	}
	return (str);
}
