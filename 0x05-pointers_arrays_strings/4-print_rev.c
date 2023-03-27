#include "main.h"
/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int c = 0;
while (*s != '\0')
{
s++;
c++;
}
while (c != 0)
{
_putchar(--*s);
c--;
}
_putchar('\n');
}
