#include "main.h"
/**
 * _memset - function fills the first @n bytes of the
 * memory area pointed to by @s with the constant byte @b.
 * @s: The meomry area we're copying from.
 * @b: The byte we're copying.
 * @n: number of bytes to be copied.
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pts = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (pts);
}
