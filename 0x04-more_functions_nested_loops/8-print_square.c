#include "main.h"
/**
* print_square - prints a square, followed by a new line;
* @size: size of the square
*/
void print_square(int size)
{
int i, c;
for (i = 0; i < size; i++)
{
for (c = 0; c < size; c++)
{
if (size <= 0)
continue;
_putchar('#');
}
_putchar('\n');
}
}
