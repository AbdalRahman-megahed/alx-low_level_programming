#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
int n, x, y,z;
for (n =0; n < 10; n++)
{
for (x =0; x < 9; x++)
{
for (y = n; y < 10; y++)
{
for (z = x + 1; z < 10; z++)
{
putchar(n + '0');
putchar(x + '0');
putchar(' ');
putchar(y + '0');
putchar(z + '0');
putchar(',');
putchar(' ');
}  
}
}
}
putchar('\n');
return (0);
}
