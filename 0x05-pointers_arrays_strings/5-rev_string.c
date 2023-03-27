#include "main.h"
/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
*/
void rev_string(char *s)
{
char p[];
int i = 0;
while (*s != '\0')
{
p[i] = s[i];;
i++
}
int a = 0;
while (i >= 0)
{
s[a] = p[i];
i--;
a++;
}
