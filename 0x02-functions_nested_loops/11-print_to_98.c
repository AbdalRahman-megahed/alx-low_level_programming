#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/
void print_to_98(int n)
{
int n, i;
n = -10;
if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if(i == 98)
continue;
putchar(',');
putchar(' ');
}
}
else if (n < 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if(i == 98)
continue;
putchar(',');
putchar(' ');
}
}
else
{
i == n;
printf("%d", i);
}
}
