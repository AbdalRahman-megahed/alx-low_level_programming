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
	i = n - 1;
	while (i >= 0)
	{
		*a = *(p + i);
		i--;
	}
}
