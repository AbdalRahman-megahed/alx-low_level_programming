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
  /*main*/
char n = 'a';
while (n <= 'z')
{
if (n != 'q' && n != 'e')
{
putchar(n);
n++;
}
else
{
}
}
putchar('\n');
return (0);
}