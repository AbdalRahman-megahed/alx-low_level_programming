#include "main.h"
11;rgb:0000/0000/0000
/**
* _abs - computes the absolute value of an integer
* @n: the int to check
* Return: the absolute value of int
*/

int _abs(int n)
{
if (n >= 0)
{
_putchar(n + '0');
}
else
{
n = n * -1;
_putchar(n + '0');
}
return (0);
}
