#include "main.h"

void print_alphabet_x10(void)
{
int a, n;
for (a = 0; a < 10; a++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
