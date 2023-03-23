#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int y, cln, row, x;
for (row = 0; row <= 9; row++)
{
x = 0;
for (cln = 0; cln <= 9; cln++)
{
x = row * cln;
if (x >= 10)
{
y = x / 10;
_putchar(y + '0');
}
_putchar(x % 10 + '0');
if (cln < 9)
{
_putchar(',');
_putchar(' ');
x = row * (cln + 1);
if (x >= 10)
continue;
_putchar(' ');
}
if (cln == 9)
_putchar('\n');
}
}
}
