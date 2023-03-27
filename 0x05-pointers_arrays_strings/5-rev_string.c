#include "main.h"
/**
* rev_string - Reverses a string
* @s: Input string
* Return: String in reverse
*/
void rev_string(char *s)
{
char p[sizeof(s)];
int a = 0;
int i = 0;
while (*s != '\0')
{
p[i] = s[i];;
i++;
}
while (i >= 0)
{
s[a] = p[i];
i--;
a++;
}
}
