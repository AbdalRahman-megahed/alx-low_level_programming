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
int n, x, y, z;
for (n = 0; n < 10; n++)
{
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
for (z = 0; z < 10; z++)
{
if (n + x < y + z && n <= y)
{
/*never print again 00 00 or 55 55*/
if (n == y && x == z)
continue;
putchar(n + '0');
/* the last print 98 99*/
if (n + y + z + x == 36 )
continue;
putchar(x + '0');
putchar(' ');
putchar(y + '0');
putchar(z + '0');
/* never print the last ,*/ 
if (n + y + z + x == 35 && x == 8)
continue;
{
putchar(',');
putchar(' ');
}
}
}
}
}    
}            
return (0);
}
