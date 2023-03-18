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
int n;
int x;
for (n = 0; n < 9; n++)
{
for (x = 1; x < 10; x++)
{
if (x != n && n < x)
putchar(n + '0');
putchar(x + '0');
putchar(',');
putchar(' ');
}
}
