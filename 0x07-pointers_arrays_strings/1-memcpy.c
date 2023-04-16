#include "main.h"
/**
 * _memcpy - A function copies @n bytes.
 * @dest: A pointer to the memory area we paste to.
 * @src: A pointer to the memory area we copy from.
 * @n: number of the copied bytes.
 * Return: A pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptd = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ptd);
}
