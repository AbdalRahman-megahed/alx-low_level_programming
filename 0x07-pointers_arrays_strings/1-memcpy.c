#include "main.h"
/**
 * _memcpy() - A function copies @n bytes from 
 * memory area @src to memory area @dest.
 * @dest: A pointer to the memory area we paste to.
 * @src: A pointer to the memory area we copy from.
 * @n: number of the copied bytes.
 * Return: A pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
