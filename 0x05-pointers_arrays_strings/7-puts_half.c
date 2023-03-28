#include "main.h"
11;rgb:0000/0000/0000/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
int c = 0;
int i = 0;
str = "0123456789";
while (*str != '\0')
{
str++;
i++;
}
for (c = 0; c < (i/2); c++)
{
str--;
}
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
