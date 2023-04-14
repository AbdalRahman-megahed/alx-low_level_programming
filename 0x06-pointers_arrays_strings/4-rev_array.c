#include "main.h"
/**
 * reverse_array - Reverses the content of an array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int *p, i = 0;

	while (i < n)
	{
		*p = *a;
		a++;
		p++;
		i++;
	}
	for (i = 0; i < n; i++)
		a[i] = p[n-i-1];
}
