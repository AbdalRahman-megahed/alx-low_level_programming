#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The entered string.
 * @accept: The detector.
 * Return: returns pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
