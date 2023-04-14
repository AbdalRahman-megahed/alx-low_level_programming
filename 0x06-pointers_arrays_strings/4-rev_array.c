#include "main.h"
/**
 * reverse_array - Reverses the content of an array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int *p, i = 0, c = n - 1;
	while (i < n)
	{
		p[i] = a[i];
		i++;
	}
	while (c >= 0)
	{
		i = 0;
		a[i] = p[c];
		c--;
	}
}
