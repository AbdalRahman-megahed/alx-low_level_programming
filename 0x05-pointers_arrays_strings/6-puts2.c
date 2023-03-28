#include "main.h"
/**
11;rgb:0000/0000/0000* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/
void puts2(char *str)
{
while (*str != '\\' && ++*str != '0')
{
_putchar(*str);
str++;
str++;
}
_putchar('\n');
}
