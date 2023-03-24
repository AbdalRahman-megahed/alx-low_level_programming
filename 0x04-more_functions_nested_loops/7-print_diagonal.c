#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: number of times the character \ should be printed
*/
void print_diagonal(int n)
{
if (n > 0)
{
for (i = 1; i <= n; i++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
else
{
putchar('\n');
}
}
